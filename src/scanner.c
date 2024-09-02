// This Source Form is subject to the terms of the AQUA Software License,
// v. 1.0. Copyright (c) 2024 Aymeric Wibo

#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

typedef struct {
} Scanner;

/*
enum TokenType {
};
*/

void *tree_sitter_flamingo_external_scanner_create(void) {
  Scanner *const scanner = ts_calloc(1, sizeof *scanner);
  return scanner;
}

void tree_sitter_flamingo_external_scanner_destroy(void *payload) {
  Scanner *const scanner = payload;
  ts_free(scanner);
}

unsigned tree_sitter_flamingo_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  // Nothing to serialize.
  return 0;
}

void tree_sitter_flamingo_external_scanner_deserialize(void *payload,
                                                       char const *buffer,
                                                       unsigned length) {
  // Nothing to deserialize.
}

bool tree_sitter_flamingo_external_scanner_scan(void *payload, TSLexer *lexer,
                                                bool const *valid_symbols) {
  // Nothing to scan.
  return false;
}
