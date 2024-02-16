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
    ),

    import: $ => seq(
      'import',
      $.identifier,
      $.string_literal,
      ';',
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
