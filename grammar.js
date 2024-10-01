// This Source Form is subject to the terms of the AQUA Software License,
// v. 1.0. Copyright (c) 2024 Aymeric Wibo

const PREC = {
	literal: 100,
	access: 90,
	call: 80,
	unary: 70,
	power: 60,
	multiplicative: 50,
	additive: 40,
	comparative: 30,
	and: 20,
	or: 10,
}

// https://stackoverflow.com/questions/62661663/is-there-a-standard-treesitter-construct-for-parsing-an-arbitrary-length-list

function comma_sep(rule) {
	return seq(rule, repeat(seq(",", rule)), optional(","))
}

// @ts-ignore: Fairly certain Tree-sitter doesn't support ES6 modules.
module.exports = grammar({
	name: "flamingo",

	// No one should be using CRLF's, but just in case, this removes CR's.

	// extras: _ => ["\r"],

	rules: {
		source_file: $ => optional($._statement_list),

		_statement_list: $ =>
			repeat1(
				choice(seq($.statement, choice(";", "\n", $._line_insensitive_statement)), $._line_insensitive_statement),
			),

		comment: _ => token(seq("#", /[^#].*/)),
		doc_comment: $ => seq("##", $.doc_comment_content),
		doc_comment_content: _ => /.*/,

		// TODO This is a bit of a trick: https://github.com/tree-sitter/tree-sitter/discussions/1173
		// Ideally, we'd use an external scanner to do this so we can make the closing delimiter optional.

		// doc_comment: $ => seq("/*", $.doc_comment_content, "/"),
		// doc_comment_content: _ => /[^*]*\*+([^/*][^*]*\*+)*/,

		_line_insensitive_statement: $ =>
			choice($.comment, $.doc_comment, $.block, $.function_declaration, $.class_declaration),

		statement: $ =>
			choice($.expression, $.print, $.assert, $.return, $.assignment, $.import, $.var_decl, $.proto, $.return),

		block: $ => seq("{", optional(field("body", choice($._statement_list, $.statement))), "}"),

		import: $ => seq("import", optional(field("relative", $.import_relative_dot)), field("path", $.import_path)),
		import_path: $ => seq(field("bit", $.identifier), optional(seq(".", field("rest", $.import_path)))),
		import_relative_dot: _ => ".",

		qualifier: _ => choice("static", "pure"),
		qualifier_list: $ => repeat1($.qualifier),

		proto: $ =>
			prec.right(
				seq(
					field("qualifiers", optional($.qualifier_list)),
					"proto",
					field("name", choice($.identifier, $.overloadable_operator)),
					optional(seq("(", optional(field("params", $.param_list)), ")")),
					optional(seq("->", field("ret_type", $.type))),
				),
			),

		function_declaration: $ =>
			seq(
				field("qualifiers", optional($.qualifier_list)),
				"fn",
				field("name", choice($.identifier, $.overloadable_operator)),
				optional(seq("(", optional(field("params", $.param_list)), ")")),
				optional(seq("->", field("ret_type", $.type))),
				field("body", $.block),
			),

		lambda: $ => seq("|", optional(field("params", $.param_list)), "|", field("body", choice($.block, $.expression))),

		class_declaration: $ =>
			seq(
				"class",
				field("name", $.identifier),
				optional(seq("(", optional(field("params", $.param_list)), ")")),
				field("body", $.block),
			),

		print: $ => seq("print", field("msg", $.expression)),
		assert: $ => seq("assert", field("test", $.expression)),
		return: $ => prec.right(seq("return", optional(field("rv", $.expression)))),

		// TODO Should we make expression a hidden node?

		expression: $ =>
			choice(
				$.identifier,
				$.literal,
				$.call,
				$.access,
				$.parenthesized_expression,
				$.vec,
				$.map,
				$.unary_expression,
				$.binary_expression,
				$.index,
				$.slice,
				$.lambda,
			),

		parenthesized_expression: $ => seq("(", field("expression", $.expression), ")"),

		access: $ => prec(PREC.access, seq(field("accessed", $.expression), ".", field("accessor", $.identifier))),
		call: $ => prec(PREC.call, seq(field("callable", $.expression), "(", field("args", optional($.arg_list)), ")")),

		template_type: _ => choice("vec", "map"),
		type_name: $ => choice($.identifier, "vec", "map"),
		type: $ => choice($.type_name, seq("vec", "<", $.type, ">"), seq("map", "<", $.type, ",", $.type, ">")),

		param: $ => choice(field("ident", $.identifier), seq(field("ident", $.identifier), ":", field("type", $.type))),
		param_list: $ => comma_sep($.param),

		arg_list: $ => comma_sep($.expression),

		literal: $ => choice($.number, $.string, $.bool, $.none),

		var_decl: $ =>
			seq(
				field("qualifiers", optional($.qualifier_list)),
				"let",
				field("name", $.identifier),
				optional(seq(":", field("type", $.type))),
				optional(seq("=", field("initial", $.expression))),
			),
		assignment: $ => seq(field("left", choice($.access, $.identifier)), "=", field("right", $.expression)),

		unary_operator: _ => choice("-", "!"),
		unary_expression: $ => seq(field("operator", $.unary_operator), field("operand", $.expression)),

		power_operator: _ => "**",
		multiplicative_operator: _ => choice("*", "/", "%"),
		additive_operator: _ => choice("+", "-"),
		comparative_operator: _ => choice("==", "!=", "<", "<=", ">", ">="),
		and_operator: _ => "&&",
		or_operator: _ => choice("||", "^^"),

		binary_expression: $ => {
			// Stolen from tree-sitter-go.

			const table = [
				[PREC.power, $.power_operator],
				[PREC.multiplicative, $.multiplicative_operator],
				[PREC.additive, $.additive_operator],
				[PREC.comparative, $.comparative_operator],
				[PREC.and, $.and_operator],
				[PREC.or, $.or_operator],
			]

			return choice(
				...table.map(([precedence, operator]) =>
					prec.left(
						precedence,
						seq(field("left", $.expression), field("operator", operator), field("right", $.expression)),
					),
				),
			)
		},

		vec: $ => seq("[", optional(comma_sep($.expression)), "]"),
		index: $ => prec(PREC.call, seq(field("indexed", $.expression), "[", field("index", $.expression), "]")),
		slice: $ =>
			prec(
				PREC.call,
				seq(
					field("indexed", $.expression),
					"[",
					optional(field("slice_begin", $.expression)),
					":",
					optional(field("slice_end", $.expression)),
					"]",
				),
			),

		map_item: $ => seq(field("key", $.expression), ":", field("value", $.expression)),
		map: $ => prec(PREC.literal, seq("{", optional(comma_sep($.map_item)), "}")),

		overloadable_operator: _ => choice("++", "==="),
		primitive_type: _ => choice("any", "int", "str", "bool", "void"),
		identifier: $ => choice(/[_a-zA-Z][_a-zA-Z0-9]*/, $.primitive_type),
		// TODO Support arbitrary unicode identifiers.
		// identifier: $ => choice(/[^\W0-9]\w*/, $.primitive_type),
		number: _ => /\d+/,
		string: _ => /"([^"\\]|\\.)*"/,
		bool: _ => choice("true", "false", "error"),
		none: _ => "none",
	},
})
