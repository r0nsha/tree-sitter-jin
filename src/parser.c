#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_COLON = 7,
  anon_sym_STAR = 8,
  anon_sym_DASH_GT = 9,
  sym_identifier = 10,
  sym_discard = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_DQUOTE2 = 13,
  aux_sym_escape_sequence_token1 = 14,
  aux_sym_escape_sequence_token2 = 15,
  sym_float = 16,
  anon_sym_DASH = 17,
  sym__hex = 18,
  sym__decimal = 19,
  sym__octal = 20,
  sym__binary = 21,
  sym_comment = 22,
  sym_quoted_content = 23,
  sym_source_file = 24,
  sym_item = 25,
  sym_function = 26,
  sym_function_parameters = 27,
  sym_function_parameter = 28,
  sym_statement = 29,
  sym_expression = 30,
  sym_block = 31,
  sym_pattern = 32,
  sym_type_annotation = 33,
  sym_type = 34,
  sym_pointer_type = 35,
  sym_function_type = 36,
  sym_function_return_type = 37,
  sym_literal = 38,
  sym_string = 39,
  sym_escape_sequence = 40,
  sym_integer = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_function_parameters_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_function_type_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
  [sym_discard] = "discard",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [sym_float] = "float",
  [anon_sym_DASH] = "-",
  [sym__hex] = "_hex",
  [sym__decimal] = "_decimal",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym_comment] = "comment",
  [sym_quoted_content] = "quoted_content",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_function] = "function",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter] = "function_parameter",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_block] = "block",
  [sym_pattern] = "pattern",
  [sym_type_annotation] = "type_annotation",
  [sym_type] = "type",
  [sym_pointer_type] = "pointer_type",
  [sym_function_type] = "function_type",
  [sym_function_return_type] = "function_return_type",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_integer] = "integer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_discard] = sym_discard,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [sym_float] = sym_float,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__hex] = sym__hex,
  [sym__decimal] = sym__decimal,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym_comment] = sym_comment,
  [sym_quoted_content] = sym_quoted_content,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_function] = sym_function,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter] = sym_function_parameter,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_block] = sym_block,
  [sym_pattern] = sym_pattern,
  [sym_type_annotation] = sym_type_annotation,
  [sym_type] = sym_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_function_type] = sym_function_type,
  [sym_function_return_type] = sym_function_return_type,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_integer] = sym_integer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameters = 3,
  field_return_type = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_return_type, 1},
  [3] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [6] =
    {field_body, 3},
    {field_name, 1},
  [8] =
    {field_name, 1},
  [9] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
  [12] =
    {field_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 12,
  [59] = 59,
  [60] = 11,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '_') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_discard);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23, .external_lex_state = 1},
  [21] = {.lex_state = 23, .external_lex_state = 1},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 23, .external_lex_state = 1},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23, .external_lex_state = 1},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 0},
};

