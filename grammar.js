// This Source Form is subject to the terms of the AQUA Software License,
// v. 1.0. Copyright (c) 2024 Aymeric Wibo

module.exports = grammar({
	name: "flamingo",

	rules: {
		source_file: $ => repeat($.statement),

		statement: $ => choice(
			$.expression,
			$.print,
			$.assignment,
		),

		print: $ => seq(
			"print",
			field("msg", $.expression),
		),

		expression: $ => choice(
			$.identifier,
			$.literal,
		),

		literal: $ => choice(
			$.number,
			$.string,
		),

		assignment: $ => seq(
			field("left", $.identifier),
			"=",
			field("right", $.expression),
		),

		block: $ => seq("{", repeat($.statement), "}"),

		unary_expression: $ => choice(
			seq("-", $.expression),
			seq("!", $.expression),
		),

		identifier: _ => /[_A-z][_A-z0-9]*/,
		number: _ => /\d+/,
		string: _ => /"([^"\\]|\\.)*"/,
	},
})
