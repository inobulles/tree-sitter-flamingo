#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
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
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_COLON = 19,
  anon_sym_COMMA = 20,
  anon_sym_EQ = 21,
  anon_sym_DASH = 22,
  anon_sym_BANG = 23,
  anon_sym_any = 24,
  anon_sym_int = 25,
  anon_sym_str = 26,
  anon_sym_bool = 27,
  anon_sym_void = 28,
  aux_sym_identifier_token1 = 29,
  sym_number = 30,
  sym_string = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  anon_sym_error = 34,
  sym_source_file = 35,
  sym_doc_comment = 36,
  sym_statement = 37,
  sym_block = 38,
  sym_import = 39,
  sym_qualifier = 40,
  sym_qualifier_list = 41,
  sym_function_declaration = 42,
  sym_class_declaration = 43,
  sym_print = 44,
  sym_assert = 45,
  sym_expression = 46,
  sym_parenthesized_expression = 47,
  sym_access_list = 48,
  sym_call = 49,
  sym_template_type = 50,
  sym_type_name = 51,
  sym_type = 52,
  sym_param = 53,
  sym_param_list = 54,
  sym_argument_list = 55,
  sym_literal = 56,
  sym_assignment = 57,
  sym_primitive_type = 58,
  sym_identifier = 59,
  sym_bool = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_block_repeat1 = 62,
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
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
  [sym_template_type] = "template_type",
  [sym_type_name] = "type_name",
  [sym_type] = "type",
  [sym_param] = "param",
  [sym_param_list] = "param_list",
  [sym_argument_list] = "argument_list",
  [sym_literal] = "literal",
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_template_type] = sym_template_type,
  [sym_type_name] = sym_type_name,
  [sym_type] = sym_type,
  [sym_param] = sym_param,
  [sym_param_list] = sym_param_list,
  [sym_argument_list] = sym_argument_list,
  [sym_literal] = sym_literal,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_template_type] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(61);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(109);
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
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
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
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
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
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
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
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_vec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
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
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(78),
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
    [anon_sym_POUND_POUND] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_extern] = ACTIONS(47),
    [anon_sym_pure] = ACTIONS(47),
    [anon_sym_fn] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_print] = ACTIONS(59),
    [anon_sym_assert] = ACTIONS(62),
    [anon_sym_any] = ACTIONS(65),
    [anon_sym_int] = ACTIONS(65),
    [anon_sym_str] = ACTIONS(65),
    [anon_sym_bool] = ACTIONS(65),
    [anon_sym_void] = ACTIONS(65),
    [aux_sym_identifier_token1] = ACTIONS(68),
    [sym_number] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [anon_sym_error] = ACTIONS(74),
  },
  [3] = {
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
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
  [4] = {
    [sym_statement] = STATE(10),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_block_repeat1] = STATE(10),
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
    [sym_statement] = STATE(8),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_block_repeat1] = STATE(8),
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
    [sym_statement] = STATE(5),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_block_repeat1] = STATE(5),
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
    [sym_statement] = STATE(8),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(87),
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
  [8] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_import] = ACTIONS(94),
    [anon_sym_extern] = ACTIONS(97),
    [anon_sym_pure] = ACTIONS(97),
    [anon_sym_fn] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(106),
    [anon_sym_print] = ACTIONS(109),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_any] = ACTIONS(115),
    [anon_sym_int] = ACTIONS(115),
    [anon_sym_str] = ACTIONS(115),
    [anon_sym_bool] = ACTIONS(115),
    [anon_sym_void] = ACTIONS(115),
    [aux_sym_identifier_token1] = ACTIONS(118),
    [sym_number] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_error] = ACTIONS(124),
  },
  [9] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
    [sym_statement] = STATE(8),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
    [aux_sym_block_repeat1] = STATE(8),
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
    [sym_statement] = STATE(36),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
  [13] = {
    [sym_statement] = STATE(33),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
    [sym_statement] = STATE(39),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
  [15] = {
    [sym_statement] = STATE(43),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
  [16] = {
    [sym_statement] = STATE(35),
    [sym_block] = STATE(44),
    [sym_import] = STATE(44),
    [sym_qualifier] = STATE(63),
    [sym_qualifier_list] = STATE(74),
    [sym_function_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_print] = STATE(44),
    [sym_assert] = STATE(44),
    [sym_expression] = STATE(30),
    [sym_parenthesized_expression] = STATE(24),
    [sym_access_list] = STATE(24),
    [sym_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_assignment] = STATE(44),
    [sym_primitive_type] = STATE(17),
    [sym_identifier] = STATE(26),
    [sym_bool] = STATE(19),
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
      anon_sym_COLON,
      anon_sym_COMMA,
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
      anon_sym_COLON,
      anon_sym_COMMA,
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
  [70] = 2,
    ACTIONS(143), 11,
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
  [102] = 2,
    ACTIONS(147), 11,
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
    ACTIONS(149), 16,
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
  [134] = 2,
    ACTIONS(151), 11,
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
  [166] = 2,
    ACTIONS(155), 11,
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
  [198] = 2,
    ACTIONS(159), 11,
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
  [230] = 2,
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
  [262] = 2,
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
  [294] = 3,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DOT,
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
  [327] = 4,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(175), 16,
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
  [361] = 4,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(183), 16,
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
  [395] = 4,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(187), 16,
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
  [429] = 4,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(191), 16,
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
  [463] = 2,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(195), 16,
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
  [492] = 2,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(199), 16,
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
  [521] = 2,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(203), 16,
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
  [550] = 2,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(207), 16,
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
  [579] = 2,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(211), 16,
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
  [608] = 2,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(215), 16,
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
  [637] = 2,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(219), 16,
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
  [666] = 2,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(223), 16,
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
  [695] = 2,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(227), 16,
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
  [724] = 2,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(231), 16,
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
  [753] = 2,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(235), 16,
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
  [782] = 2,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(239), 16,
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
  [811] = 2,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(243), 16,
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
  [840] = 2,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(191), 16,
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
  [869] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(64), 1,
      sym_identifier,
    STATE(71), 1,
      sym_expression,
    STATE(75), 1,
      sym_param,
    STATE(84), 1,
      sym_param_list,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(24), 4,
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
  [919] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(64), 1,
      sym_identifier,
    STATE(71), 1,
      sym_expression,
    STATE(75), 1,
      sym_param,
    STATE(87), 1,
      sym_param_list,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(31), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(24), 4,
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
  [969] = 2,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(251), 16,
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
  [997] = 11,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(66), 1,
      sym_expression,
    STATE(80), 1,
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
    STATE(24), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1042] = 10,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(66), 1,
      sym_expression,
    STATE(83), 1,
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
    STATE(24), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1084] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(29), 1,
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
    STATE(24), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1123] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(71), 1,
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
    STATE(24), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1162] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(28), 1,
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
    STATE(24), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1201] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(19), 1,
      sym_bool,
    STATE(27), 1,
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
    STATE(24), 5,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
      sym_identifier,
  [1240] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(255), 1,
      anon_sym_vec,
    STATE(17), 1,
      sym_primitive_type,
    STATE(68), 1,
      sym_template_type,
    STATE(69), 1,
      sym_type_name,
    STATE(72), 1,
      sym_identifier,
    STATE(86), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1269] = 8,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    ACTIONS(255), 1,
      anon_sym_vec,
    STATE(17), 1,
      sym_primitive_type,
    STATE(68), 1,
      sym_template_type,
    STATE(69), 1,
      sym_type_name,
    STATE(72), 1,
      sym_identifier,
    STATE(77), 1,
      sym_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1298] = 6,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(73), 1,
      sym_identifier,
    STATE(75), 1,
      sym_param,
    STATE(81), 1,
      sym_param_list,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1321] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1338] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primitive_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1355] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(82), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1372] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_identifier,
    STATE(17), 1,
      sym_primitive_type,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1389] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1406] = 4,
    ACTIONS(27), 1,
      aux_sym_identifier_token1,
    STATE(17), 1,
      sym_primitive_type,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(25), 5,
      anon_sym_any,
      anon_sym_int,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_void,
  [1423] = 4,
    STATE(63), 1,
      sym_qualifier,
    STATE(76), 1,
      sym_qualifier_list,
    ACTIONS(257), 2,
      anon_sym_extern,
      anon_sym_pure,
    ACTIONS(259), 2,
      anon_sym_fn,
      anon_sym_class,
  [1438] = 3,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(163), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1450] = 1,
    ACTIONS(265), 4,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
  [1457] = 4,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
  [1470] = 1,
    ACTIONS(271), 4,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
  [1477] = 2,
    ACTIONS(275), 1,
      anon_sym_LT,
    ACTIONS(273), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [1486] = 1,
    ACTIONS(277), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [1492] = 1,
    ACTIONS(279), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [1498] = 3,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1508] = 1,
    ACTIONS(273), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [1514] = 2,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1522] = 2,
    ACTIONS(283), 1,
      anon_sym_fn,
    ACTIONS(285), 1,
      anon_sym_class,
  [1529] = 2,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      anon_sym_COMMA,
  [1536] = 1,
    ACTIONS(291), 2,
      anon_sym_fn,
      anon_sym_class,
  [1541] = 1,
    ACTIONS(293), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1546] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [1550] = 1,
    ACTIONS(297), 1,
      sym_doc_comment_content,
  [1554] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1558] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1562] = 1,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
  [1566] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [1570] = 1,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
  [1574] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [1578] = 1,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1582] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 35,
  [SMALL_STATE(19)] = 70,
  [SMALL_STATE(20)] = 102,
  [SMALL_STATE(21)] = 134,
  [SMALL_STATE(22)] = 166,
  [SMALL_STATE(23)] = 198,
  [SMALL_STATE(24)] = 230,
  [SMALL_STATE(25)] = 262,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 327,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 395,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 521,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 579,
  [SMALL_STATE(36)] = 608,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 666,
  [SMALL_STATE(39)] = 695,
  [SMALL_STATE(40)] = 724,
  [SMALL_STATE(41)] = 753,
  [SMALL_STATE(42)] = 782,
  [SMALL_STATE(43)] = 811,
  [SMALL_STATE(44)] = 840,
  [SMALL_STATE(45)] = 869,
  [SMALL_STATE(46)] = 919,
  [SMALL_STATE(47)] = 969,
  [SMALL_STATE(48)] = 997,
  [SMALL_STATE(49)] = 1042,
  [SMALL_STATE(50)] = 1084,
  [SMALL_STATE(51)] = 1123,
  [SMALL_STATE(52)] = 1162,
  [SMALL_STATE(53)] = 1201,
  [SMALL_STATE(54)] = 1240,
  [SMALL_STATE(55)] = 1269,
  [SMALL_STATE(56)] = 1298,
  [SMALL_STATE(57)] = 1321,
  [SMALL_STATE(58)] = 1338,
  [SMALL_STATE(59)] = 1355,
  [SMALL_STATE(60)] = 1372,
  [SMALL_STATE(61)] = 1389,
  [SMALL_STATE(62)] = 1406,
  [SMALL_STATE(63)] = 1423,
  [SMALL_STATE(64)] = 1438,
  [SMALL_STATE(65)] = 1450,
  [SMALL_STATE(66)] = 1457,
  [SMALL_STATE(67)] = 1470,
  [SMALL_STATE(68)] = 1477,
  [SMALL_STATE(69)] = 1486,
  [SMALL_STATE(70)] = 1492,
  [SMALL_STATE(71)] = 1498,
  [SMALL_STATE(72)] = 1508,
  [SMALL_STATE(73)] = 1514,
  [SMALL_STATE(74)] = 1522,
  [SMALL_STATE(75)] = 1529,
  [SMALL_STATE(76)] = 1536,
  [SMALL_STATE(77)] = 1541,
  [SMALL_STATE(78)] = 1546,
  [SMALL_STATE(79)] = 1550,
  [SMALL_STATE(80)] = 1554,
  [SMALL_STATE(81)] = 1558,
  [SMALL_STATE(82)] = 1562,
  [SMALL_STATE(83)] = 1566,
  [SMALL_STATE(84)] = 1570,
  [SMALL_STATE(85)] = 1574,
  [SMALL_STATE(86)] = 1578,
  [SMALL_STATE(87)] = 1582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 3, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_list, 3, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 12),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
