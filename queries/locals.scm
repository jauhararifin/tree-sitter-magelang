; Scopes and definitions for Magelang.

[
  (source_file)
  (func_declaration)
  (stmt_block)
  (stmt_for)
] @local.scope

(import_declaration
  name: (identifier) @local.definition.namespace)

(struct_declaration
  name: (type_identifier) @local.definition.type)

(struct_field
  name: (field_identifier) @local.definition.field)

(func_declaration
  name: (identifier) @local.definition.function)

(type_parameters
  (type_identifier) @local.definition.type)

(parameter
  name: (identifier) @local.definition.parameter)

(let_declaration
  name: (identifier) @local.definition.var)

(value_path
  name: (identifier) @local.reference)

(type_path
  name: (type_identifier) @local.reference)
