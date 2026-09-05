/**
 * @file Magelang grammar for tree-sitter
 * @license MIT
 *
 * This grammar mirrors `magelang_syntax` (scanner.rs / parser.rs) from the
 * Magelang compiler. Whenever the two disagree, the compiler wins.
 */

// Binary operator precedences, lowest binding first. The order matches
// `BINOP_PRECEDENCE` in magelang_syntax/src/parser.rs. `cast` binds tighter
// than every binary operator, `unary` tighter than `cast`, and the postfix
// operators (call, index, selection, deref) tighter than everything else.
const PREC = {
  or: 1,
  and: 2,
  bit_or: 3,
  bit_xor: 4,
  bit_and: 5,
  equality: 6,
  comparative: 7,
  shift: 8,
  additive: 9,
  multiplicative: 10,
  cast: 11,
  unary: 12,
  postfix: 13,
};

// Every `TokenKind::AssignOp` produced by the scanner, plus the plain `=`.
const ASSIGNMENT_OPERATORS = [
  '=',
  '+=',
  '-=',
  '*=',
  '/=',
  '%=',
  '&=',
  '|=',
  '^=',
  '<<=',
  '>>=',
  '&&=',
  '||=',
];

const IDENTIFIER = /[_\p{XID_Start}][_\p{XID_Continue}]*/;

/**
 * One or more `rule`s separated by commas, with an optional trailing comma.
 * `parse_sequence` in the compiler accepts the trailing delimiter.
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(','));
}

/**
 * Zero or more `rule`s separated by commas, with an optional trailing comma.
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Builds the value-expression rules.
 *
 * The compiler threads an `allow_struct_lit` flag through expression parsing so
 * that the `{` after `if x`, `while x` and a `for` header is unambiguously the
 * start of a block rather than the start of a struct literal. This function is
 * called twice to produce the two matching expression grammars:
 *
 *   - `noStruct === false` produces the public rules (`bin_expr`, `call_expr`, ...).
 *   - `noStruct === true` produces hidden `_*_ns` twins that cannot end in a
 *     struct literal. They are aliased back to the public names, so the parse
 *     tree looks identical either way.
 *
 * Bracketed positions (parentheses, call arguments, index subscripts, struct
 * literal values) reset to the unrestricted grammar, exactly like the compiler
 * passing `true` back down.
 *
 * @param {boolean} noStruct
 */
function expressionRules(noStruct) {
  /** Name of a generated rule. */
  const rule = (base) => (noStruct ? `_${base}_ns` : base);
  /** Reference to a generated rule, aliased back to its public name. */
  const ref = ($, base) => (noStruct ? alias($[`_${base}_ns`], $[base]) : $[base]);
  /** Reference to the expression set being generated. */
  const expr = ($) => (noStruct ? $._value_expr_ns : $._value_expr);
  /** Reference to the unrestricted expression set. */
  const any = ($) => $._value_expr;

  const binaryOperators = [
    [PREC.or, '||'],
    [PREC.and, '&&'],
    [PREC.bit_or, '|'],
    [PREC.bit_xor, '^'],
    [PREC.bit_and, '&'],
    [PREC.equality, '=='],
    [PREC.equality, '!='],
    [PREC.comparative, '<'],
    [PREC.comparative, '<='],
    [PREC.comparative, '>'],
    [PREC.comparative, '>='],
    [PREC.shift, '<<'],
    [PREC.shift, '>>'],
    [PREC.additive, '+'],
    [PREC.additive, '-'],
    [PREC.multiplicative, '*'],
    [PREC.multiplicative, '/'],
    [PREC.multiplicative, '%'],
  ];

  return {
    [noStruct ? '_value_expr_ns' : '_value_expr']: ($) => choice(
      $.value_path,
      $.true,
      $.false,
      $.null,
      $.num_literal,
      $.char_literal,
      $.string_literal,
      $.group_expr,
      ref($, 'bin_expr'),
      ref($, 'unary_expr'),
      ref($, 'cast_expr'),
      ref($, 'call_expr'),
      ref($, 'index_expr'),
      ref($, 'selection_expr'),
      ref($, 'deref_expr'),
      ...(noStruct ? [] : [$.struct_literal]),
    ),

    [rule('bin_expr')]: ($) => choice(...binaryOperators.map(([precedence, operator]) =>
      prec.left(precedence, seq(
        field('left', expr($)),
        field('operator', operator),
        field('right', expr($)),
      )),
    )),

    [rule('unary_expr')]: ($) => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '~', '!')),
      field('operand', expr($)),
    )),

    [rule('cast_expr')]: ($) => prec.left(PREC.cast, seq(
      field('value', expr($)),
      'as',
      field('type', $._type_expr),
    )),

    [rule('call_expr')]: ($) => prec.left(PREC.postfix, seq(
      field('function', expr($)),
      field('arguments', $.argument_list),
    )),

    [rule('index_expr')]: ($) => prec.left(PREC.postfix, seq(
      field('array', expr($)),
      '[',
      field('index', any($)),
      ']',
    )),

    [rule('selection_expr')]: ($) => prec.left(PREC.postfix, seq(
      field('value', expr($)),
      '.',
      field('field', $._field_identifier),
    )),

    [rule('deref_expr')]: ($) => prec.left(PREC.postfix, seq(
      field('value', expr($)),
      '.',
      '*',
    )),
  };
}

