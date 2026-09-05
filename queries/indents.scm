; Indentation for Magelang (nvim-treesitter indent module).

[
  (stmt_block)
  (struct_declaration)
  (struct_literal)
  (parameter_list)
  (func_type_parameter_list)
  (argument_list)
  (type_parameters)
  (type_arguments)
] @indent.begin

[
  ")"
  "]"
  "}"
] @indent.branch

; A closing brace or bracket alone on its line dedents that line.
[
  ")"
  "]"
  "}"
] @indent.end

(comment) @indent.auto
