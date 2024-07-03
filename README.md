# Flamingo: Tree Sitter

## Installing Tree Sitter

With `cargo`:

```console
cargo install tree-sitter-cli
export PATH=$PATH:~/.cargo/bin
```

## Generating parser

Run:

```console
pnpm generate
```

## Testing

Run:

```console
pnpm test
```

To quickly test highlighting of a single file, run:

```console
tree-sitter highlight hello_world.fl
```

## Installing in Neovim

You can use the [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter) plugin to enable syntax highlighting for Flamingo in Neovim.

Add the following to your `init.lua`:

```lua
local treesitter_parser_configs = require "nvim-treesitter.parsers".get_parser_configs()

treesitter_parser_configs.flamingo = {
	install_info = {
		url = "https://github.com/inobulles/flamingo",
		files = {"src/parser.c"},
	},
}

vim.filetype.add({
	extension = {
		fl = "flamingo"
	}
})
```

This URL can also be a local path, e.g. `~/flamingo/tree-sitter-flamingo`.

Then, any time you want to update the parser, run `:TSInstall flamingo` in Neovim.

More detail may be found in the ["Adding Parser"](https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers) section in the `nvim-treesitter` README.

## Formatting

Run:

```console
pnpm format
```
