#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_POUND_POUND = 2,
  sym_doc_comment_content = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_import = 6,
  anon_sym_extern = 7,
  anon_sym_pure = 8,
  anon_sym_fn = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_class = 12,
  anon_sym_print = 13,
  anon_sym_assert = 14,
  anon_sym_DOT = 15,
  anon_sym_vec = 16,
  anon_sym_map = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_COMMA = 20,
  anon_sym_COLON = 21,
  anon_sym_EQ = 22,
  anon_sym_return = 23,
  anon_sym_DASH = 24,
  anon_sym_BANG = 25,
  anon_sym_PLUS_PLUS = 26,
  anon_sym_EQ_EQ_EQ = 27,
  anon_sym_any = 28,
  anon_sym_int = 29,
  anon_sym_str = 30,
  anon_sym_bool = 31,
  anon_sym_void = 32,
  aux_sym_identifier_token1 = 33,
  sym_number = 34,
  sym_string = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  anon_sym_error = 38,
  sym_source_file = 39,
  sym_doc_comment = 40,
  sym_statement = 41,
  sym_block = 42,
  sym_import = 43,
  sym_qualifier = 44,
  sym_qualifier_list = 45,
  sym_function_declaration = 46,
  sym_class_declaration = 47,
  sym_print = 48,
  sym_assert = 49,
  sym_expression = 50,
  sym_parenthesized_expression = 51,
  sym_access_list = 52,
  sym_call = 53,
  sym_type_name = 54,
  sym_type = 55,
  sym_param = 56,
  sym_param_list = 57,
  sym_argument_list = 58,
  sym_literal = 59,
  sym_var_declaration = 60,
  sym_assignment = 61,
  sym_return = 62,
  sym_overloadable_operator = 63,
  sym_primitive_type = 64,
  sym_identifier = 65,
  sym_bool = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_POUND_POUND] = "##",
  [sym_doc_comment_content] = "doc_comment_content",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_import] = "import",
  [anon_sym_extern] = "extern",
  [anon_sym_pure] = "pure",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_class] = "class",
  [anon_sym_print] = "print",
  [anon_sym_assert] = "assert",
  [anon_sym_DOT] = ".",
  [anon_sym_vec] = "vec",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_any] = "any",
  [anon_sym_int] = "int",
  [anon_sym_str] = "str",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_error] = "error",
  [sym_source_file] = "source_file",
  [sym_doc_comment] = "doc_comment",
  [sym_statement] = "statement",
  [sym_block] = "block",
  [sym_import] = "import",
  [sym_qualifier] = "qualifier",
  [sym_qualifier_list] = "qualifier_list",
  [sym_function_declaration] = "function_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_print] = "print",
  [sym_assert] = "assert",
  [sym_expression] = "expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_access_list] = "access_list",
  [sym_call] = "call",
  [sym_type_name] = "type_name",
  [sym_type] = "type",
  [sym_param] = "param",
  [sym_param_list] = "param_list",
  [sym_argument_list] = "argument_list",
  [sym_literal] = "literal",
  [sym_var_declaration] = "var_declaration",
  [sym_assignment] = "assignment",
  [sym_return] = "return",
  [sym_overloadable_operator] = "overloadable_operator",
  [sym_primitive_type] = "primitive_type",
  [sym_identifier] = "identifier",
  [sym_bool] = "bool",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [sym_doc_comment_content] = sym_doc_comment_content,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_vec] = anon_sym_vec,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_error] = anon_sym_error,
  [sym_source_file] = sym_source_file,
  [sym_doc_comment] = sym_doc_comment,
  [sym_statement] = sym_statement,
  [sym_block] = sym_block,
  [sym_import] = sym_import,
  [sym_qualifier] = sym_qualifier,
  [sym_qualifier_list] = sym_qualifier_list,
  [sym_function_declaration] = sym_function_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_print] = sym_print,
  [sym_assert] = sym_assert,
  [sym_expression] = sym_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_access_list] = sym_access_list,
  [sym_call] = sym_call,
  [sym_type_name] = sym_type_name,
  [sym_type] = sym_type,
  [sym_param] = sym_param,
  [sym_param_list] = sym_param_list,
  [sym_argument_list] = sym_argument_list,
  [sym_literal] = sym_literal,
  [sym_var_declaration] = sym_var_declaration,
  [sym_assignment] = sym_assignment,
  [sym_return] = sym_return,
  [sym_overloadable_operator] = sym_overloadable_operator,
  [sym_primitive_type] = sym_primitive_type,
  [sym_identifier] = sym_identifier,
  [sym_bool] = sym_bool,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_doc_comment_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_print] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_list] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_overloadable_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_accessed = 1,
  field_accessor = 2,
  field_args = 3,
  field_body = 4,
  field_callable = 5,
  field_expression = 6,
  field_left = 7,
  field_msg = 8,
  field_name = 9,
  field_params = 10,
  field_path = 11,
  field_qualifiers = 12,
  field_right = 13,
  field_test = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_accessed] = "accessed",
  [field_accessor] = "accessor",
  [field_args] = "args",
  [field_body] = "body",
  [field_callable] = "callable",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_msg] = "msg",
  [field_name] = "name",
  [field_params] = "params",
  [field_path] = "path",
  [field_qualifiers] = "qualifiers",
  [field_right] = "right",
  [field_test] = "test",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 3},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_msg, 1},
  [2] =
    {field_test, 1},
  [3] =
    {field_body, 1},
  [4] =
    {field_body, 2},
    {field_name, 1},
  [6] =
    {field_expression, 1},
  [7] =
    {field_callable, 0},
  [8] =
    {field_accessed, 0},
    {field_accessor, 2},
  [10] =
    {field_left, 0},
    {field_right, 2},
  [12] =
    {field_name, 1},
  [13] =
    {field_body, 3},
    {field_name, 2},
    {field_qualifiers, 0},
  [16] =
    {field_args, 2},
    {field_callable, 0},
  [18] =
    {field_body, 4},
    {field_name, 1},
  [20] =
    {field_body, 3},
    {field_name, 1},
  [22] =
    {field_name, 2},
    {field_qualifiers, 0},
  [24] =
    {field_body, 5},
    {field_name, 1},
    {field_params, 3},
  [27] =
    {field_body, 5},
    {field_name, 2},
    {field_qualifiers, 0},
  [30] =
    {field_body, 4},
    {field_name, 2},
    {field_qualifiers, 0},
  [33] =
    {field_body, 6},
    {field_name, 2},
    {field_params, 4},
    {field_qualifiers, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(70);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 'v') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 'v') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(90);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_vec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 28},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_vec] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [2] = {
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
    [anon_sym_POUND_POUND] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(46),
    [anon_sym_extern] = ACTIONS(49),
    [anon_sym_pure] = ACTIONS(49),
    [anon_sym_fn] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_print] = ACTIONS(61),
    [anon_sym_assert] = ACTIONS(64),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_any] = ACTIONS(70),
    [anon_sym_int] = ACTIONS(70),
    [anon_sym_str] = ACTIONS(70),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_void] = ACTIONS(70),
    [aux_sym_identifier_token1] = ACTIONS(73),
    [sym_number] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [anon_sym_error] = ACTIONS(79),
  },
  [3] = {
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(84),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [4] = {
    [sym_statement] = STATE(9),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [5] = {
    [sym_statement] = STATE(10),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [6] = {
    [sym_statement] = STATE(5),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [7] = {
    [sym_statement] = STATE(10),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [8] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [9] = {
    [sym_statement] = STATE(10),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [10] = {
    [sym_statement] = STATE(10),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_import] = ACTIONS(103),
    [anon_sym_extern] = ACTIONS(106),
    [anon_sym_pure] = ACTIONS(106),
    [anon_sym_fn] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_class] = ACTIONS(115),
    [anon_sym_print] = ACTIONS(118),
    [anon_sym_assert] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(124),
    [anon_sym_any] = ACTIONS(127),
    [anon_sym_int] = ACTIONS(127),
    [anon_sym_str] = ACTIONS(127),
    [anon_sym_bool] = ACTIONS(127),
    [anon_sym_void] = ACTIONS(127),
    [aux_sym_identifier_token1] = ACTIONS(130),
    [sym_number] = ACTIONS(133),
    [sym_string] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_error] = ACTIONS(136),
  },
  [11] = {
    [sym_statement] = STATE(53),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [12] = {
    [sym_statement] = STATE(44),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [13] = {
    [sym_statement] = STATE(50),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [14] = {
    [sym_statement] = STATE(49),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [15] = {
    [sym_statement] = STATE(48),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
  [16] = {
    [sym_statement] = STATE(43),
    [sym_block] = STATE(52),
    [sym_import] = STATE(52),
    [sym_qualifier] = STATE(77),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(52),
    [sym_class_declaration] = STATE(52),
    [sym_print] = STATE(52),
    [sym_assert] = STATE(52),
    [sym_expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(35),
    [sym_assignment] = STATE(52),
    [sym_return] = STATE(52),
    [sym_primitive_type] = STATE(19),
    [sym_identifier] = STATE(30),
    [sym_bool] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_str] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_void] = ACTIONS(27),
    [aux_sym_identifier_token1] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_error] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(39), 1,
      sym_expression,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(145), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [46] = 2,
    ACTIONS(147), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(149), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [82] = 2,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(153), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [118] = 3,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(155), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(157), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [155] = 3,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(155), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(157), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [192] = 2,
    ACTIONS(155), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(157), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [226] = 2,
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(165), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [260] = 2,
    ACTIONS(167), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(169), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [294] = 2,
    ACTIONS(171), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(173), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [328] = 2,
    ACTIONS(175), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(177), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [361] = 2,
    ACTIONS(179), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(181), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [394] = 2,
    ACTIONS(183), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(185), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [427] = 2,
    ACTIONS(187), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(189), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [460] = 4,
    ACTIONS(191), 1,
      anon_sym_COLON,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_number,
      sym_string,
    ACTIONS(185), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [497] = 2,
    ACTIONS(195), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(197), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [530] = 2,
    ACTIONS(199), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(201), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [563] = 2,
    ACTIONS(203), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_number,
      sym_string,
    ACTIONS(205), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [596] = 2,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(209), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [627] = 3,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(213), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [660] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(217), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [695] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(225), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [730] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(229), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [765] = 3,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(233), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [798] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(213), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [833] = 2,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(237), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [863] = 2,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(241), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [893] = 2,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(245), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [923] = 2,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(249), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [953] = 2,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(253), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [983] = 2,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(257), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1013] = 2,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(261), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1043] = 2,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(265), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1073] = 2,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(269), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1103] = 2,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(273), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1133] = 2,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(277), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1163] = 2,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(213), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1193] = 2,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(281), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1223] = 2,
    ACTIONS(283), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(285), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1253] = 2,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(289), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1282] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(78), 1,
      sym_identifier,
    STATE(81), 1,
      sym_expression,
    STATE(86), 1,
      sym_param,
    STATE(91), 1,
      sym_param_list,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(28), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1332] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(78), 1,
      sym_identifier,
    STATE(81), 1,
      sym_expression,
    STATE(86), 1,
      sym_param,
    STATE(95), 1,
      sym_param_list,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(28), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1382] = 11,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(79), 1,
      sym_expression,
    STATE(94), 1,
      sym_argument_list,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1427] = 2,
    ACTIONS(297), 4,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(299), 17,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1453] = 10,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(79), 1,
      sym_expression,
    STATE(87), 1,
      sym_argument_list,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1495] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(37), 1,
      sym_expression,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1534] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(81), 1,
      sym_expression,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1573] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(36), 1,
      sym_expression,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1612] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(31), 1,
      sym_bool,
    STATE(38), 1,
      sym_expression,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
    STATE(28), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1651] = 8,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(301), 1,
      anon_sym_vec,
    ACTIONS(303), 1,
      anon_sym_map,
    STATE(19), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type_name,
    STATE(84), 1,
      sym_type,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1680] = 8,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(301), 1,
      anon_sym_vec,
    ACTIONS(303), 1,
      anon_sym_map,
    STATE(19), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type_name,
    STATE(98), 1,
      sym_type,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1709] = 8,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(301), 1,
      anon_sym_vec,
    ACTIONS(303), 1,
      anon_sym_map,
    STATE(19), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type_name,
    STATE(88), 1,
      sym_type,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1738] = 8,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(301), 1,
      anon_sym_vec,
    ACTIONS(303), 1,
      anon_sym_map,
    STATE(19), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type_name,
    STATE(89), 1,
      sym_type,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1767] = 8,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(301), 1,
      anon_sym_vec,
    ACTIONS(303), 1,
      anon_sym_map,
    STATE(19), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type_name,
    STATE(34), 1,
      sym_type,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1796] = 5,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    ACTIONS(305), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ_EQ,
    STATE(14), 2,
      sym_overloadable_operator,
      sym_identifier,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1818] = 5,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    ACTIONS(305), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_EQ_EQ_EQ,
    STATE(16), 2,
      sym_overloadable_operator,
      sym_identifier,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1840] = 6,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(82), 1,
      sym_identifier,
    STATE(86), 1,
      sym_param,
    STATE(90), 1,
      sym_param_list,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1863] = 4,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1880] = 4,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1897] = 4,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1914] = 4,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(19), 1,
      sym_primitive_type,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(27), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1931] = 4,
    STATE(77), 1,
      sym_qualifier,
    STATE(85), 1,
      sym_qualifier_list,
    ACTIONS(307), 2,
      anon_sym_extern,
      anon_sym_pure,
    ACTIONS(309), 2,
      anon_sym_fn,
      anon_sym_class,
  [1946] = 3,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(183), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(311), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1958] = 4,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
  [1971] = 1,
    ACTIONS(319), 4,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
  [1978] = 3,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1988] = 2,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(311), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1996] = 2,
    ACTIONS(323), 1,
      anon_sym_fn,
    ACTIONS(325), 1,
      anon_sym_class,
  [2003] = 1,
    ACTIONS(327), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2008] = 1,
    ACTIONS(329), 2,
      anon_sym_fn,
      anon_sym_class,
  [2013] = 2,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_COMMA,
  [2020] = 1,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
  [2024] = 1,
    ACTIONS(337), 1,
      anon_sym_GT,
  [2028] = 1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
  [2032] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [2036] = 1,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
  [2040] = 1,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
  [2044] = 1,
    ACTIONS(347), 1,
      sym_doc_comment_content,
  [2048] = 1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [2052] = 1,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [2056] = 1,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
  [2060] = 1,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
  [2064] = 1,
    ACTIONS(357), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 46,
  [SMALL_STATE(19)] = 82,
  [SMALL_STATE(20)] = 118,
  [SMALL_STATE(21)] = 155,
  [SMALL_STATE(22)] = 192,
  [SMALL_STATE(23)] = 226,
  [SMALL_STATE(24)] = 260,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 361,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 497,
  [SMALL_STATE(32)] = 530,
  [SMALL_STATE(33)] = 563,
  [SMALL_STATE(34)] = 596,
  [SMALL_STATE(35)] = 627,
  [SMALL_STATE(36)] = 660,
  [SMALL_STATE(37)] = 695,
  [SMALL_STATE(38)] = 730,
  [SMALL_STATE(39)] = 765,
  [SMALL_STATE(40)] = 798,
  [SMALL_STATE(41)] = 833,
  [SMALL_STATE(42)] = 863,
  [SMALL_STATE(43)] = 893,
  [SMALL_STATE(44)] = 923,
  [SMALL_STATE(45)] = 953,
  [SMALL_STATE(46)] = 983,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1043,
  [SMALL_STATE(49)] = 1073,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1133,
  [SMALL_STATE(52)] = 1163,
  [SMALL_STATE(53)] = 1193,
  [SMALL_STATE(54)] = 1223,
  [SMALL_STATE(55)] = 1253,
  [SMALL_STATE(56)] = 1282,
  [SMALL_STATE(57)] = 1332,
  [SMALL_STATE(58)] = 1382,
  [SMALL_STATE(59)] = 1427,
  [SMALL_STATE(60)] = 1453,
  [SMALL_STATE(61)] = 1495,
  [SMALL_STATE(62)] = 1534,
  [SMALL_STATE(63)] = 1573,
  [SMALL_STATE(64)] = 1612,
  [SMALL_STATE(65)] = 1651,
  [SMALL_STATE(66)] = 1680,
  [SMALL_STATE(67)] = 1709,
  [SMALL_STATE(68)] = 1738,
  [SMALL_STATE(69)] = 1767,
  [SMALL_STATE(70)] = 1796,
  [SMALL_STATE(71)] = 1818,
  [SMALL_STATE(72)] = 1840,
  [SMALL_STATE(73)] = 1863,
  [SMALL_STATE(74)] = 1880,
  [SMALL_STATE(75)] = 1897,
  [SMALL_STATE(76)] = 1914,
  [SMALL_STATE(77)] = 1931,
  [SMALL_STATE(78)] = 1946,
  [SMALL_STATE(79)] = 1958,
  [SMALL_STATE(80)] = 1971,
  [SMALL_STATE(81)] = 1978,
  [SMALL_STATE(82)] = 1988,
  [SMALL_STATE(83)] = 1996,
  [SMALL_STATE(84)] = 2003,
  [SMALL_STATE(85)] = 2008,
  [SMALL_STATE(86)] = 2013,
  [SMALL_STATE(87)] = 2020,
  [SMALL_STATE(88)] = 2024,
  [SMALL_STATE(89)] = 2028,
  [SMALL_STATE(90)] = 2032,
  [SMALL_STATE(91)] = 2036,
  [SMALL_STATE(92)] = 2040,
  [SMALL_STATE(93)] = 2044,
  [SMALL_STATE(94)] = 2048,
  [SMALL_STATE(95)] = 2052,
  [SMALL_STATE(96)] = 2056,
  [SMALL_STATE(97)] = 2060,
  [SMALL_STATE(98)] = 2064,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 12),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 12),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 3, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_list, 3, .production_id = 8),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, .production_id = 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overloadable_operator, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_overloadable_operator, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_flamingo(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
