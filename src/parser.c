#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_element_token1 = 1,
  anon_sym_ = 2,
  anon_sym_2 = 3,
  anon_sym_3 = 4,
  anon_sym_4 = 5,
  anon_sym_5 = 6,
  sym_source_file = 7,
  sym_element = 8,
  sym_attributes = 9,
  aux_sym_source_file_repeat1 = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_element_token1] = "element_token1",
  [anon_sym_] = "",
  [anon_sym_2] = "",
  [anon_sym_3] = "",
  [anon_sym_4] = "",
  [anon_sym_5] = "",
  [sym_source_file] = "source_file",
  [sym_element] = "element",
  [sym_attributes] = "attributes",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_element_token1] = aux_sym_element_token1,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [sym_source_file] = sym_source_file,
  [sym_element] = sym_element,
  [sym_attributes] = sym_attributes,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_element_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == 16) ADVANCE(7);
      if (lookahead == 17) ADVANCE(8);
      if (lookahead == 18) ADVANCE(5);
      if (lookahead == 19) ADVANCE(6);
      if (lookahead == 22) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 17) ADVANCE(8);
      if (lookahead == 22) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_element_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 16 || 19 < lookahead) &&
          lookahead != 22) ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_element_token1);
      if (lookahead != 0 &&
          (lookahead < 16 || 19 < lookahead) &&
          lookahead != 22) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_element_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_element] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_element_token1] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(9),
  },
  [2] = {
    [sym_element] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_element_token1] = ACTIONS(13),
    [anon_sym_] = ACTIONS(16),
    [anon_sym_3] = ACTIONS(19),
  },
  [3] = {
    [sym_element] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_element_token1] = ACTIONS(22),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(26),
    [anon_sym_3] = ACTIONS(28),
  },
  [4] = {
    [sym_element] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_element_token1] = ACTIONS(22),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(30),
    [anon_sym_3] = ACTIONS(28),
  },
  [5] = {
    [sym_element] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_element_token1] = ACTIONS(22),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_3] = ACTIONS(28),
  },
  [6] = {
    [sym_element] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_element_token1] = ACTIONS(34),
    [anon_sym_] = ACTIONS(37),
    [anon_sym_2] = ACTIONS(40),
    [anon_sym_3] = ACTIONS(42),
  },
  [7] = {
    [sym_element] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_element_token1] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(9),
  },
  [8] = {
    [sym_element] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_element_token1] = ACTIONS(22),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(28),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_element_token1,
    ACTIONS(51), 2,
      anon_sym_,
      anon_sym_3,
  [9] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_element_token1,
    ACTIONS(55), 2,
      anon_sym_,
      anon_sym_3,
  [18] = 4,
    ACTIONS(57), 1,
      aux_sym_element_token1,
    ACTIONS(59), 1,
      anon_sym_4,
    ACTIONS(61), 1,
      anon_sym_5,
    STATE(13), 1,
      sym_attributes,
  [31] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_element_token1,
    ACTIONS(65), 2,
      anon_sym_,
      anon_sym_3,
  [40] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym_element_token1,
    ACTIONS(69), 2,
      anon_sym_,
      anon_sym_3,
  [49] = 4,
    ACTIONS(57), 1,
      aux_sym_element_token1,
    ACTIONS(59), 1,
      anon_sym_4,
    ACTIONS(61), 1,
      anon_sym_5,
    STATE(15), 1,
      sym_attributes,
  [62] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_element_token1,
    ACTIONS(73), 2,
      anon_sym_,
      anon_sym_3,
  [71] = 2,
    ACTIONS(75), 1,
      aux_sym_element_token1,
    ACTIONS(77), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [80] = 2,
    ACTIONS(49), 1,
      aux_sym_element_token1,
    ACTIONS(51), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [89] = 2,
    ACTIONS(53), 1,
      aux_sym_element_token1,
    ACTIONS(55), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [98] = 4,
    ACTIONS(79), 1,
      aux_sym_element_token1,
    ACTIONS(81), 1,
      anon_sym_4,
    ACTIONS(83), 1,
      anon_sym_5,
    STATE(22), 1,
      sym_attributes,
  [111] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym_element_token1,
    ACTIONS(77), 2,
      anon_sym_,
      anon_sym_3,
  [120] = 2,
    ACTIONS(63), 1,
      aux_sym_element_token1,
    ACTIONS(65), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [129] = 2,
    ACTIONS(67), 1,
      aux_sym_element_token1,
    ACTIONS(69), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [138] = 4,
    ACTIONS(79), 1,
      aux_sym_element_token1,
    ACTIONS(81), 1,
      anon_sym_4,
    ACTIONS(83), 1,
      anon_sym_5,
    STATE(24), 1,
      sym_attributes,
  [151] = 2,
    ACTIONS(71), 1,
      aux_sym_element_token1,
    ACTIONS(73), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [160] = 4,
    ACTIONS(79), 1,
      aux_sym_element_token1,
    ACTIONS(81), 1,
      anon_sym_4,
    ACTIONS(83), 1,
      anon_sym_5,
    STATE(17), 1,
      sym_attributes,
  [173] = 4,
    ACTIONS(57), 1,
      aux_sym_element_token1,
    ACTIONS(59), 1,
      anon_sym_4,
    ACTIONS(61), 1,
      anon_sym_5,
    STATE(9), 1,
      sym_attributes,
  [186] = 2,
    ACTIONS(85), 1,
      anon_sym_4,
    ACTIONS(87), 1,
      anon_sym_5,
  [193] = 2,
    ACTIONS(89), 1,
      anon_sym_4,
    ACTIONS(91), 1,
      anon_sym_5,
  [200] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 9,
  [SMALL_STATE(11)] = 18,
  [SMALL_STATE(12)] = 31,
  [SMALL_STATE(13)] = 40,
  [SMALL_STATE(14)] = 49,
  [SMALL_STATE(15)] = 62,
  [SMALL_STATE(16)] = 71,
  [SMALL_STATE(17)] = 80,
  [SMALL_STATE(18)] = 89,
  [SMALL_STATE(19)] = 98,
  [SMALL_STATE(20)] = 111,
  [SMALL_STATE(21)] = 120,
  [SMALL_STATE(22)] = 129,
  [SMALL_STATE(23)] = 138,
  [SMALL_STATE(24)] = 151,
  [SMALL_STATE(25)] = 160,
  [SMALL_STATE(26)] = 173,
  [SMALL_STATE(27)] = 186,
  [SMALL_STATE(28)] = 193,
  [SMALL_STATE(29)] = 200,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(20),
  [7] = {.count = 1, .reusable = false}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(26),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [16] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [22] = {.count = 1, .reusable = true}, SHIFT(16),
  [24] = {.count = 1, .reusable = false}, SHIFT(5),
  [26] = {.count = 1, .reusable = false}, SHIFT(21),
  [28] = {.count = 1, .reusable = false}, SHIFT(25),
  [30] = {.count = 1, .reusable = false}, SHIFT(9),
  [32] = {.count = 1, .reusable = false}, SHIFT(17),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [42] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(12),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_attributes, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_attributes, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = false}, SHIFT(10),
  [61] = {.count = 1, .reusable = false}, SHIFT(11),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_attributes, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_attributes, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_attributes, 3),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_attributes, 3),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(28),
  [81] = {.count = 1, .reusable = false}, SHIFT(18),
  [83] = {.count = 1, .reusable = false}, SHIFT(19),
  [85] = {.count = 1, .reusable = true}, SHIFT(13),
  [87] = {.count = 1, .reusable = true}, SHIFT(14),
  [89] = {.count = 1, .reusable = true}, SHIFT(22),
  [91] = {.count = 1, .reusable = true}, SHIFT(23),
  [93] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wordprocessing(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
