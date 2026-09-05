; Highlighting for Magelang.
;
; Later patterns win over earlier ones, so the generic identifier rules come
; first and the context-specific ones refine them further down.

; ---------------------------------------------------------------------------
; Identifiers
; ---------------------------------------------------------------------------

(identifier) @variable

(type_identifier) @type

(field_identifier) @variable.member

; `#match?` rather than `#any-of?`: both Neovim and the tree-sitter CLI
; highlighter enforce it.
((type_identifier) @type.builtin
  (#match? @type.builtin
    "^(i8|i16|i32|i64|isize|u8|u16|u32|u64|usize|f32|f64|bool|void|opaque)$"))

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
; Packages
; ---------------------------------------------------------------------------

(import_declaration
  name: (identifier) @module)

(import_declaration
  path: (string_literal) @string.special.path)

(value_path
  package: (identifier) @module)

(type_path
  package: (identifier) @module)

(struct_literal
  type: (value_path
    package: (identifier) @module))

; ---------------------------------------------------------------------------
; Types
; ---------------------------------------------------------------------------

(struct_declaration
  name: (type_identifier) @type.definition)

(type_parameters
  (type_identifier) @type.parameter)

; The target of a struct literal is a value path, but it names a type.
(struct_literal
  type: (value_path
    name: (identifier) @type))

; ---------------------------------------------------------------------------
; Parameters
; ---------------------------------------------------------------------------

; Struct fields, field initializers and selections are all `field_identifier`
; and are covered by the generic rule above.

(parameter
  name: (identifier) @variable.parameter)

(func_type_parameter
  name: (identifier) @variable.parameter)

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
  "import"
  "struct"
  "let"
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
  "::"
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

; `<` and `>` delimit type parameters and arguments rather than comparing.
(type_parameters
  [
    "<"
    ">"
  ] @punctuation.bracket)

(type_arguments
  [
    "<"
    ">"
  ] @punctuation.bracket)
