; Highlighting for Magelang.
;
; Later patterns win over earlier ones, so generic identifier rules come first
; and context-specific rules refine them further down.

; ---------------------------------------------------------------------------
; Identifiers
; ---------------------------------------------------------------------------

(identifier) @variable

(type_identifier) @type

(field_identifier) @variable.member

; Bracket application is shared by indexing and generic instantiation, and dot
; selection is shared by packages and fields. Built-in types therefore cannot
; be identified purely from their parent node; matching their names mirrors the
; compiler's unified expression namespace.
((identifier) @type.builtin
  (#match? @type.builtin
    "^(i8|i16|i32|i64|isize|u8|u16|u32|u64|usize|f32|f64|bool|void|opaque|string)$"))

; ---------------------------------------------------------------------------
; Literals
; ---------------------------------------------------------------------------

(num_literal) @number

(char_literal) @character

(string_literal) @string

(escape_sequence) @string.escape

[
  (true)
  (false)
] @boolean

(null) @constant.builtin

(comment) @comment @spell

; ---------------------------------------------------------------------------
; Imports and types
; ---------------------------------------------------------------------------

(import_declaration
  name: (identifier) @module)

(import_declaration
  path: (string_literal) @string.special.path)

(struct_declaration
  name: (type_identifier) @type.definition)

(type_alias_declaration
  name: (type_identifier) @type.definition)

(type_parameters
  (type_identifier) @type.parameter)

; The final component of a struct literal denotes a type. Bracket application
; may sit between that component and the literal body.
(struct_literal
  type: (value_path
    name: (identifier) @type))

(struct_literal
  type: (selection_expr
    field: (field_identifier) @type))

(struct_literal
  type: (bracket_expr
    value: (value_path
      name: (identifier) @type)))

(struct_literal
  type: (bracket_expr
    value: (selection_expr
      field: (field_identifier) @type)))

; ---------------------------------------------------------------------------
; Parameters and fields
; ---------------------------------------------------------------------------

(parameter
  name: (identifier) @variable.parameter)

(func_type_parameter
  name: (identifier) @variable.parameter)

; Struct fields, field initializers, selections and tuple indices already have
; dedicated node types and are covered by the generic rules above.

; ---------------------------------------------------------------------------
; Functions
; ---------------------------------------------------------------------------

(func_declaration
  name: (identifier) @function)

(call_expr
  function: (value_path
    name: (identifier) @function.call))

(call_expr
  function: (selection_expr
    field: (field_identifier) @function.call))

(call_expr
  function: (bracket_expr
    value: (value_path
      name: (identifier) @function.call)))

(call_expr
  function: (bracket_expr
    value: (selection_expr
      field: (field_identifier) @function.call)))

; ---------------------------------------------------------------------------
; Annotations
; ---------------------------------------------------------------------------

(annotation
  "@" @attribute)

(annotation
  name: (identifier) @attribute)

; ---------------------------------------------------------------------------
; Keywords
; ---------------------------------------------------------------------------

[
  "pub"
  "import"
  "type"
  "struct"
  "var"
  "defer"
] @keyword

"fn" @keyword.function

"as" @keyword.operator

"return" @keyword.return

[
  "if"
  "else"
] @keyword.conditional

[
  "while"
  "for"
  "break"
  "continue"
] @keyword.repeat

; ---------------------------------------------------------------------------
; Operators and punctuation
; ---------------------------------------------------------------------------

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "~"
  "!"
  "&"
  "|"
  "^"
  "<<"
  ">>"
  "&&"
  "||"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "="
  "+="
  "-="
  "*="
  "/="
  "%="
  "&="
  "|="
  "^="
  "<<="
  ">>="
  "&&="
  "||="
] @operator

[
  ","
  ":"
  ";"
  "."
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket
