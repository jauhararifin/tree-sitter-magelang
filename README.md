# tree-sitter-magelang

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the
[Magelang](https://github.com/jauhararifin/magelang) programming language.

The grammar tracks `magelang_syntax` (`scanner.rs` and `parser.rs`) in the
compiler. Where the two could disagree, the compiler is authoritative.

## What is covered

| Area | Syntax |
| --- | --- |
| Items | `import`, `struct` (with type parameters), global `let`, `fn` (with type parameters, with or without a body) |
| Annotations | `@name("arg", "arg")` on any item |
| Statements | blocks, `let`, assignment, `if` / `else if` / `else`, `while`, `for`, `defer`, `break`, `continue`, `return`, expression statements |
| Assignment | `=` plus `+= -= *= /= %= &= \|= ^= <<= >>= &&= \|\|=` |
| Expressions | paths (`pkg::name`, `name::<T>`), calls, indexing, field selection, dereference (`p.*`), casts (`as`), unary and binary operators, grouping, struct literals |
| Types | named and qualified paths, generic arguments, `*T`, `[*]T`, `fn(a: T, U): V`, grouping |
| Literals | decimal / `0b` / `0o` / `0x` integers with `_` separators, floats with fractions and exponents, strings and chars with escape sequences, `true`, `false`, `null` |
| Comments | `//` to end of line |

### Two notes on the grammar

**Struct literals versus blocks.** The compiler threads an `allow_struct_lit`
flag through expression parsing so that the `{` after `if x`, `while x` and a
`for` header opens a block rather than a struct literal. The grammar mirrors
this exactly: `grammar.js` generates the expression rules twice, once
unrestricted and once as hidden `_*_ns` rules that cannot end in a struct
literal. The `_ns` rules are aliased back to the public node names, so the parse
tree looks the same either way. Bracketed positions — parentheses, call
arguments, index subscripts, struct literal values — reset to the unrestricted
grammar, which keeps `if f(Foo{a: 1}) {}` working.

**Strings are not newline terminated.** `scan_string_internal` reads until the
closing quote or the end of the file, so an unterminated string swallows the
rest of the file here too. That matches what the compiler reports.

## Node names

Named nodes follow the compiler's own vocabulary: `import_declaration`,
`struct_declaration`, `struct_field`, `let_declaration`, `func_declaration`,
`parameter_list`, `parameter`, `type_parameters`; `stmt_block`, `stmt_if`,
`stmt_while`, `stmt_for`, `stmt_defer`, `stmt_return`, `stmt_break`,
`stmt_continue`, `stmt_assignment`, `stmt_expr`; `type_path`, `type_ptr`,
`type_array_ptr`, `type_fn`, `type_group`, `type_arguments`; `value_path`,
`bin_expr`, `unary_expr`, `cast_expr`, `call_expr`, `argument_list`,
`index_expr`, `selection_expr`, `deref_expr`, `group_expr`, `struct_literal`,
`field_initializer`.

`_item`, `_statement`, `_type_expr` and `_value_expr` are supertypes, so
`src/node-types.json` lists what can appear in each position.

## Installing in Neovim

Clone this repo, then register the parser:

```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
vim.filetype.add({
  extension = {
    mg = 'magelang',
  },
})
parser_config.magelang = {
  install_info = {
    url = "<the_directory_of_this_repo>",
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    branch = "master",
    generate_requires_npm = true,
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
  filetype = "magelang", -- if filetype does not match the parser name
}
vim.cmd('autocmd BufNew,BufNewFile,BufRead *.mg setlocal ft=magelang')
```

Copy the query files into your config so nvim-treesitter can find them:

```bash
mkdir -p ~/.config/nvim/after/queries/magelang
cp queries/*.scm ~/.config/nvim/after/queries/magelang/
```

`highlights.scm`, `locals.scm`, `indents.scm`, `folds.scm` and
`textobjects.scm` are all provided. Re-copy them whenever you pull this repo,
since the queries and the grammar have to stay in sync.

Then run `:TSInstall magelang`.

## Development

```bash
npm install          # installs the tree-sitter CLI
npm test             # regenerates the parser, runs the corpus, parses example-file.mg
cargo test           # exercises the Rust binding and validates the queries
```

The corpus lives in `test/corpus/`. `example-file.mg` is a tour of the whole
syntax; it is checked by both `npm test` and `cargo test`, and it also compiles
cleanly with the real Magelang compiler:

```bash
MAGELANG_ROOT=<magelang_repo>/magelang magelang compile example-file -o /dev/null
```

`src/parser.c` is checked in, so regenerate it and commit the result whenever
`grammar.js` changes.
