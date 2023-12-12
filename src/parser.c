#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  anon_sym_STAR = 6,
  sym_identifier = 7,
  sym_discard = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_DQUOTE2 = 10,
  aux_sym_escape_sequence_token1 = 11,
  aux_sym_escape_sequence_token2 = 12,
  anon_sym_DASH = 13,
  sym__hex = 14,
  sym__decimal = 15,
  sym__octal = 16,
  sym__binary = 17,
  sym_comment = 18,
  sym_quoted_content = 19,
  sym_source_file = 20,
  sym_item = 21,
  sym_function = 22,
  sym_function_parameters = 23,
  sym_function_parameter = 24,
  sym_pattern = 25,
  sym_type_annotation = 26,
  sym_type = 27,
  sym_pointer_type = 28,
  sym_function_type = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_function_parameters_repeat1 = 31,
  aux_sym_function_type_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
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
  [sym_pattern] = "pattern",
  [sym_type_annotation] = "type_annotation",
  [sym_type] = "type",
  [sym_pointer_type] = "pointer_type",
  [sym_function_type] = "function_type",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym_pattern] = sym_pattern,
  [sym_type_annotation] = sym_type_annotation,
  [sym_type] = sym_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_function_type] = sym_function_type,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  field_name = 1,
  field_parameters = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_parameters, 2},
  [2] =
    {field_type, 1},
  [3] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '_') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(39);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(42),
    [sym_item] = STATE(7),
    [sym_function] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    STATE(38), 1,
      sym_type,
    STATE(25), 2,
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
    STATE(38), 1,
      sym_type,
    STATE(25), 2,
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
    STATE(14), 1,
      sym_type,
    STATE(25), 2,
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
    STATE(38), 1,
      sym_type,
    STATE(25), 2,
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
    STATE(26), 1,
      sym_type,
    STATE(25), 2,
      sym_pointer_type,
      sym_function_type,
  [109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_function,
    STATE(8), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_fn,
    STATE(29), 1,
      sym_function,
    STATE(8), 2,
      sym_item,
      aux_sym_source_file_repeat1,
  [143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_pattern,
    STATE(16), 1,
      sym_function_parameter,
    ACTIONS(30), 2,
      sym_identifier,
      sym_discard,
  [160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_pattern,
    STATE(21), 1,
      sym_function_parameter,
    ACTIONS(30), 2,
      sym_identifier,
      sym_discard,
  [177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_pattern,
    STATE(21), 1,
      sym_function_parameter,
    ACTIONS(30), 2,
      sym_identifier,
      sym_discard,
  [194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym_type_annotation,
    ACTIONS(36), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_pattern,
    STATE(21), 1,
      sym_function_parameter,
    ACTIONS(30), 2,
      sym_identifier,
      sym_discard,
  [222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_function_type_repeat1,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_function_parameters_repeat1,
  [257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_function_type_repeat1,
  [270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_function_parameters_repeat1,
  [283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_function_type_repeat1,
  [296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_function_parameters_repeat1,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      sym_identifier,
      sym_discard,
  [341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_function_parameters,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_fn,
  [439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
  [462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
  [476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 309,
  [SMALL_STATE(22)] = 317,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 341,
  [SMALL_STATE(26)] = 349,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 365,
  [SMALL_STATE(29)] = 373,
  [SMALL_STATE(30)] = 381,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 431,
  [SMALL_STATE(37)] = 439,
  [SMALL_STATE(38)] = 447,
  [SMALL_STATE(39)] = 455,
  [SMALL_STATE(40)] = 462,
  [SMALL_STATE(41)] = 469,
  [SMALL_STATE(42)] = 476,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, .production_id = 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
