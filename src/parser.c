#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_COMMA = 16,
  anon_sym_EQ = 17,
  anon_sym_DASH = 18,
  anon_sym_BANG = 19,
  sym_identifier = 20,
  sym_number = 21,
  sym_string = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_error = 25,
  sym_source_file = 26,
  sym_doc_comment = 27,
  sym_statement = 28,
  sym_block = 29,
  sym_import = 30,
  sym_qualifier = 31,
  sym_qualifier_list = 32,
  sym_function_declaration = 33,
  sym_class_declaration = 34,
  sym_print = 35,
  sym_assert = 36,
  sym_expression = 37,
  sym_parenthesized_expression = 38,
  sym_access_list = 39,
  sym_call = 40,
  sym_param_list = 41,
  sym_argument_list = 42,
  sym_literal = 43,
  sym_assignment = 44,
  sym_bool = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_block_repeat1 = 47,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [sym_identifier] = "identifier",
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
  [sym_param_list] = "param_list",
  [sym_argument_list] = "argument_list",
  [sym_literal] = "literal",
  [sym_assignment] = "assignment",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_identifier] = sym_identifier,
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
  [sym_param_list] = sym_param_list,
  [sym_argument_list] = sym_argument_list,
  [sym_literal] = sym_literal,
  [sym_assignment] = sym_assignment,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
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
    {field_left, 0},
    {field_right, 2},
  [9] =
    {field_callable, 0},
  [10] =
    {field_accessed, 0},
    {field_accessor, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 18:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
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
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [2] = {
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
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
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [3] = {
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [sym_identifier] = ACTIONS(67),
    [sym_number] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_error] = ACTIONS(73),
  },
  [4] = {
    [sym_statement] = STATE(9),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [5] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [6] = {
    [sym_statement] = STATE(5),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [7] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [8] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_extern] = ACTIONS(92),
    [anon_sym_pure] = ACTIONS(92),
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(101),
    [anon_sym_print] = ACTIONS(104),
    [anon_sym_assert] = ACTIONS(107),
    [sym_identifier] = ACTIONS(110),
    [sym_number] = ACTIONS(113),
    [sym_string] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(116),
    [anon_sym_false] = ACTIONS(116),
    [anon_sym_error] = ACTIONS(116),
  },
  [9] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [10] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [11] = {
    [sym_statement] = STATE(31),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [12] = {
    [sym_statement] = STATE(33),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [13] = {
    [sym_statement] = STATE(34),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [14] = {
    [sym_statement] = STATE(36),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [15] = {
    [sym_statement] = STATE(40),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
  [16] = {
    [sym_statement] = STATE(37),
    [sym_block] = STATE(39),
    [sym_import] = STATE(39),
    [sym_qualifier] = STATE(52),
    [sym_qualifier_list] = STATE(60),
    [sym_function_declaration] = STATE(39),
    [sym_class_declaration] = STATE(39),
    [sym_print] = STATE(39),
    [sym_assert] = STATE(39),
    [sym_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(18),
    [sym_access_list] = STATE(18),
    [sym_call] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_assignment] = STATE(39),
    [sym_bool] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(13),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(127), 11,
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
    ACTIONS(129), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [27] = 2,
    ACTIONS(131), 11,
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
    ACTIONS(133), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [54] = 2,
    ACTIONS(135), 11,
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
    ACTIONS(137), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [81] = 2,
    ACTIONS(139), 11,
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
    ACTIONS(141), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [108] = 2,
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
    ACTIONS(145), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [135] = 2,
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
    ACTIONS(149), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [162] = 2,
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
    ACTIONS(153), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [189] = 3,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_number,
      sym_string,
    ACTIONS(133), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [217] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(159), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [246] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(167), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [275] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(171), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [304] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(175), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [333] = 2,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(179), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [357] = 2,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(183), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [381] = 2,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(187), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [405] = 2,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(191), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [429] = 2,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(195), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [453] = 2,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(199), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [477] = 2,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(203), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [501] = 2,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(207), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [525] = 2,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(211), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [549] = 2,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(215), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [573] = 2,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(159), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [597] = 2,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(219), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [621] = 2,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(223), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [645] = 2,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(227), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [669] = 2,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(231), 11,
      anon_sym_import,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [692] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(55), 1,
      sym_expression,
    STATE(63), 1,
      sym_argument_list,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [726] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(56), 1,
      sym_expression,
    STATE(67), 1,
      sym_param_list,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [760] = 9,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_bool,
    STATE(56), 1,
      sym_expression,
    STATE(65), 1,
      sym_param_list,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [794] = 8,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(55), 1,
      sym_expression,
    STATE(68), 1,
      sym_argument_list,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [825] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(28), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [853] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(26), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [881] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(56), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [909] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(23), 1,
      sym_bool,
    STATE(27), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_number,
      sym_string,
    ACTIONS(29), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(18), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [937] = 4,
    STATE(52), 1,
      sym_qualifier,
    STATE(58), 1,
      sym_qualifier_list,
    ACTIONS(243), 2,
      anon_sym_extern,
      anon_sym_pure,
    ACTIONS(245), 2,
      anon_sym_fn,
      anon_sym_class,
  [952] = 1,
    ACTIONS(247), 4,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_fn,
      anon_sym_class,
  [959] = 3,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(131), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [970] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_COMMA,
  [983] = 3,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [993] = 2,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(70), 1,
      sym_param_list,
  [1000] = 1,
    ACTIONS(261), 2,
      anon_sym_fn,
      anon_sym_class,
  [1005] = 2,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_COMMA,
  [1012] = 2,
    ACTIONS(263), 1,
      anon_sym_fn,
    ACTIONS(265), 1,
      anon_sym_class,
  [1019] = 1,
    ACTIONS(267), 1,
      sym_identifier,
  [1023] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [1027] = 1,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [1031] = 1,
    ACTIONS(273), 1,
      sym_identifier,
  [1035] = 1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
  [1039] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [1043] = 1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [1047] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1051] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1055] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1059] = 1,
    ACTIONS(287), 1,
      sym_identifier,
  [1063] = 1,
    ACTIONS(289), 1,
      sym_doc_comment_content,
  [1067] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [1071] = 1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
  [1075] = 1,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 27,
  [SMALL_STATE(19)] = 54,
  [SMALL_STATE(20)] = 81,
  [SMALL_STATE(21)] = 108,
  [SMALL_STATE(22)] = 135,
  [SMALL_STATE(23)] = 162,
  [SMALL_STATE(24)] = 189,
  [SMALL_STATE(25)] = 217,
  [SMALL_STATE(26)] = 246,
  [SMALL_STATE(27)] = 275,
  [SMALL_STATE(28)] = 304,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 429,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 477,
  [SMALL_STATE(36)] = 501,
  [SMALL_STATE(37)] = 525,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 573,
  [SMALL_STATE(40)] = 597,
  [SMALL_STATE(41)] = 621,
  [SMALL_STATE(42)] = 645,
  [SMALL_STATE(43)] = 669,
  [SMALL_STATE(44)] = 692,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 760,
  [SMALL_STATE(47)] = 794,
  [SMALL_STATE(48)] = 825,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 881,
  [SMALL_STATE(51)] = 909,
  [SMALL_STATE(52)] = 937,
  [SMALL_STATE(53)] = 952,
  [SMALL_STATE(54)] = 959,
  [SMALL_STATE(55)] = 970,
  [SMALL_STATE(56)] = 983,
  [SMALL_STATE(57)] = 993,
  [SMALL_STATE(58)] = 1000,
  [SMALL_STATE(59)] = 1005,
  [SMALL_STATE(60)] = 1012,
  [SMALL_STATE(61)] = 1019,
  [SMALL_STATE(62)] = 1023,
  [SMALL_STATE(63)] = 1027,
  [SMALL_STATE(64)] = 1031,
  [SMALL_STATE(65)] = 1035,
  [SMALL_STATE(66)] = 1039,
  [SMALL_STATE(67)] = 1043,
  [SMALL_STATE(68)] = 1047,
  [SMALL_STATE(69)] = 1051,
  [SMALL_STATE(70)] = 1055,
  [SMALL_STATE(71)] = 1059,
  [SMALL_STATE(72)] = 1063,
  [SMALL_STATE(73)] = 1067,
  [SMALL_STATE(74)] = 1071,
  [SMALL_STATE(75)] = 1075,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(53),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 8),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 3, .production_id = 9),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_list, 3, .production_id = 9),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 14),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 19),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, .production_id = 18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 15),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 13),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_list, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
