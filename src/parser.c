#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_DASH = 23,
  anon_sym_BANG = 24,
  anon_sym_any = 25,
  anon_sym_int = 26,
  anon_sym_str = 27,
  anon_sym_bool = 28,
  anon_sym_void = 29,
  aux_sym_identifier_token1 = 30,
  sym_number = 31,
  sym_string = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_error = 35,
  sym_source_file = 36,
  sym_doc_comment = 37,
  sym_statement = 38,
  sym_block = 39,
  sym_import = 40,
  sym_qualifier = 41,
  sym_qualifier_list = 42,
  sym_function_declaration = 43,
  sym_class_declaration = 44,
  sym_print = 45,
  sym_assert = 46,
  sym_expression = 47,
  sym_parenthesized_expression = 48,
  sym_access_list = 49,
  sym_call = 50,
  sym_type_name = 51,
  sym_type = 52,
  sym_param = 53,
  sym_param_list = 54,
  sym_argument_list = 55,
  sym_literal = 56,
  sym_var_declaration = 57,
  sym_assignment = 58,
  sym_primitive_type = 59,
  sym_identifier = 60,
  sym_bool = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_block_repeat1 = 63,
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
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(63);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_vec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 25},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [sym_source_file] = STATE(90),
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [2] = {
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
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
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [3] = {
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_POUND_POUND] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(48),
    [anon_sym_extern] = ACTIONS(51),
    [anon_sym_pure] = ACTIONS(51),
    [anon_sym_fn] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_print] = ACTIONS(63),
    [anon_sym_assert] = ACTIONS(66),
    [anon_sym_any] = ACTIONS(69),
    [anon_sym_int] = ACTIONS(69),
    [anon_sym_str] = ACTIONS(69),
    [anon_sym_bool] = ACTIONS(69),
    [anon_sym_void] = ACTIONS(69),
    [aux_sym_identifier_token1] = ACTIONS(72),
    [sym_number] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [anon_sym_error] = ACTIONS(78),
  },
  [4] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [5] = {
    [sym_statement] = STATE(4),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [6] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [7] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_import] = ACTIONS(92),
    [anon_sym_extern] = ACTIONS(95),
    [anon_sym_pure] = ACTIONS(95),
    [anon_sym_fn] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_class] = ACTIONS(104),
    [anon_sym_print] = ACTIONS(107),
    [anon_sym_assert] = ACTIONS(110),
    [anon_sym_any] = ACTIONS(113),
    [anon_sym_int] = ACTIONS(113),
    [anon_sym_str] = ACTIONS(113),
    [anon_sym_bool] = ACTIONS(113),
    [anon_sym_void] = ACTIONS(113),
    [aux_sym_identifier_token1] = ACTIONS(116),
    [sym_number] = ACTIONS(119),
    [sym_string] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_error] = ACTIONS(122),
  },
  [8] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [9] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [10] = {
    [sym_statement] = STATE(9),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [11] = {
    [sym_statement] = STATE(49),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [12] = {
    [sym_statement] = STATE(40),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [13] = {
    [sym_statement] = STATE(41),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [14] = {
    [sym_statement] = STATE(42),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [15] = {
    [sym_statement] = STATE(52),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
  [16] = {
    [sym_statement] = STATE(47),
    [sym_block] = STATE(43),
    [sym_import] = STATE(43),
    [sym_qualifier] = STATE(74),
    [sym_qualifier_list] = STATE(83),
    [sym_function_declaration] = STATE(43),
    [sym_class_declaration] = STATE(43),
    [sym_print] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_expression] = STATE(37),
    [sym_parenthesized_expression] = STATE(28),
    [sym_access_list] = STATE(28),
    [sym_call] = STATE(28),
    [sym_literal] = STATE(28),
    [sym_var_declaration] = STATE(33),
    [sym_assignment] = STATE(43),
    [sym_primitive_type] = STATE(18),
    [sym_identifier] = STATE(27),
    [sym_bool] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(25),
    [anon_sym_str] = ACTIONS(25),
    [anon_sym_bool] = ACTIONS(25),
    [anon_sym_void] = ACTIONS(25),
    [aux_sym_identifier_token1] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_error] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(135), 14,
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
    ACTIONS(137), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [35] = 2,
    ACTIONS(139), 14,
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
    ACTIONS(141), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [70] = 3,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(143), 12,
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
    ACTIONS(145), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [106] = 3,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(143), 12,
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
    ACTIONS(145), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [142] = 2,
    ACTIONS(151), 12,
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
    ACTIONS(153), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [175] = 2,
    ACTIONS(143), 12,
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
    ACTIONS(145), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [208] = 2,
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
    ACTIONS(157), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [241] = 2,
    ACTIONS(159), 12,
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
    ACTIONS(161), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [274] = 2,
    ACTIONS(163), 11,
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
    ACTIONS(165), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [306] = 2,
    ACTIONS(167), 11,
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
    ACTIONS(169), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [338] = 4,
    ACTIONS(175), 1,
      anon_sym_COLON,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_number,
      sym_string,
    ACTIONS(173), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [374] = 2,
    ACTIONS(171), 11,
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
    ACTIONS(173), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [406] = 2,
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
    ACTIONS(181), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [438] = 2,
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
    ACTIONS(185), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [470] = 2,
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
    ACTIONS(189), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [502] = 2,
    ACTIONS(191), 11,
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
    ACTIONS(193), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [534] = 3,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(197), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [566] = 4,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(201), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [600] = 4,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(209), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [634] = 4,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(213), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [668] = 4,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(197), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [702] = 2,
    ACTIONS(215), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_EQ,
      sym_number,
      sym_string,
    ACTIONS(217), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [732] = 2,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(221), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [761] = 2,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(225), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [790] = 2,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(229), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [819] = 2,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(233), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [848] = 2,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(197), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [877] = 2,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(237), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [906] = 2,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(241), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [935] = 2,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(245), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [964] = 2,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(249), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [993] = 2,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(253), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1022] = 2,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(257), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1051] = 2,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(261), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1080] = 2,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(265), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1109] = 2,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(269), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1138] = 2,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(273), 16,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [1166] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(75), 1,
      sym_identifier,
    STATE(79), 1,
      sym_expression,
    STATE(82), 1,
      sym_param,
    STATE(91), 1,
      sym_param_list,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(28), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1216] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(75), 1,
      sym_identifier,
    STATE(79), 1,
      sym_expression,
    STATE(82), 1,
      sym_param,
    STATE(88), 1,
      sym_param_list,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(28), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1266] = 11,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(77), 1,
      sym_expression,
    STATE(93), 1,
      sym_argument_list,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(25), 5,
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
  [1311] = 10,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(77), 1,
      sym_expression,
    STATE(84), 1,
      sym_argument_list,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(25), 5,
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
  [1353] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(35), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(25), 5,
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
  [1392] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(36), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(25), 5,
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
  [1431] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(34), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(25), 5,
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
  [1470] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_bool,
    STATE(79), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(25), 5,
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
  [1509] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(281), 1,
      anon_sym_vec,
    ACTIONS(283), 1,
      anon_sym_map,
    STATE(18), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_name,
    STATE(81), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1538] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(281), 1,
      anon_sym_vec,
    ACTIONS(283), 1,
      anon_sym_map,
    STATE(18), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_name,
    STATE(94), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1567] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(281), 1,
      anon_sym_vec,
    ACTIONS(283), 1,
      anon_sym_map,
    STATE(18), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_name,
    STATE(86), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1596] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(281), 1,
      anon_sym_vec,
    ACTIONS(283), 1,
      anon_sym_map,
    STATE(18), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_name,
    STATE(85), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1625] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(281), 1,
      anon_sym_vec,
    ACTIONS(283), 1,
      anon_sym_map,
    STATE(18), 1,
      sym_primitive_type,
    STATE(22), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_name,
    STATE(38), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1654] = 6,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(78), 1,
      sym_identifier,
    STATE(82), 1,
      sym_param,
    STATE(87), 1,
      sym_param_list,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1677] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(16), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primitive_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1694] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1711] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1728] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_identifier,
    STATE(18), 1,
      sym_primitive_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1745] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1762] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_primitive_type,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1779] = 4,
    STATE(74), 1,
      sym_qualifier,
    STATE(80), 1,
      sym_qualifier_list,
    ACTIONS(285), 2,
      anon_sym_extern,
      anon_sym_pure,
    ACTIONS(287), 2,
      anon_sym_fn,
      anon_sym_class,
  [1794] = 3,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(171), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1806] = 1,
    ACTIONS(293), 4,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
  [1813] = 4,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
  [1826] = 2,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1834] = 3,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1844] = 1,
    ACTIONS(301), 2,
      anon_sym_fn,
      anon_sym_class,
  [1849] = 1,
    ACTIONS(303), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1854] = 2,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      anon_sym_COMMA,
  [1861] = 2,
    ACTIONS(309), 1,
      anon_sym_fn,
    ACTIONS(311), 1,
      anon_sym_class,
  [1868] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [1872] = 1,
    ACTIONS(315), 1,
      anon_sym_GT,
  [1876] = 1,
    ACTIONS(317), 1,
      anon_sym_COMMA,
  [1880] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [1884] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1888] = 1,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
  [1892] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [1896] = 1,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [1900] = 1,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
  [1904] = 1,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [1908] = 1,
    ACTIONS(333), 1,
      anon_sym_GT,
  [1912] = 1,
    ACTIONS(335), 1,
      sym_doc_comment_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 35,
  [SMALL_STATE(19)] = 70,
  [SMALL_STATE(20)] = 106,
  [SMALL_STATE(21)] = 142,
  [SMALL_STATE(22)] = 175,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 241,
  [SMALL_STATE(25)] = 274,
  [SMALL_STATE(26)] = 306,
  [SMALL_STATE(27)] = 338,
  [SMALL_STATE(28)] = 374,
  [SMALL_STATE(29)] = 406,
  [SMALL_STATE(30)] = 438,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 534,
  [SMALL_STATE(34)] = 566,
  [SMALL_STATE(35)] = 600,
  [SMALL_STATE(36)] = 634,
  [SMALL_STATE(37)] = 668,
  [SMALL_STATE(38)] = 702,
  [SMALL_STATE(39)] = 732,
  [SMALL_STATE(40)] = 761,
  [SMALL_STATE(41)] = 790,
  [SMALL_STATE(42)] = 819,
  [SMALL_STATE(43)] = 848,
  [SMALL_STATE(44)] = 877,
  [SMALL_STATE(45)] = 906,
  [SMALL_STATE(46)] = 935,
  [SMALL_STATE(47)] = 964,
  [SMALL_STATE(48)] = 993,
  [SMALL_STATE(49)] = 1022,
  [SMALL_STATE(50)] = 1051,
  [SMALL_STATE(51)] = 1080,
  [SMALL_STATE(52)] = 1109,
  [SMALL_STATE(53)] = 1138,
  [SMALL_STATE(54)] = 1166,
  [SMALL_STATE(55)] = 1216,
  [SMALL_STATE(56)] = 1266,
  [SMALL_STATE(57)] = 1311,
  [SMALL_STATE(58)] = 1353,
  [SMALL_STATE(59)] = 1392,
  [SMALL_STATE(60)] = 1431,
  [SMALL_STATE(61)] = 1470,
  [SMALL_STATE(62)] = 1509,
  [SMALL_STATE(63)] = 1538,
  [SMALL_STATE(64)] = 1567,
  [SMALL_STATE(65)] = 1596,
  [SMALL_STATE(66)] = 1625,
  [SMALL_STATE(67)] = 1654,
  [SMALL_STATE(68)] = 1677,
  [SMALL_STATE(69)] = 1694,
  [SMALL_STATE(70)] = 1711,
  [SMALL_STATE(71)] = 1728,
  [SMALL_STATE(72)] = 1745,
  [SMALL_STATE(73)] = 1762,
  [SMALL_STATE(74)] = 1779,
  [SMALL_STATE(75)] = 1794,
  [SMALL_STATE(76)] = 1806,
  [SMALL_STATE(77)] = 1813,
  [SMALL_STATE(78)] = 1826,
  [SMALL_STATE(79)] = 1834,
  [SMALL_STATE(80)] = 1844,
  [SMALL_STATE(81)] = 1849,
  [SMALL_STATE(82)] = 1854,
  [SMALL_STATE(83)] = 1861,
  [SMALL_STATE(84)] = 1868,
  [SMALL_STATE(85)] = 1872,
  [SMALL_STATE(86)] = 1876,
  [SMALL_STATE(87)] = 1880,
  [SMALL_STATE(88)] = 1884,
  [SMALL_STATE(89)] = 1888,
  [SMALL_STATE(90)] = 1892,
  [SMALL_STATE(91)] = 1896,
  [SMALL_STATE(92)] = 1900,
  [SMALL_STATE(93)] = 1904,
  [SMALL_STATE(94)] = 1908,
  [SMALL_STATE(95)] = 1912,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 12),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 3, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_list, 3, .production_id = 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [325] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
