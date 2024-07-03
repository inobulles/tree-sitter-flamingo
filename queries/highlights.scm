; This Source Form is subject to the terms of the AQUA Software License,
; v. 1.0. Copyright (c) 2024 Aymeric Wibo

(comment) @comment
(doc_comment) @comment.documentation

; function calls

(call
	callable: (expression (identifier)) @function
)

; builtins

[
	"print"
	"assert"
] @function.builtin

; identifiers

(identifier) @variable

; declarations

(function_declaration name: (identifier) @function)
(class_declaration name: (identifier) @function)

; operators

; [
; 	"+"
; ] @operator

; keywords

[
	"fn"
	"class"
	"import"
] @keyword

; literals

(string) @string
(number) @number
(bool) @constant.builtin
