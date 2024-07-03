// This Source Form is subject to the terms of the AQUA Software License,
// v. 1.0. Copyright (c) 2024 Aymeric Wibo

module.exports = grammar({
	name: "flamingo",

	rules: {
		source_file: $ => repeat(choice($.statement, $.doc_comment, $.comment)),

		comment: _ => token(seq("#", /[^#].*/)),
		doc_comment: $ => seq("##", $.doc_comment_content),
		doc_comment_content: _ => /.*/,

		// TODO This is a bit of a trick: https://github.com/tree-sitter/tree-sitter/discussions/1173
		// Ideally, we'd use an external scanner to do this so we can make the closing delimiter optional.

		// doc_comment: $ => seq("/*", $.doc_comment_content, "/"),
		// doc_comment_content: _ => /[^*]*\*+([^/*][^*]*\*+)*/,

		statement: $ =>
			choice(
				$.block,
				$.expression,
				$.print,
				$.assert,
				$.assignment,
				$.import,
				$.function_declaration,
				$.class_declaration,
			),

		block: $ => seq("{", field("body", repeat($.statement)), "}"),

		import: $ => seq("import", field("path", $.identifier)),

		qualifier: _ => choice("extern", "pure"),
		qualifier_list: $ => choice($.qualifier, seq($.qualifier, $.qualifier_list)),

		function_declaration: $ =>
			prec(
				100,
				seq(
					field("qualifiers", optional($.qualifier_list)),
					"fn",
					field("name", $.identifier),
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
				"{",
				field("body", repeat($.statement)),
				"}",
			),

		print: $ => seq("print", field("msg", $.expression)),
		assert: $ => seq("assert", field("test", $.expression)),

		expression: $ => prec(-1, choice($.identifier, $.literal, $.call, $.access_list, $.parenthesized_expression)),

		parenthesized_expression: $ => seq("(", field("expression", $.expression), ")"),

		access_list: $ => seq(field("accessed", $.expression), ".", field("accessor", $.identifier)),

		call: $ => prec(99, seq(field("callable", $.expression), "(", field("args", optional($.argument_list)), ")")),

		param_list: $ => choice($.identifier, seq($.identifier, ",", $.param_list)),

		argument_list: $ => choice($.expression, seq($.expression, ",", $.argument_list)),

		literal: $ => choice($.number, $.string, $.bool),

		assignment: $ => seq(field("left", $.identifier), "=", field("right", $.expression)),

		unary_expression: $ => choice(seq("-", $.expression), seq("!", $.expression)),

		identifier: _ => /[_A-z][_A-z0-9]*/,
		number: _ => /\d+/,
		string: _ => /"([^"\\]|\\.)*"/,
		bool: _ => choice("true", "false", "error"),
	},
})
