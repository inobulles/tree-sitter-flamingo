#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_POUND_POUND = 2,
  sym_doc_comment_content = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_import = 6,
  anon_sym_fn = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_class = 10,
  anon_sym_print = 11,
  anon_sym_assert = 12,
  anon_sym_DOT = 13,
  anon_sym_COMMA = 14,
  anon_sym_EQ = 15,
  anon_sym_DASH = 16,
  anon_sym_BANG = 17,
  sym_identifier = 18,
  sym_number = 19,
  sym_string = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_error = 23,
  sym_source_file = 24,
  sym_doc_comment = 25,
  sym_statement = 26,
  sym_block = 27,
  sym_import = 28,
  sym_function_declaration = 29,
  sym_class_declaration = 30,
  sym_print = 31,
  sym_assert = 32,
  sym_expression = 33,
  sym_parenthesized_expression = 34,
  sym_access_list = 35,
  sym_call = 36,
  sym_param_list = 37,
  sym_argument_list = 38,
  sym_literal = 39,
  sym_assignment = 40,
  sym_bool = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_block_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_POUND_POUND] = "##",
  [sym_doc_comment_content] = "doc_comment_content",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_import] = "import",
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
  field_right = 12,
  field_test = 13,
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
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 3},
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
    {field_args, 2},
    {field_callable, 0},
  [15] =
    {field_body, 4},
    {field_name, 1},
  [17] =
    {field_body, 3},
    {field_name, 1},
  [19] =
    {field_body, 5},
    {field_name, 1},
    {field_params, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 't') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_doc_comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
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
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
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
    [sym_source_file] = STATE(47),
    [sym_doc_comment] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [2] = {
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [anon_sym_POUND_POUND] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_fn] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(49),
    [anon_sym_print] = ACTIONS(52),
    [anon_sym_assert] = ACTIONS(55),
    [sym_identifier] = ACTIONS(58),
    [sym_number] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [anon_sym_error] = ACTIONS(64),
  },
  [3] = {
    [sym_doc_comment] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(69),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [4] = {
    [sym_statement] = STATE(6),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [5] = {
    [sym_statement] = STATE(7),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_block_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [6] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [7] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [8] = {
    [sym_statement] = STATE(8),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_import] = ACTIONS(84),
    [anon_sym_fn] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(93),
    [anon_sym_print] = ACTIONS(96),
    [anon_sym_assert] = ACTIONS(99),
    [sym_identifier] = ACTIONS(102),
    [sym_number] = ACTIONS(105),
    [sym_string] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_error] = ACTIONS(108),
  },
  [9] = {
    [sym_statement] = STATE(26),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [10] = {
    [sym_statement] = STATE(25),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
  [11] = {
    [sym_statement] = STATE(28),
    [sym_block] = STATE(24),
    [sym_import] = STATE(24),
    [sym_function_declaration] = STATE(24),
    [sym_class_declaration] = STATE(24),
    [sym_print] = STATE(24),
    [sym_assert] = STATE(24),
    [sym_expression] = STATE(21),
    [sym_parenthesized_expression] = STATE(14),
    [sym_access_list] = STATE(14),
    [sym_call] = STATE(14),
    [sym_literal] = STATE(14),
    [sym_assignment] = STATE(24),
    [sym_bool] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_error] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(115), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(113), 11,
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
  [25] = 2,
    ACTIONS(119), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(117), 11,
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
  [50] = 2,
    ACTIONS(123), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(121), 11,
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
  [75] = 2,
    ACTIONS(127), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(125), 11,
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
  [100] = 2,
    ACTIONS(131), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(129), 11,
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
  [125] = 2,
    ACTIONS(135), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(133), 11,
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
  [150] = 2,
    ACTIONS(139), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    ACTIONS(137), 11,
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
  [175] = 3,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(121), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_number,
      sym_string,
    ACTIONS(123), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [201] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(145), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [228] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(153), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [255] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(157), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [282] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(161), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [309] = 2,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(153), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [331] = 2,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(165), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [353] = 2,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(169), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [375] = 2,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(173), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [397] = 2,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(177), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [419] = 2,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(181), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [441] = 2,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(185), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [463] = 2,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(189), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [485] = 2,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(193), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [507] = 2,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(197), 9,
      anon_sym_import,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_print,
      anon_sym_assert,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
  [528] = 9,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(43), 1,
      sym_expression,
    STATE(52), 1,
      sym_param_list,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [562] = 9,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(41), 1,
      sym_expression,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [596] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(41), 1,
      sym_expression,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [627] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(43), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [655] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(22), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [683] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(20), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [711] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(15), 1,
      sym_bool,
    STATE(23), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(27), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_error,
    STATE(14), 4,
      sym_parenthesized_expression,
      sym_access_list,
      sym_call,
      sym_literal,
  [739] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_COMMA,
  [752] = 3,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(121), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [763] = 3,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
  [773] = 2,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_COMMA,
  [780] = 2,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(55), 1,
      sym_param_list,
  [787] = 1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [791] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [795] = 1,
    ACTIONS(223), 1,
      sym_identifier,
  [799] = 1,
    ACTIONS(225), 1,
      sym_identifier,
  [803] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
  [807] = 1,
    ACTIONS(229), 1,
      sym_identifier,
  [811] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [815] = 1,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [819] = 1,
    ACTIONS(235), 1,
      sym_identifier,
  [823] = 1,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
  [827] = 1,
    ACTIONS(239), 1,
      sym_doc_comment_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 25,
  [SMALL_STATE(14)] = 50,
  [SMALL_STATE(15)] = 75,
  [SMALL_STATE(16)] = 100,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 175,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 375,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 485,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 528,
  [SMALL_STATE(35)] = 562,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 627,
  [SMALL_STATE(38)] = 655,
  [SMALL_STATE(39)] = 683,
  [SMALL_STATE(40)] = 711,
  [SMALL_STATE(41)] = 739,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 763,
  [SMALL_STATE(44)] = 773,
  [SMALL_STATE(45)] = 780,
  [SMALL_STATE(46)] = 787,
  [SMALL_STATE(47)] = 791,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 799,
  [SMALL_STATE(50)] = 803,
  [SMALL_STATE(51)] = 807,
  [SMALL_STATE(52)] = 811,
  [SMALL_STATE(53)] = 815,
  [SMALL_STATE(54)] = 819,
  [SMALL_STATE(55)] = 823,
  [SMALL_STATE(56)] = 827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 11),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 8),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_list, 3, .production_id = 9),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_list, 3, .production_id = 9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 2, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 14),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 14),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 13),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 13),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 12),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
