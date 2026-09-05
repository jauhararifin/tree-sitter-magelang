; Text objects for Magelang (nvim-treesitter-textobjects).

(func_declaration
  body: (stmt_block) @function.inner) @function.outer

(struct_declaration) @class.outer

(struct_declaration
  "{"
  (_)* @class.inner
  "}")

(parameter) @parameter.inner

(func_type_parameter) @parameter.inner

(argument_list
  (_) @parameter.inner)

(type_arguments
  (_) @parameter.inner)

(type_parameters
  (_) @parameter.inner)

(comment) @comment.outer

(stmt_block) @block.outer

(stmt_block
  "{"
  (_)* @block.inner
  "}")

[
  (stmt_while)
  (stmt_for)
] @loop.outer

[
  (stmt_while
    body: (stmt_block) @loop.inner)
  (stmt_for
    body: (stmt_block) @loop.inner)
]

(stmt_if) @conditional.outer

(stmt_if
  consequence: (stmt_block) @conditional.inner)

(call_expr) @call.outer

(call_expr
  arguments: (argument_list) @call.inner)

(annotation) @attribute.outer

(let_declaration
  value: (_) @assignment.rhs) @assignment.outer

(let_declaration
  name: (identifier) @assignment.lhs)

(stmt_assignment
  left: (_) @assignment.lhs
  right: (_) @assignment.rhs) @assignment.outer
