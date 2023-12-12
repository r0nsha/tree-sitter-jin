const newline = /\r?\n/;

module.exports = grammar({
  name: "jin",
  externals: ($) => [$.quoted_content],
  extras: ($) => [newline, /\s/, $.comment],
  rules: {
    source_file: ($) => repeat($.item),
    item: ($) =>
      choice(
        $.function,
        $.extern_function,
        $.let,
        $.type_definition,
        $.import,
        $.extern_let,
        $.extern_import
      ),

    // Imports
    import: ($) => seq("import", $._import_name),
    _import_name: ($) =>
      seq(
        $.identifier,
        optional($.visibility),
        optional(choice(seq(".", $._import_node), seq("as", $.identifier)))
      ),
    _import_node: ($) =>
      choice($._import_name, $._import_group, $._import_glob),
    _import_group: ($) => seq("{", separated_seq($._import_node, ","), "}"),
    _import_glob: ($) => "*",
    extern_import: ($) => seq("import", "extern", $.quoted_content),

    // Functions
    function: ($) =>
      prec.right(
        seq(
          "fn",
          field("name", $.identifier),
          optional($.visibility),
          optional(field("parameters", $.function_parameters)),
          optional($.function_return_type),
          field("body", $.block)
        )
      ),
    function_parameters: ($) =>
      seq("(", optional(separated_seq($.function_parameter, ",")), ")"),
    function_parameter: ($) => seq($.pattern, optional($.type_annotation)),
    extern_function: ($) =>
      prec.right(
        seq(
          "fn",
          field("name", $.identifier),
          optional($.visibility),
          optional(field("parameters", $.function_parameters)),
          optional($.function_return_type)
        )
      ),

    // Expressions
    expression: ($) => choice($.let, $.block, $.identifier, $.literal),
    block: ($) => seq("{", repeat($.expression), "}"),

    // Variables
    let: ($) =>
      seq("let", $.pattern, optional($.type_annotation), "=", $.expression),
    extern_let: ($) =>
      seq(
        "let",
        "extern",
        $.identifier,
        optional($.visibility),
        $.type_annotation
      ),

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
    type_definition: ($) =>
      seq(
        "type",
        $.identifier,
        optional("extern"),
        choice(seq("(", separated_seq($.type_definition_field, ","), ")"))
      ),
    type_definition_field: ($) =>
      seq($.identifier, optional($.visibility), $.type_annotation),

    // Patterns
    pattern: ($) =>
      seq(
        optional($.mutability),
        choice($.identifier, $.discard),
        optional($.visibility)
      ),

    // Identifiers

    mutability: ($) => "mut",
    visibility: ($) => "*",
    identifier: ($) => /[_a-z][_0-9a-z]*/,
    discard: ($) => "_",

    // Literals
    literal: ($) => choice($.string, $.float, $.integer),
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
