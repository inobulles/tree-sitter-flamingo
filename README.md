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

## Formatting

Run:

```console
pnpm format
```
