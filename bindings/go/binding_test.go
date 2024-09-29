package tree_sitter_flamingo_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_flamingo "github.com/tree-sitter/tree-sitter-flamingo/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_flamingo.Language())
	if language == nil {
		t.Errorf("Error loading Flamingo grammar")
	}
}
