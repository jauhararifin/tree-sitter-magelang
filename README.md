# tree-sitter-magelang

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the
[Magelang](https://github.com/jauhararifin/magelang) programming language.

The grammar tracks `magelang_syntax` (`scanner.rs` and `parser.rs`) in the
compiler. Where the two could disagree, the compiler is authoritative.

## What is covered

| Area | Syntax |
| --- | --- |
| Items | `import`, `type` aliases, `struct`, global `var`, and `fn`; declarations and struct fields may be `pub` |
| Annotations | `@name("arg", "arg")` on any item |
| Statements | blocks, `var`, assignment, `if` / `else if` / `else`, `while`, `for`, `defer`, `break`, `continue`, `return`, expression statements |
| Assignment | `=` plus `+= -= *= /= %= &= \|= ^= <<= >>= &&= \|\|=` |
| Expressions | dot selection (`pkg.name`), bracket application (`value[index]` or `name[T]`), calls, tuple selection (`value.0`), dereference (`p.*`), casts, unary and binary operators, grouping, tuples, struct literals |
| Types | ordinary, grouped, and tuple expressions plus `*T`, `[*]T`, `*[T]`, and `fn(a: T, U): V` |
| Literals | decimal / `0b` / `0o` / `0x` integers with `_` separators, floats with fractions and exponents, strings and chars with escape sequences, `true`, `false`, `null` |
| Comments | `//` to end of line |

### Notes on the grammar

**Unified expressions and types.** The compiler uses the same expression AST
for values and types. Dot selection is used for packages and fields, while a
bracket expression can be either indexing or generic instantiation; semantics
decide which. The grammar therefore gives `array[i]` and `alloc[T]` the same
`bracket_expr` shape. Parenthesized comma lists are `tuple_expr` nodes and a
numeric selection such as `pair.0` is a `tuple_selection_expr`.

**Struct literals versus blocks.** The compiler threads an `allow_struct_lit`
flag through expression parsing so that the `{` after `if x`, `while x` and a
`for` header opens a block rather than a struct literal. The grammar mirrors
this by generating the expression rules twice. Hidden `_*_ns` rules cannot end
in a struct literal and are aliased back to the public node names, so both
variants have the same tree shape. Parentheses, call arguments, bracket
arguments, and struct field values reset to the unrestricted grammar, which
keeps `if f(Foo{value: 1}) {}` working.

**Strings are not newline terminated.** `scan_string_internal` reads until the
closing quote or the end of the file, so an unterminated string swallows the
rest of the file here too. That matches what the compiler reports.

## Node names

Named nodes follow the compiler's vocabulary: `import_declaration`,
`type_alias_declaration`, `struct_declaration`, `struct_field`,
`global_var_declaration`, `var_declaration`, `func_declaration`,
`parameter_list`, `parameter`, `type_parameters`; `stmt_block`, `stmt_if`,
`stmt_while`, `stmt_for`, `stmt_defer`, `stmt_return`, `stmt_break`,
`stmt_continue`, `stmt_assignment`, `stmt_expr`; `type_ptr`, `type_array_ptr`,
`type_slice_ptr`, `type_fn`; `value_path`, `bin_expr`, `unary_expr`,
`cast_expr`, `call_expr`, `argument_list`, `bracket_expr`, `selection_expr`,
`tuple_selection_expr`, `deref_expr`, `group_expr`, `tuple_expr`,
`struct_literal`, `field_initializer`.

`_item`, `_statement`, and `_value_expr` are supertypes, so
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
