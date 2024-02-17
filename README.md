To install in neovim, clone this repo and setup the tree-sitter:

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

Copy the `./queries/highlights.scm` file to `~/.config/nvim/after/queries/magelang/highlights.scm`.

Then, use `TSInstall magelang` to install it.