module.exports = grammar({
  name: 'magelang',

  extras: ($) => [
    $.comment,
    /\s/,
  ],

  word: ($) => $.identifier,

  supertypes: ($) => [
    $._item,
    $._statement,
    $._type_expr,
    $._value_expr,
  ],

  rules: {
    source_file: ($) => repeat($._item),

    // ------------------------------------------------------------------
    // Items
    // ------------------------------------------------------------------

    _item: ($) => choice(
      $.import_declaration,
      $.struct_declaration,
      $.let_declaration,
      $.func_declaration,
    ),

    annotation: ($) => seq(
      '@',
      field('name', $.identifier),
      '(',
      commaSep($.string_literal),
      ')',
    ),

    import_declaration: ($) => seq(
      repeat($.annotation),
      'import',
      field('name', $.identifier),
      field('path', $.string_literal),
      ';',
    ),

    struct_declaration: ($) => seq(
      repeat($.annotation),
      'struct',
      field('name', $._type_identifier),
      optional(field('type_parameters', $.type_parameters)),
      '{',
      commaSep($.struct_field),
      '}',
    ),

    struct_field: ($) => seq(
      field('name', $._field_identifier),
      ':',
      field('type', $._type_expr),
    ),

    func_declaration: ($) => seq(
      repeat($.annotation),
      'fn',
      field('name', $.identifier),
      optional(field('type_parameters', $.type_parameters)),
      field('parameters', $.parameter_list),
      optional(seq(':', field('result', $._type_expr))),
      choice(
        ';',
        field('body', $.stmt_block),
      ),
    ),

    parameter_list: ($) => seq(
      '(',
      commaSep($.parameter),
      ')',
    ),

    parameter: ($) => seq(
      field('name', $.identifier),
      ':',
      field('type', $._type_expr),
    ),

    type_parameters: ($) => seq(
      '<',
      commaSep1($._type_identifier),
      '>',
    ),

    // ------------------------------------------------------------------
    // Statements
    // ------------------------------------------------------------------

    _statement: ($) => choice(
      $.stmt_block,
      $.stmt_if,
      $.stmt_while,
      $.stmt_for,
      $.stmt_defer,
      $.stmt_continue,
      $.stmt_break,
      $.stmt_return,
      $.let_declaration,
      $.stmt_assignment,
      $.stmt_expr,
    ),

    stmt_block: ($) => seq(
      '{',
      repeat($._statement),
      '}',
    ),

    // `let` is both a top level item and a statement. The compiler requires an
    // explicit type on globals, but sharing one node keeps the tree uniform;
    // the type checker is the authority on that distinction.
    let_declaration: ($) => seq(
      repeat($.annotation),
      $._let_declarator,
      ';',
    ),

    _let_declarator: ($) => seq(
      'let',
      field('name', $.identifier),
      choice(
        seq(
          ':',
          field('type', $._type_expr),
          optional(seq('=', field('value', $._value_expr))),
        ),
        seq('=', field('value', $._value_expr)),
      ),
    ),

    _let_declarator_ns: ($) => seq(
      'let',
      field('name', $.identifier),
      choice(
        seq(
          ':',
          field('type', $._type_expr),
          optional(seq('=', field('value', $._value_expr_ns))),
        ),
        seq('=', field('value', $._value_expr_ns)),
      ),
    ),

    stmt_assignment: ($) => seq($._assignment, ';'),

    _assignment: ($) => seq(
      field('left', $._value_expr),
      field('operator', choice(...ASSIGNMENT_OPERATORS)),
      field('right', $._value_expr),
    ),

    _assignment_ns: ($) => seq(
      field('left', $._value_expr_ns),
      field('operator', choice(...ASSIGNMENT_OPERATORS)),
      field('right', $._value_expr_ns),
    ),

    stmt_expr: ($) => seq($._value_expr, ';'),

    stmt_if: ($) => seq(
      'if',
      field('condition', $._value_expr_ns),
      field('consequence', $.stmt_block),
      optional(seq(
        'else',
        field('alternative', choice($.stmt_block, $.stmt_if)),
      )),
    ),

    stmt_while: ($) => seq(
      'while',
      field('condition', $._value_expr_ns),
      field('body', $.stmt_block),
    ),

    stmt_for: ($) => seq(
      'for',
      choice(
        field('initializer', $._for_initializer),
        ';',
      ),
      optional(field('condition', $._value_expr_ns)),
      ';',
      optional(field('update', $._for_update)),
      field('body', $.stmt_block),
    ),

    // The initializer keeps the `;` that terminates it, so it is spelled with
    // the ordinary statement rules.
    _for_initializer: ($) => choice(
      $.let_declaration,
      $.stmt_assignment,
      $.stmt_expr,
    ),

    // The update is followed by the loop body, so it is unterminated and must
    // not swallow the body's `{` as a struct literal.
    _for_update: ($) => choice(
      alias($._let_declarator_ns, $.let_declaration),
      alias($._assignment_ns, $.stmt_assignment),
      $._value_expr_ns,
    ),

    stmt_defer: ($) => seq(
      'defer',
      field('body', $._statement),
    ),

    stmt_continue: (_) => seq('continue', ';'),

    stmt_break: (_) => seq('break', ';'),

    stmt_return: ($) => seq(
      'return',
      optional(field('value', $._value_expr)),
      ';',
    ),

    // ------------------------------------------------------------------
    // Type expressions
    // ------------------------------------------------------------------

    _type_expr: ($) => choice(
      $.type_path,
      $.type_ptr,
      $.type_array_ptr,
      $.type_fn,
      $.type_group,
    ),

    // `x as Foo < y` is ambiguous: `<` may open type arguments or be a
    // comparison. `parse_path_for_type` takes the type arguments greedily, so
    // the rule is right associative to prefer the shift.
    type_path: ($) => prec.right(seq(
      optional(seq(field('package', $.identifier), '::')),
      field('name', $._type_identifier),
      optional(field('type_arguments', $.type_arguments)),
    )),

    type_arguments: ($) => seq(
      '<',
      commaSep1($._type_expr),
      '>',
    ),

    type_ptr: ($) => prec.right(seq(
      '*',
      field('type', $._type_expr),
    )),

    type_array_ptr: ($) => prec.right(seq(
      '[',
      '*',
      ']',
      field('type', $._type_expr),
    )),

    type_fn: ($) => prec.right(seq(
      'fn',
      field('parameters', $.func_type_parameter_list),
      optional(seq(':', field('result', $._type_expr))),
    )),

    func_type_parameter_list: ($) => seq(
      '(',
      commaSep($.func_type_parameter),
      ')',
    ),

    func_type_parameter: ($) => seq(
      optional(seq(field('name', $.identifier), ':')),
      field('type', $._type_expr),
    ),

    type_group: ($) => seq('(', $._type_expr, ')'),

    // ------------------------------------------------------------------
    // Value expressions
    // ------------------------------------------------------------------

    ...expressionRules(false),
    ...expressionRules(true),

    group_expr: ($) => seq('(', $._value_expr, ')'),

    argument_list: ($) => seq(
      '(',
      commaSep($._value_expr),
      ')',
    ),

    value_path: ($) => seq(
      optional(seq(field('package', $.identifier), '::')),
      field('name', $.identifier),
      optional(seq('::', field('type_arguments', $.type_arguments))),
    ),

    struct_literal: ($) => prec(PREC.postfix, seq(
      field('type', $.value_path),
      '{',
      commaSep($.field_initializer),
      '}',
    )),

    field_initializer: ($) => seq(
      field('name', $._field_identifier),
      ':',
      field('value', $._value_expr),
    ),

    // ------------------------------------------------------------------
    // Identifiers and literals
    // ------------------------------------------------------------------

    identifier: (_) => IDENTIFIER,

    _type_identifier: ($) => alias($.identifier, $.type_identifier),

    _field_identifier: ($) => alias($.identifier, $.field_identifier),

    true: (_) => 'true',

    false: (_) => 'false',

    null: (_) => 'null',

    // Mirrors `scan_number_lit`: `0b`/`0o`/`0x` prefixes are lower case only,
    // `_` may appear anywhere between digits, a fraction needs a leading digit,
    // and an exponent only accepts a `-` sign.
    num_literal: (_) => token(choice(
      seq('0b', /_*[01][01_]*/),
      seq('0o', /_*[0-7][0-7_]*/),
      seq('0x', /_*[0-9a-fA-F][0-9a-fA-F_]*/),
      seq(
        /[0-9][0-9_]*/,
        optional(seq('.', optional(/[0-9][0-9_]*/))),
        optional(seq(/[eE]/, optional('-'), /[0-9][0-9_]*/)),
      ),
    )),

    char_literal: ($) => seq(
      '\'',
      choice(
        $.escape_sequence,
        token.immediate(/[^'\\]/),
      ),
      token.immediate('\''),
    ),

    // Magelang strings are not newline terminated: `scan_string_internal` reads
    // until the closing quote or the end of the file.
    string_literal: ($) => seq(
      '"',
      repeat(choice(
        $._string_content,
        $.escape_sequence,
      )),
      token.immediate('"'),
    ),

    _string_content: (_) => token.immediate(/[^"\\]+/),

    escape_sequence: (_) => token.immediate(seq(
      '\\',
      choice(
        /[nrt\\0'"]/,
        /x[0-9a-fA-F]{2}/,
      ),
    )),

    comment: (_) => token(seq('//', /[^\n]*/)),
  },
});
