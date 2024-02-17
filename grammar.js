const decimalDigit = /[0-9]/
const decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit)))
const decimalLiteral = choice(
  '0',
  seq(/[1-9]/, optional(seq(
    optional('_'),
    seq(
      /[0-9]/,
      repeat(seq(optional('_'), decimalDigits)),
    ),
  ))),
)

const decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits)
const decimalFraction = choice(
  seq(decimalDigits, '.', optional(decimalDigits), optional(decimalExponent)),
  seq(decimalDigits, decimalExponent),
  seq('.', decimalDigits, optional(decimalExponent)),
)

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
      repeat($.annotation),
      'import',
      $.identifier,
      $.string_literal,
      ';',
    ),

    annotation: $ => seq(
      field('at', '@'),
      field('name', $.identifier), '(', repeat($.string_literal), ')'),

    struct_declaration: $ => seq(
      repeat($.annotation),
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
      seq($.type_identifier, repeat(seq(',', $.type_identifier))),
      '>',
    ),

    let_declaration: $ => seq(
      repeat($.annotation),
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
      repeat($.annotation),
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
      ),
    ),

    stmt_block: $ => seq(
      '{',
      repeat($.stmt),
      '}',
    ),

    stmt_expr: $ => seq($.value_expr, ';'),

    stmt_assignment: $ => seq($.value_expr, '=', $.value_expr, ';'),

    stmt_while: $ => seq(
      'while', $.value_expr, $.stmt_block,
    ),

    stmt_if: $ => seq(
      'if', $.value_expr, $.stmt_block,
      optional(seq('else', choice($.stmt_block, $.stmt_if))),
    ),

    stmt_continue: _ => seq('continue', ';'),
    stmt_break: _ => seq('break', ';'),
    stmt_return: $ => seq('return', optional($.value_expr), ';'),

    stmt: $ => choice(
      $.stmt_block,
      $.let_declaration,
      $.stmt_expr,
      $.stmt_assignment,
      $.stmt_while,
      $.stmt_if,
      $.stmt_continue,
      $.stmt_break,
      $.stmt_return,
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

    type_path: $ => prec.left(11, seq(
      $.type_identifier,
      optional(seq('::', $.type_identifier)),
      optional($.type_arguments),
    )),

    type_arguments: $ => seq(
      '<',
      seq($.type_expr, repeat(seq(',', $.type_expr))),
      '>',
    ),

    value_expr: $ => choice(
      $.value_path,
      $.true,
      $.false,
      $.null,
      $.string_literal,
      $.bin_expr,
      $.unary_expr,
      $.cast_expr,
      $.call_expr,
      $.index_expr,
      $.selection_expr,
      $.deref_expr,
      seq('(', $.value_expr, ')'),
      $.struct_literal,
      $.num_literal,
      $.char_literal,
    ),

    true: _ => prec.left(11, 'true'),
    false: _ => prec.left(11, 'false'),
    null: _ => prec.left(11, 'null'),
    num_literal: _ => prec.left(11, token(choice(
      // binary
      seq('0', 'b', optional('_'), seq(/[01]/, repeat(seq(optional('_'), /[01]/)))),

      // decimal
      decimalLiteral,
      decimalFraction,

      // octal
      seq('0', 'o', optional('_'), seq(/[0-7]/, repeat(seq(optional('_'), /[0-7]/)))),

      // hex
      seq('0', 'x', optional('_'), seq(/[0-9a-fA-F]/, repeat(seq(optional('_'), /[0-9a-fA-F]/)))),
    ))),
    char_literal: _ => prec.left(11, token(seq(
      '\'',
      choice(
        /[^'\\]/,
        seq('\\', choice(
          seq('x', /[0-9a-fA-F]{2}/),
          'n','r','t','\\','0','\'',
        )),
      ),
      '\'',
    ))),

    bin_expr: $ => choice(
      prec.left(7, seq($.value_expr, '*', $.value_expr)),
      prec.left(7, seq($.value_expr, '/', $.value_expr)),
      prec.left(7, seq($.value_expr, '%', $.value_expr)),
      prec.left(6, seq($.value_expr, '+', $.value_expr)),
      prec.left(6, seq($.value_expr, '-', $.value_expr)),
      prec.left(5, seq($.value_expr, '<<', $.value_expr)),
      prec.left(5, seq($.value_expr, '>>', $.value_expr)),
      prec.left(4, seq($.value_expr, '<', $.value_expr)),
      prec.left(4, seq($.value_expr, '<=', $.value_expr)),
      prec.left(4, seq($.value_expr, '>', $.value_expr)),
      prec.left(4, seq($.value_expr, '>=', $.value_expr)),
      prec.left(3, seq($.value_expr, '==', $.value_expr)),
      prec.left(3, seq($.value_expr, '!=', $.value_expr)),
      prec.left(2, seq($.value_expr, '&', $.value_expr)),
      prec.left(1, seq($.value_expr, '^', $.value_expr)),
      prec.left(0, seq($.value_expr, '|', $.value_expr)),
      prec.left(-1, seq($.value_expr, '&&', $.value_expr)),
      prec.left(-2, seq($.value_expr, '||', $.value_expr)),
    ),

    cast_expr: $ => prec.left(8, seq(
      $.value_expr,
      'as',
      $.type_expr,
    )),

    unary_expr: $ => prec.left(9, seq(
      choice('+', '-', '~', '!'),
      $.value_expr,
    )),

    value_path: $ => prec.left(10, choice(
      seq(
        field('name', $.identifier),
        optional(seq('::', $.type_arguments)),
      ),
      seq(
        field('package', $.identifier),
        '::',
        field('name', $.identifier),
        optional(seq('::', $.type_arguments)),
      ),
    )),

    call_expr: $ => prec.left(10, seq(
      field('function', $.value_expr),
      '(',
      repeat(seq($.value_expr, optional(','))),
      ')',
    )),

    index_expr: $ => prec.left(10, seq(
      field('array', $.value_expr),
      '[',
      $.value_expr,
      ']',
    )),

    selection_expr: $ => prec.left(10, seq(
      $.value_expr,
      '.',
      $.field_identifier,
    )),

    deref_expr: $ => prec.left(10, seq(
      $.value_expr,
      '.',
      '*',
    )),

    struct_literal: $ => prec.left(-2, seq(
      $.value_path,
      '{',
      optional(seq(
        seq($.identifier, ':', $.value_expr),
        repeat(seq(',', $.identifier, ':', $.value_expr)),
        optional(','),
      )),
      '}',
    )),

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