enum {
  ts_external_token_quoted_content = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_content] = sym_quoted_content,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_discard] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [aux_sym_escape_sequence_token2] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_quoted_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_item] = STATE(35),
    [sym_function] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__decimal,
    STATE(13), 1,
      sym_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(8), 2,
      sym_block,
      sym_literal,
    STATE(15), 2,
      sym_string,
      sym_integer,
    ACTIONS(21), 3,
      sym__hex,
      sym__octal,
      sym__binary,
  [45] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__decimal,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_expression,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(8), 2,
      sym_block,
      sym_literal,
    STATE(15), 2,
      sym_string,
      sym_integer,
    ACTIONS(21), 3,
      sym__hex,
      sym__octal,
      sym__binary,
  [90] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__decimal,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(8), 2,
      sym_block,
      sym_literal,
    STATE(15), 2,
      sym_string,
      sym_integer,
    ACTIONS(21), 3,
      sym__hex,
      sym__octal,
      sym__binary,
  [135] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      sym_float,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      sym__decimal,
    STATE(13), 1,
      sym_expression,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(8), 2,
      sym_block,
      sym_literal,
    STATE(15), 2,
      sym_string,
      sym_integer,
    ACTIONS(46), 3,
      sym__hex,
      sym__octal,
      sym__binary,
  [180] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__decimal,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_expression,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(8), 2,
      sym_block,
      sym_literal,
    STATE(15), 2,
      sym_string,
      sym_integer,
    ACTIONS(21), 3,
      sym__hex,
      sym__octal,
      sym__binary,
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(54), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(58), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(62), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(66), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(70), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(74), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(78), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(82), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      sym_identifier,
      anon_sym_DASH,
      sym__decimal,
    ACTIONS(86), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      sym__hex,
      sym__octal,
      sym__binary,
  [387] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(65), 1,
      sym_type,
    STATE(52), 2,
      sym_pointer_type,
      sym_function_type,
  [410] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_type,
    STATE(52), 2,
      sym_pointer_type,
      sym_function_type,
  [433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_type,
    STATE(52), 2,
      sym_pointer_type,
      sym_function_type,
  [456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    STATE(55), 1,
      sym_function_return_type,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(112), 1,
      sym_quoted_content,
    ACTIONS(110), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
    STATE(25), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(119), 1,
      sym_quoted_content,
    ACTIONS(116), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
    STATE(21), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(62), 1,
      sym_type,
    STATE(52), 2,
      sym_pointer_type,
      sym_function_type,
  [530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_function_parameters,
    STATE(70), 1,
      sym_function_return_type,
    STATE(72), 1,
      sym_block,
  [552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(65), 1,
      sym_type,
    STATE(52), 2,
      sym_pointer_type,
      sym_function_type,
  [572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE2,
    ACTIONS(128), 1,
      sym_quoted_content,
    ACTIONS(110), 2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
    STATE(21), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(49), 1,
      sym_type,
    STATE(52), 2,
      sym_pointer_type,
      sym_function_type,
  [610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    STATE(53), 1,
      sym_function_return_type,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_pattern,
    STATE(48), 1,
      sym_function_parameter,
    ACTIONS(134), 2,
      sym_identifier,
      sym_discard,
  [642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    STATE(42), 1,
      sym_function_return_type,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    STATE(54), 1,
      sym_function_return_type,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym_function_return_type,
    ACTIONS(140), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_pattern,
    STATE(66), 1,
      sym_function_parameter,
    ACTIONS(134), 2,
      sym_identifier,
      sym_discard,
  [704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_fn,
    STATE(73), 1,
      sym_function,
    STATE(33), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_pattern,
    STATE(66), 1,
      sym_function_parameter,
    ACTIONS(134), 2,
      sym_identifier,
      sym_discard,
  [738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_function,
    STATE(33), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 4,
      sym_quoted_content,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
  [765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym_pattern,
    STATE(66), 1,
      sym_function_parameter,
    ACTIONS(134), 2,
      sym_identifier,
      sym_discard,
  [779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    STATE(71), 1,
      sym_function_return_type,
  [795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_type_annotation,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__decimal,
    ACTIONS(159), 3,
      sym__hex,
      sym__octal,
      sym__binary,
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_function_type_repeat1,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_function_type_repeat1,
  [883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_function_parameters_repeat1,
  [896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_function_parameters_repeat1,
  [909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_function_parameters_repeat1,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_function_type_repeat1,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym_identifier,
      sym_discard,
  [1012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_identifier,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 333,
  [SMALL_STATE(14)] = 351,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 387,
  [SMALL_STATE(17)] = 410,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 474,
  [SMALL_STATE(21)] = 492,
  [SMALL_STATE(22)] = 510,
  [SMALL_STATE(23)] = 530,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 572,
  [SMALL_STATE(26)] = 590,
  [SMALL_STATE(27)] = 610,
  [SMALL_STATE(28)] = 625,
  [SMALL_STATE(29)] = 642,
  [SMALL_STATE(30)] = 657,
  [SMALL_STATE(31)] = 672,
  [SMALL_STATE(32)] = 687,
  [SMALL_STATE(33)] = 704,
  [SMALL_STATE(34)] = 721,
  [SMALL_STATE(35)] = 738,
  [SMALL_STATE(36)] = 755,
  [SMALL_STATE(37)] = 765,
  [SMALL_STATE(38)] = 779,
  [SMALL_STATE(39)] = 795,
  [SMALL_STATE(40)] = 809,
  [SMALL_STATE(41)] = 821,
  [SMALL_STATE(42)] = 830,
  [SMALL_STATE(43)] = 839,
  [SMALL_STATE(44)] = 848,
  [SMALL_STATE(45)] = 861,
  [SMALL_STATE(46)] = 870,
  [SMALL_STATE(47)] = 883,
  [SMALL_STATE(48)] = 896,
  [SMALL_STATE(49)] = 909,
  [SMALL_STATE(50)] = 918,
  [SMALL_STATE(51)] = 931,
  [SMALL_STATE(52)] = 944,
  [SMALL_STATE(53)] = 953,
  [SMALL_STATE(54)] = 962,
  [SMALL_STATE(55)] = 971,
  [SMALL_STATE(56)] = 980,
  [SMALL_STATE(57)] = 988,
  [SMALL_STATE(58)] = 996,
  [SMALL_STATE(59)] = 1004,
  [SMALL_STATE(60)] = 1012,
  [SMALL_STATE(61)] = 1020,
  [SMALL_STATE(62)] = 1028,
  [SMALL_STATE(63)] = 1036,
  [SMALL_STATE(64)] = 1044,
  [SMALL_STATE(65)] = 1052,
  [SMALL_STATE(66)] = 1060,
  [SMALL_STATE(67)] = 1068,
  [SMALL_STATE(68)] = 1076,
  [SMALL_STATE(69)] = 1084,
  [SMALL_STATE(70)] = 1092,
  [SMALL_STATE(71)] = 1102,
  [SMALL_STATE(72)] = 1112,
  [SMALL_STATE(73)] = 1120,
  [SMALL_STATE(74)] = 1128,
  [SMALL_STATE(75)] = 1135,
  [SMALL_STATE(76)] = 1142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(36),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(24),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2, .production_id = 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(37),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2, .production_id = 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jin_external_scanner_create(void);
void tree_sitter_jin_external_scanner_destroy(void *);
bool tree_sitter_jin_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jin_external_scanner_serialize(void *, char *);
void tree_sitter_jin_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jin_external_scanner_create,
      tree_sitter_jin_external_scanner_destroy,
      tree_sitter_jin_external_scanner_scan,
      tree_sitter_jin_external_scanner_serialize,
      tree_sitter_jin_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
