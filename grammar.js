module.exports = grammar({
  name: 'magelang',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat(
      $.item,
    ),

    item: $ => choice(
      $.import,
      $.struct_declaration,
      $.let_declaration,
      $.func_declaration,
    ),

    import: $ => seq(
      'import',
      $.identifier,
      $.string_literal,
      ';',
    ),

    struct_declaration: $ => seq(
      'struct',
      field('name', $.type_identifier),
      optional(seq(
        '<',
        seq($.identifier, repeat(seq(',', $.identifier))),
        '>',
      )),
      '{',
      optional(
        seq(
          $.field_identifier, ':', $.type_expr,
          repeat(
            seq(',', $.field_identifier, ':', $.type_expr),
          ),
          optional(','),
        ),
      ),
      '}',
    ),

    type_parameter: $ => seq(
      '<',
      seq($.type_expr, repeat(seq(',', $.type_expr))),
      '>',
    ),

    let_declaration: $ => seq(
      'let',
      field('name', $.identifier),
      choice(
        seq(':', $.type_expr, '=', $.value_expr),
        seq(':', $.type_expr),
        seq('=', $.value_expr),
      ),
      ';',
    ),

    func_declaration: $ => seq(
      'fn',
      field('name', $.identifier),
      field('type_params', optional($.type_parameter)),
      '(',
      field('parameters', optional(
        seq(
          seq($.identifier, ':', $.type_expr),
          repeat(
            seq(',', $.identifier, ':', $.type_expr),
          ),
        ),
      )),
      ')',
      field('result', optional(seq(':', $.type_expr))),

      choice(
        ';',
        $.stmt_block,
      )
    ),

    stmt_block: $ => seq(
      '{',
      repeat($.stmt),
      '}',
    ),

    stmt: $ => choice(
      $.stmt_block,
    ),

    type_expr: $ => choice(
      $.type_fn,
      $.type_ptr,
      $.type_array_ptr,
      seq('(', $.type_expr, ')'),
      $.type_path,
    ),

    type_identifier: _ => seq(
      /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    ),

    type_fn: $ => seq(
      'fn',
      '(',
      optional(seq($.type_expr, repeat(seq(',', $.type_expr)))),
      ')',
      optional(seq(':', $.type_expr))
    ),

    type_ptr: $ => seq(
      '*',
      $.type_expr,
    ),

    type_array_ptr: $ => seq(
      '[',
      '*',
      ']',
      $.type_expr,
    ),

    type_path: $ => seq(
      $.type_identifier,
      repeat(seq(
        '::',
        $.type_identifier,
      )),
      optional($.type_parameter),
    ),

    value_expr: $ => choice(
      $.identifier,
      $.true,
      $.false,
      $.null,
    ),

    true: _ => 'true',
    false: _ => 'false',
    null: _ => 'null',

    field_identifier: _ => seq(
      /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    ),

    identifier: _ => seq(
      /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    ),

    string_literal: $ => seq(
      '"',
      repeat(
        choice(
          /[^"\n\\]+/,
          seq(
            '\\',
            choice(
              /[^xuU]/,
              /\d{2,3}/,
              /x[0-9a-fA-F]{2,}/,
              /u[0-9a-fA-F]{4}/,
              /U[0-9a-fA-F]{8}/,
            ),
          ),
        )
      ),
      '"',
    ),

    comment: _ => token(choice(
      seq('//', /.*/),
    )),
  }
});
