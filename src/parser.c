#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_text = 1,
  anon_sym_ = 2,
  anon_sym_2 = 3,
  anon_sym_3 = 4,
  anon_sym_4 = 5,
  anon_sym_5 = 6,
  sym_source_file = 7,
  sym_element = 8,
  sym_attr = 9,
  sym__attr_tail = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_] = "",
  [anon_sym_2] = "",
  [anon_sym_3] = "",
  [anon_sym_4] = "",
  [anon_sym_5] = "",
  [sym_source_file] = "source_file",
  [sym_element] = "element",
  [sym_attr] = "attr",
  [sym__attr_tail] = "_attr_tail",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [sym_source_file] = sym_source_file,
  [sym_element] = sym_element,
  [sym_attr] = sym_attr,
  [sym__attr_tail] = sym__attr_tail,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_tail] = {
    .visible = false,
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 16 || 19 < lookahead) &&
          lookahead != 22) ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_text);
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
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym_element] = STATE(6),
    [sym_attr] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(9),
  },
  [2] = {
    [sym_element] = STATE(2),
    [sym_attr] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
    [anon_sym_] = ACTIONS(16),
    [anon_sym_3] = ACTIONS(19),
  },
  [3] = {
    [sym_element] = STATE(8),
    [sym_attr] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_text] = ACTIONS(22),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(26),
    [anon_sym_3] = ACTIONS(28),
  },
  [4] = {
    [sym_element] = STATE(7),
    [sym_attr] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_text] = ACTIONS(30),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(32),
    [anon_sym_3] = ACTIONS(28),
  },
  [5] = {
    [sym_element] = STATE(4),
    [sym_attr] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_text] = ACTIONS(34),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(36),
    [anon_sym_3] = ACTIONS(28),
  },
  [6] = {
    [sym_element] = STATE(2),
    [sym_attr] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_text] = ACTIONS(40),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(9),
  },
  [7] = {
    [sym_element] = STATE(7),
    [sym_attr] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_text] = ACTIONS(42),
    [anon_sym_] = ACTIONS(45),
    [anon_sym_2] = ACTIONS(48),
    [anon_sym_3] = ACTIONS(50),
  },
  [8] = {
    [sym_element] = STATE(7),
    [sym_attr] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_text] = ACTIONS(30),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(28),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(55), 1,
      sym_text,
    ACTIONS(57), 1,
      anon_sym_4,
    ACTIONS(59), 1,
      anon_sym_5,
    STATE(14), 1,
      sym__attr_tail,
  [13] = 4,
    ACTIONS(55), 1,
      sym_text,
    ACTIONS(59), 1,
      anon_sym_5,
    ACTIONS(61), 1,
      anon_sym_4,
    STATE(13), 1,
      sym__attr_tail,
  [26] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(65), 2,
      anon_sym_,
      anon_sym_3,
  [35] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(69), 2,
      anon_sym_,
      anon_sym_3,
  [44] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(73), 2,
      anon_sym_,
      anon_sym_3,
  [53] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(77), 2,
      anon_sym_,
      anon_sym_3,
  [62] = 2,
    ACTIONS(79), 1,
      sym_text,
    ACTIONS(81), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [71] = 4,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(85), 1,
      anon_sym_4,
    ACTIONS(87), 1,
      anon_sym_5,
    STATE(20), 1,
      sym__attr_tail,
  [84] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(65), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [93] = 4,
    ACTIONS(55), 1,
      sym_text,
    ACTIONS(59), 1,
      anon_sym_5,
    ACTIONS(89), 1,
      anon_sym_4,
    STATE(11), 1,
      sym__attr_tail,
  [106] = 2,
    ACTIONS(67), 1,
      sym_text,
    ACTIONS(69), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [115] = 2,
    ACTIONS(71), 1,
      sym_text,
    ACTIONS(73), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [124] = 4,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(87), 1,
      anon_sym_5,
    ACTIONS(91), 1,
      anon_sym_4,
    STATE(22), 1,
      sym__attr_tail,
  [137] = 2,
    ACTIONS(75), 1,
      sym_text,
    ACTIONS(77), 3,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
  [146] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_3,
  [155] = 4,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(87), 1,
      anon_sym_5,
    ACTIONS(93), 1,
      anon_sym_4,
    STATE(17), 1,
      sym__attr_tail,
  [168] = 2,
    ACTIONS(95), 1,
      anon_sym_4,
    ACTIONS(97), 1,
      anon_sym_5,
  [175] = 2,
    ACTIONS(99), 1,
      anon_sym_4,
    ACTIONS(101), 1,
      anon_sym_5,
  [182] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 13,
  [SMALL_STATE(11)] = 26,
  [SMALL_STATE(12)] = 35,
  [SMALL_STATE(13)] = 44,
  [SMALL_STATE(14)] = 53,
  [SMALL_STATE(15)] = 62,
  [SMALL_STATE(16)] = 71,
  [SMALL_STATE(17)] = 84,
  [SMALL_STATE(18)] = 93,
  [SMALL_STATE(19)] = 106,
  [SMALL_STATE(20)] = 115,
  [SMALL_STATE(21)] = 124,
  [SMALL_STATE(22)] = 137,
  [SMALL_STATE(23)] = 146,
  [SMALL_STATE(24)] = 155,
  [SMALL_STATE(25)] = 168,
  [SMALL_STATE(26)] = 175,
  [SMALL_STATE(27)] = 182,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(6),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(18),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [19] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.count = 1, .reusable = true}, SHIFT(8),
  [24] = {.count = 1, .reusable = false}, SHIFT(5),
  [26] = {.count = 1, .reusable = false}, SHIFT(23),
  [28] = {.count = 1, .reusable = false}, SHIFT(24),
  [30] = {.count = 1, .reusable = true}, SHIFT(7),
  [32] = {.count = 1, .reusable = false}, SHIFT(19),
  [34] = {.count = 1, .reusable = true}, SHIFT(4),
  [36] = {.count = 1, .reusable = false}, SHIFT(15),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [40] = {.count = 1, .reusable = true}, SHIFT(2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [45] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [53] = {.count = 1, .reusable = false}, SHIFT(12),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = false}, SHIFT(14),
  [59] = {.count = 1, .reusable = false}, SHIFT(10),
  [61] = {.count = 1, .reusable = false}, SHIFT(13),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_attr, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_attr, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__attr_tail, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__attr_tail, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__attr_tail, 3),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym__attr_tail, 3),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(26),
  [85] = {.count = 1, .reusable = false}, SHIFT(20),
  [87] = {.count = 1, .reusable = false}, SHIFT(16),
  [89] = {.count = 1, .reusable = false}, SHIFT(11),
  [91] = {.count = 1, .reusable = false}, SHIFT(22),
  [93] = {.count = 1, .reusable = false}, SHIFT(17),
  [95] = {.count = 1, .reusable = true}, SHIFT(13),
  [97] = {.count = 1, .reusable = true}, SHIFT(9),
  [99] = {.count = 1, .reusable = true}, SHIFT(20),
  [101] = {.count = 1, .reusable = true}, SHIFT(21),
  [103] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
