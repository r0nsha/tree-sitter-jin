const newline = /\r?\n/;

module.exports = grammar({
  name: "jin",
  externals: ($) => [$.quoted_content],
  extras: ($) => [newline, /\s/, $.comment],
  rules: {
    source_file: ($) => repeat($.item),
    item: ($) => choice($.function),

    // Functions
    function: ($) =>
      prec.right(
        seq(
          "fn",
          field("name", $.identifier),
          optional(field("parameters", $.function_parameters)),
          optional($.function_return_type),
          field("body", $.block)
        )
      ),
    function_parameters: ($) =>
      seq("(", optional(separated_seq($.function_parameter, ",")), ")"),
    function_parameter: ($) => seq($.pattern, optional($.type_annotation)),

    expression: ($) => choice($.block),
    block: ($) => seq("{", "}"),

    // Patterns
    pattern: ($) => choice($.identifier, $.discard),

    // Types
    type_annotation: ($) => seq(":", field("type", $.type)),
    type: ($) => choice($.identifier, $.pointer_type, $.function_type),
    pointer_type: ($) => seq("*", choice($.identifier, $.discard)),
    function_type: ($) =>
      seq(
        "fn",
        field("name", $.identifier),
        optional(seq("(", optional(separated_seq($.type, ",")), ")")),
        optional($.function_return_type)
      ),
    function_return_type: ($) => seq("->", field("return_type", $.type)),

    // Identifiers
    visibility_modifier: ($) => optional("*"),
    identifier: ($) => /[_a-z][_0-9a-z]*/,
    discard: ($) => "_",

    // Literals
    string: ($) =>
      seq(
        '"',
        repeat(choice($.escape_sequence, $.quoted_content)),
        token.immediate('"')
      ),
    escape_sequence: ($) =>
      choice(
        token.immediate(/\\[efnrt\"\\]/),
        token.immediate(/\\u\{[0-9a-fA-F]{1,6}\}/)
      ),
    float: ($) => /-?[0-9_]+\.[0-9_]*(e-?[0-9_]+)?/,
    integer: ($) =>
      seq(optional("-"), choice($._hex, $._decimal, $._octal, $._binary)),
    _hex: ($) => /0[xX][0-9a-fA-F_]+/,
    _decimal: ($) => /[0-9][0-9_]*/,
    _octal: ($) => /0[oO][0-7_]+/,
    _binary: ($) => /0[bB][0-1_]+/,

    // Comments
    comment: (_) => token(seq("//", /.*/)),
  },
});

function separated_seq(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)), optional(separator));
}

function binary_expr(assoc, precedence, op, lhs, rhs = null) {
  return assoc(
    precedence,
    seq(field("left", lhs), field("operator", op), field("right", rhs || lhs))
  );
}
