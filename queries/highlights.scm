[
  "let"
  "struct"
  ; "if"
  ; "else"
  ; "while"
  "fn"
  ; "return"
  "import"
  ; "as"
  ; "null"
  ; "true"
  ; "false"
  ; "continue"
  ; "break"
] @keyword

"fn" @keyword.function
; "return" @keyword.return
; "while" @keyword.repeat

; [
;   "else"
;   "if"
; ] @keyword.conditional

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


