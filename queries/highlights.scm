[
  "let"
  "struct"
  "if"
  "else"
  "while"
  "fn"
  "return"
  "import"
  "as"
  "continue"
  "break"
] @keyword

(null) @constant.builtin

(comment) @comment @spell

; Literals
(string_literal) @string

(char_literal) @string

(num_literal) @number

(call_expr
  function: (value_expr (value_path 
                          package: (identifier) @variable
                          name: (identifier) @function.call
                          )))

; (float_literal) @number.float

"fn" @keyword.function
"return" @keyword.return
"while" @keyword.repeat

[
  "else"
  "if"
] @keyword.conditional

(identifier) @variable

(type_identifier) @type

(string_literal) @string

(struct_declaration
  name: (type_identifier) @type.definition)

(field_identifier) @property

[
  (true)
  (false)
] @boolean

(func_declaration
  name: (identifier) @function)

