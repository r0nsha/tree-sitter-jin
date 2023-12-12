#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  anon_sym_DASH = 16,
  sym__hex = 17,
  sym__decimal = 18,
  sym__octal = 19,
  sym__binary = 20,
  sym_comment = 21,
  sym_quoted_content = 22,
  sym_source_file = 23,
  sym_item = 24,
  sym_function = 25,
  sym_function_parameters = 26,
  sym_function_parameter = 27,
  sym_block = 28,
  sym_pattern = 29,
  sym_type_annotation = 30,
  sym_type = 31,
  sym_pointer_type = 32,
  sym_function_type = 33,
  sym_function_return_type = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_function_parameters_repeat1 = 36,
  aux_sym_function_type_repeat1 = 37,
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
  [sym_block] = "block",
  [sym_pattern] = "pattern",
  [sym_type_annotation] = "type_annotation",
  [sym_type] = "type",
  [sym_pointer_type] = "pointer_type",
  [sym_function_type] = "function_type",
  [sym_function_return_type] = "function_return_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
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
  [sym_block] = sym_block,
  [sym_pattern] = sym_pattern,
  [sym_type_annotation] = sym_type_annotation,
  [sym_type] = sym_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_function_type] = sym_function_type,
  [sym_function_return_type] = sym_function_return_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '_') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == '{') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
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
    [anon_sym_DASH] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_quoted_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_item] = STATE(10),
    [sym_function] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(49), 1,
      sym_type,
    STATE(36), 2,
      sym_pointer_type,
      sym_function_type,
  [23] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_type,
    STATE(36), 2,
      sym_pointer_type,
      sym_function_type,
  [46] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_type,
    STATE(36), 2,
      sym_pointer_type,
      sym_function_type,
  [69] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type,
    STATE(36), 2,
      sym_pointer_type,
      sym_function_type,
  [89] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(49), 1,
      sym_type,
    STATE(36), 2,
      sym_pointer_type,
      sym_function_type,
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(39), 1,
      sym_type,
    STATE(36), 2,
      sym_pointer_type,
      sym_function_type,
  [129] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(19), 1,
      sym_function_parameters,
    STATE(46), 1,
      sym_function_return_type,
    STATE(48), 1,
      sym_block,
  [151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_function_return_type,
    ACTIONS(29), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_function,
    STATE(17), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(28), 1,
      sym_function_return_type,
    ACTIONS(33), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(25), 1,
      sym_function_return_type,
    ACTIONS(35), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(30), 1,
      sym_function_return_type,
    ACTIONS(37), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(26), 1,
      sym_function_return_type,
    ACTIONS(39), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_pattern,
    STATE(38), 1,
      sym_function_parameter,
    ACTIONS(43), 2,
      sym_identifier,
      sym_discard,
  [263] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_pattern,
    STATE(34), 1,
      sym_function_parameter,
    ACTIONS(43), 2,
      sym_identifier,
      sym_discard,
  [280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_fn,
    STATE(52), 1,
      sym_function,
    STATE(17), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_pattern,
    STATE(38), 1,
      sym_function_parameter,
    ACTIONS(43), 2,
      sym_identifier,
      sym_discard,
  [314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DASH_GT,
    STATE(41), 1,
      sym_block,
    STATE(53), 1,
      sym_function_return_type,
  [330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_pattern,
    STATE(38), 1,
      sym_function_parameter,
    ACTIONS(43), 2,
      sym_identifier,
      sym_discard,
  [344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym_type_annotation,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_function_parameters_repeat1,
  [371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_function_parameters_repeat1,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_function_type_repeat1,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_function_type_repeat1,
  [446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_function_type_repeat1,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_function_parameters_repeat1,
  [499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      sym_identifier,
      sym_discard,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_identifier,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
  [671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 344,
  [SMALL_STATE(22)] = 358,
  [SMALL_STATE(23)] = 371,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 433,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 455,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 477,
  [SMALL_STATE(34)] = 486,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 517,
  [SMALL_STATE(38)] = 525,
  [SMALL_STATE(39)] = 533,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 549,
  [SMALL_STATE(42)] = 557,
  [SMALL_STATE(43)] = 565,
  [SMALL_STATE(44)] = 573,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 589,
  [SMALL_STATE(47)] = 599,
  [SMALL_STATE(48)] = 607,
  [SMALL_STATE(49)] = 615,
  [SMALL_STATE(50)] = 623,
  [SMALL_STATE(51)] = 631,
  [SMALL_STATE(52)] = 639,
  [SMALL_STATE(53)] = 647,
  [SMALL_STATE(54)] = 657,
  [SMALL_STATE(55)] = 664,
  [SMALL_STATE(56)] = 671,
  [SMALL_STATE(57)] = 678,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, .production_id = 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8, .production_id = 5),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2, .production_id = 7),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
