// This Source Form is subject to the terms of the AQUA Software License,
// v. 1.0. Copyright (c) 2024 Aymeric Wibo

// https://stackoverflow.com/questions/62661663/is-there-a-standard-treesitter-construct-for-parsing-an-arbitrary-length-list

function comma_sep(rule) {
	return seq(rule, repeat(seq(",", rule)), optional(","))
}

module.exports = grammar({
	name: "flamingo",

	rules: {
		source_file: $ => repeat($.statement),

		comment: _ => token(seq("#", /[^#].*/)),
		doc_comment: $ => seq("##", $.doc_comment_content),
		doc_comment_content: _ => /.*/,

		// TODO This is a bit of a trick: https://github.com/tree-sitter/tree-sitter/discussions/1173
		// Ideally, we'd use an external scanner to do this so we can make the closing delimiter optional.

		// doc_comment: $ => seq("/*", $.doc_comment_content, "/"),
		// doc_comment_content: _ => /[^*]*\*+([^/*][^*]*\*+)*/,

		statement: $ =>
			choice(
				$.comment,
				$.doc_comment,
				$.block,
				$.expression,
				$.print,
				$.assert,
				$.assignment,
				$.var_declaration,
				$.import,
				$.function_declaration,
				$.class_declaration,
				$.return,
			),

		block: $ => seq("{", field("body", repeat($.statement)), "}"),

		import: $ => seq("import", optional(field("relative", $.import_relative_dot)), field("path", $.import_path)),
		import_path: $ => seq(field("bit", $.identifier), optional(seq(".", field("rest", $.import_path)))),
		import_relative_dot: _ => ".",

		qualifier: _ => choice("extern", "pure"),
		qualifier_list: $ => choice($.qualifier, seq($.qualifier, $.qualifier_list)),

		function_declaration: $ =>
			prec(
				100,
				seq(
					field("qualifiers", optional($.qualifier_list)),
					"fn",
					field("name", choice($.identifier, $.overloadable_operator)),
					optional(seq("(", optional(field("params", $.param_list)), ")")),
					field("body", $.statement),
				),
			),

		function_expression: $ =>
			seq("fn", optional(seq("(", optional(field("params", $.param_list)), ")")), field("body", $.statement)),

		class_declaration: $ =>
			seq(
				field("qualifiers", optional($.qualifier_list)),
				"class",
				field("name", $.identifier),
				field("body", $.statement),
			),

		print: $ => seq("print", field("msg", $.expression)),
		assert: $ => seq("assert", field("test", $.expression)),

		expression: $ =>
			prec(
				-1,
				choice(
					$.identifier,
					$.literal,
					$.call,
					$.access_list,
					$.parenthesized_expression,
					$.vec,
					$.map,
					$.binary_expression,
				),
			),

		parenthesized_expression: $ => seq("(", field("expression", $.expression), ")"),

		access_list: $ => seq(field("accessed", $.expression), ".", field("accessor", $.identifier)),

		call: $ => prec(99, seq(field("callable", $.expression), "(", field("args", optional($.arg_list)), ")")),

		template_type: _ => choice("vec", "map"),
		type_name: $ => choice($.identifier, "vec", "map"),
		type: $ => choice($.type_name, seq("vec", "<", $.type, ">"), seq("map", "<", $.type, ",", $.type, ">")),

		param: $ => choice($.identifier, seq($.identifier, ":", $.type)),
		param_list: $ => comma_sep($.param),

		arg_list: $ => comma_sep($.expression),

		literal: $ => choice($.number, $.string, $.bool),

		var_declaration: $ => seq($.identifier, ":", $.type),
		assignment: $ => seq(field("left", choice($.var_declaration, $.identifier)), "=", field("right", $.expression)),

		return: $ => prec.left(100, seq("return", optional($.expression))),

		unary_expression: $ => choice(seq("-", $.expression), seq("!", $.expression)),

		// TODO Precedence. === has a lower precedence than ++. Currently I think it's just left-associative. How do I define precedence levels instead?
		binary_expression: $ =>
			seq(field("left", $.expression), field("operator", $.overloadable_operator, field("right", $.expression))),

		expression_list: $ => choice($.expression, seq($.expression, ",", $.expression_list)),
		vec: $ => seq("[", optional($.expression_list), "]"),

		map_item: $ => seq(field("key", $.expression), ":", field("value", $.expression)),
		map_item_list: $ => choice($.map_item, seq($.map_item, ",", $.map_item_list)),
		map: $ => prec(-1, seq("{", optional($.map_item_list), "}")),

		overloadable_operator: _ => choice("++", "==="),
		primitive_type: _ => choice("any", "int", "str", "bool", "void"),
		identifier: $ => choice(/[_A-z][_A-z0-9]*/, $.primitive_type),
		number: _ => /\d+/,
		string: _ => /"([^"\\]|\\.)*"/,
		bool: _ => choice("true", "false", "error"),
	},
})
