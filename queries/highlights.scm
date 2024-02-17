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

(identifier) @variable

(type_identifier) @type

; Literals
(string_literal) @string

(char_literal) @string

(num_literal) @number

(value_path
  package: (identifier) @variable @namespace)


(call_expr
  function: (value_expr (value_path 
                          package: (identifier) @variable
                          name: (identifier) @function
                          )))
(call_expr
  function: (value_expr (value_path 
                          name: (identifier) @function
                          )))


"fn" @keyword.function
"return" @keyword.return
"while" @keyword.repeat

[
  "else"
  "if"
] @keyword.conditional

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

