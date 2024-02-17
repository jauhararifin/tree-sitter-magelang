#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_struct = 3,
  anon_sym_LT = 4,
  anon_sym_COMMA = 5,
  anon_sym_GT = 6,
  anon_sym_LBRACE = 7,
  anon_sym_COLON = 8,
  anon_sym_RBRACE = 9,
  anon_sym_let = 10,
  anon_sym_EQ = 11,
  anon_sym_fn = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  aux_sym_type_identifier_token1 = 15,
  anon_sym_STAR = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_COLON_COLON = 19,
  sym_true = 20,
  sym_false = 21,
  sym_null = 22,
  sym_num_literal = 23,
  sym_char_literal = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_LT_LT = 29,
  anon_sym_GT_GT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_EQ_EQ = 33,
  anon_sym_BANG_EQ = 34,
  anon_sym_AMP = 35,
  anon_sym_CARET = 36,
  anon_sym_PIPE = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_TILDE = 40,
  anon_sym_BANG = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_string_literal_token1 = 43,
  anon_sym_BSLASH = 44,
  aux_sym_string_literal_token2 = 45,
  aux_sym_string_literal_token3 = 46,
  aux_sym_string_literal_token4 = 47,
  aux_sym_string_literal_token5 = 48,
  aux_sym_string_literal_token6 = 49,
  sym_comment = 50,
  sym_source_file = 51,
  sym_item = 52,
  sym_import = 53,
  sym_struct_declaration = 54,
  sym_type_parameter = 55,
  sym_let_declaration = 56,
  sym_func_declaration = 57,
  sym_stmt_block = 58,
  sym_stmt = 59,
  sym_type_expr = 60,
  sym_type_identifier = 61,
  sym_type_fn = 62,
  sym_type_ptr = 63,
  sym_type_array_ptr = 64,
  sym_type_path = 65,
  sym_value_expr = 66,
  sym_bin_expr = 67,
  sym_unary_expr = 68,
  sym_field_identifier = 69,
  sym_identifier = 70,
  sym_string_literal = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_struct_declaration_repeat1 = 73,
  aux_sym_struct_declaration_repeat2 = 74,
  aux_sym_type_parameter_repeat1 = 75,
  aux_sym_func_declaration_repeat1 = 76,
  aux_sym_stmt_block_repeat1 = 77,
  aux_sym_type_path_repeat1 = 78,
  aux_sym_string_literal_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_struct] = "struct",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_type_identifier_token1] = "type_identifier_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_num_literal] = "num_literal",
  [sym_char_literal] = "char_literal",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [aux_sym_string_literal_token3] = "string_literal_token3",
  [aux_sym_string_literal_token4] = "string_literal_token4",
  [aux_sym_string_literal_token5] = "string_literal_token5",
  [aux_sym_string_literal_token6] = "string_literal_token6",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_import] = "import",
  [sym_struct_declaration] = "struct_declaration",
  [sym_type_parameter] = "type_parameter",
  [sym_let_declaration] = "let_declaration",
  [sym_func_declaration] = "func_declaration",
  [sym_stmt_block] = "stmt_block",
  [sym_stmt] = "stmt",
  [sym_type_expr] = "type_expr",
  [sym_type_identifier] = "type_identifier",
  [sym_type_fn] = "type_fn",
  [sym_type_ptr] = "type_ptr",
  [sym_type_array_ptr] = "type_array_ptr",
  [sym_type_path] = "type_path",
  [sym_value_expr] = "value_expr",
  [sym_bin_expr] = "bin_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_field_identifier] = "field_identifier",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_struct_declaration_repeat2] = "struct_declaration_repeat2",
  [aux_sym_type_parameter_repeat1] = "type_parameter_repeat1",
  [aux_sym_func_declaration_repeat1] = "func_declaration_repeat1",
  [aux_sym_stmt_block_repeat1] = "stmt_block_repeat1",
  [aux_sym_type_path_repeat1] = "type_path_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_type_identifier_token1] = aux_sym_type_identifier_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_num_literal] = sym_num_literal,
  [sym_char_literal] = sym_char_literal,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [aux_sym_string_literal_token3] = aux_sym_string_literal_token3,
  [aux_sym_string_literal_token4] = aux_sym_string_literal_token4,
  [aux_sym_string_literal_token5] = aux_sym_string_literal_token5,
  [aux_sym_string_literal_token6] = aux_sym_string_literal_token6,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_import] = sym_import,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_type_parameter] = sym_type_parameter,
  [sym_let_declaration] = sym_let_declaration,
  [sym_func_declaration] = sym_func_declaration,
  [sym_stmt_block] = sym_stmt_block,
  [sym_stmt] = sym_stmt,
  [sym_type_expr] = sym_type_expr,
  [sym_type_identifier] = sym_type_identifier,
  [sym_type_fn] = sym_type_fn,
  [sym_type_ptr] = sym_type_ptr,
  [sym_type_array_ptr] = sym_type_array_ptr,
  [sym_type_path] = sym_type_path,
  [sym_value_expr] = sym_value_expr,
  [sym_bin_expr] = sym_bin_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_field_identifier] = sym_field_identifier,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_struct_declaration_repeat2] = aux_sym_struct_declaration_repeat2,
  [aux_sym_type_parameter_repeat1] = aux_sym_type_parameter_repeat1,
  [aux_sym_func_declaration_repeat1] = aux_sym_func_declaration_repeat1,
  [aux_sym_stmt_block_repeat1] = aux_sym_stmt_block_repeat1,
  [aux_sym_type_path_repeat1] = aux_sym_type_path_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_num_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token6] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_func_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym_type_array_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym_type_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmt_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_parameters = 2,
  field_result = 3,
  field_type_params = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_result] = "result",
  [field_type_params] = "type_params",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 4},
  [6] = {.index = 14, .length = 5},
  [7] = {.index = 19, .length = 5},
  [8] = {.index = 24, .length = 6},
  [9] = {.index = 30, .length = 6},
  [10] = {.index = 36, .length = 7},
  [11] = {.index = 43, .length = 7},
  [12] = {.index = 50, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_type_params, 2},
  [3] =
    {field_name, 1},
    {field_result, 4},
    {field_result, 5},
  [6] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [10] =
    {field_name, 1},
    {field_result, 5},
    {field_result, 6},
    {field_type_params, 2},
  [14] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
  [19] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_type_params, 2},
  [24] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_result, 7},
    {field_result, 8},
  [30] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_type_params, 2},
  [36] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
  [43] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
    {field_type_params, 2},
  [50] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_result, 9},
    {field_result, 10},
    {field_type_params, 2},
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
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
  [73] = 3,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
};

static inline bool aux_sym_type_identifier_token1_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym_type_identifier_token1_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool aux_sym_type_identifier_token1_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(132);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '&') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '^') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(127);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '~') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '&') ADVANCE(125);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '^') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(131);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '~') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_fn);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(92);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(105);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(88);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(93);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(86);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(85);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(89);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_true);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_false);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_null);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != 'U' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_literal_token4);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_literal_token5);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_literal_token6);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_string_literal_token3] = ACTIONS(1),
    [aux_sym_string_literal_token4] = ACTIONS(1),
    [aux_sym_string_literal_token5] = ACTIONS(1),
    [aux_sym_string_literal_token6] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(191),
    [sym_item] = STATE(49),
    [sym_import] = STATE(83),
    [sym_struct_declaration] = STATE(83),
    [sym_let_declaration] = STATE(83),
    [sym_func_declaration] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(15), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [28] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(19), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [84] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [154] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(39), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [222] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [296] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [340] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [386] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [432] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      anon_sym_AMP_AMP,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(53), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(57), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(61), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [564] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [613] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [662] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_CARET,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      anon_sym_AMP_AMP,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(31), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [711] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [748] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [785] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [822] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [859] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [933] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [970] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1007] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1044] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1081] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1118] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1155] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1192] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_value_expr,
    ACTIONS(79), 2,
      sym_num_literal,
      sym_char_literal,
    ACTIONS(77), 3,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(17), 4,
      sym_bin_expr,
      sym_unary_expr,
      sym_identifier,
      sym_string_literal,
  [1229] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(153), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1263] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(121), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_import,
    ACTIONS(102), 1,
      anon_sym_struct,
    ACTIONS(105), 1,
      anon_sym_let,
    ACTIONS(108), 1,
      anon_sym_fn,
    STATE(37), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(83), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [1323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    STATE(60), 1,
      aux_sym_type_path_repeat1,
    STATE(77), 1,
      sym_type_parameter,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1348] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(79), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1379] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(178), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1410] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(138), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(131), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1472] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(148), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1503] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(156), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1534] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(124), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1565] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(162), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1596] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(70), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1627] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(140), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1658] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(83), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [1687] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(74), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(158), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1749] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(137), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1780] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(72), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1811] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(149), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1842] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(157), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1873] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(76), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(139), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1935] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(155), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(145), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [1997] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    STATE(62), 1,
      aux_sym_type_path_repeat1,
    STATE(78), 1,
      sym_type_parameter,
    ACTIONS(119), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2022] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_fn,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_type_identifier,
    STATE(173), 1,
      sym_type_expr,
    STATE(81), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [2053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    STATE(62), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(121), 8,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [2103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(128), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(136), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(140), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 7,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_fn,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_fn,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [2335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_stmt_block,
    STATE(82), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_stmt_block,
    STATE(104), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
  [2446] = 2,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(185), 5,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
      aux_sym_string_literal_token4,
      aux_sym_string_literal_token5,
      aux_sym_string_literal_token6,
  [2457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_stmt_block,
    STATE(82), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [2661] = 5,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      aux_sym_string_literal_token1,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      aux_sym_string_literal_repeat1,
  [2677] = 5,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_string_literal_token1,
    STATE(115), 1,
      aux_sym_string_literal_repeat1,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_type_parameter_repeat1,
    ACTIONS(238), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [2707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_stmt_block,
  [2723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_stmt_block,
  [2739] = 5,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_literal_token1,
    ACTIONS(253), 1,
      anon_sym_BSLASH,
    STATE(115), 1,
      aux_sym_string_literal_repeat1,
  [2755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym_stmt_block,
  [2771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      anon_sym_COLON,
    STATE(94), 1,
      sym_stmt_block,
  [2787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(97), 1,
      sym_stmt_block,
  [2803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_stmt_block,
  [2819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(185), 1,
      sym_identifier,
  [2832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_struct_declaration_repeat2,
  [2845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    STATE(176), 1,
      sym_field_identifier,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_GT,
    STATE(112), 1,
      aux_sym_type_parameter_repeat1,
  [2871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_stmt_block,
  [2884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_field_identifier,
  [2897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_field_identifier,
  [2910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_struct_declaration_repeat2,
  [2923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_identifier,
  [2936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      sym_field_identifier,
  [2949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_type_parameter_repeat1,
  [2962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_stmt_block,
  [2975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_struct_declaration_repeat2,
  [2988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_field_identifier,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_field_identifier,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_func_declaration_repeat1,
  [3027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_GT,
    STATE(141), 1,
      aux_sym_struct_declaration_repeat1,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [3049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_stmt_block,
  [3062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_stmt_block,
  [3075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_stmt_block,
  [3088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_GT,
    STATE(141), 1,
      aux_sym_struct_declaration_repeat1,
  [3101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_field_identifier,
  [3114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_struct_declaration_repeat2,
  [3127] = 2,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(248), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      anon_sym_BSLASH,
  [3136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      aux_sym_struct_declaration_repeat2,
  [3149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_type_parameter,
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_struct_declaration_repeat2,
  [3175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_func_declaration_repeat1,
  [3188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_struct_declaration_repeat2,
  [3201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_GT,
    STATE(136), 1,
      aux_sym_struct_declaration_repeat1,
  [3214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_func_declaration_repeat1,
  [3227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_field_identifier,
  [3240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_type_parameter_repeat1,
  [3253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_func_declaration_repeat1,
  [3266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_func_declaration_repeat1,
  [3279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_GT,
    STATE(123), 1,
      aux_sym_type_parameter_repeat1,
  [3292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_stmt_block,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_type_identifier_token1,
    STATE(176), 1,
      sym_field_identifier,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(169), 1,
      sym_identifier,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym_type_identifier_token1,
    STATE(164), 1,
      sym_type_identifier,
  [3343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_EQ,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string_literal,
  [3363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LT,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym_type_identifier_token1,
    STATE(64), 1,
      sym_type_identifier,
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(163), 1,
      sym_identifier,
  [3393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(146), 1,
      sym_identifier,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(150), 1,
      sym_identifier,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(373), 1,
      anon_sym_EQ,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(184), 1,
      sym_identifier,
  [3441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_type_identifier_token1,
    STATE(170), 1,
      sym_identifier,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
  [3502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_STAR,
  [3509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [3516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COLON,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COLON,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 564,
  [SMALL_STATE(19)] = 613,
  [SMALL_STATE(20)] = 662,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 748,
  [SMALL_STATE(23)] = 785,
  [SMALL_STATE(24)] = 822,
  [SMALL_STATE(25)] = 859,
  [SMALL_STATE(26)] = 896,
  [SMALL_STATE(27)] = 933,
  [SMALL_STATE(28)] = 970,
  [SMALL_STATE(29)] = 1007,
  [SMALL_STATE(30)] = 1044,
  [SMALL_STATE(31)] = 1081,
  [SMALL_STATE(32)] = 1118,
  [SMALL_STATE(33)] = 1155,
  [SMALL_STATE(34)] = 1192,
  [SMALL_STATE(35)] = 1229,
  [SMALL_STATE(36)] = 1263,
  [SMALL_STATE(37)] = 1294,
  [SMALL_STATE(38)] = 1323,
  [SMALL_STATE(39)] = 1348,
  [SMALL_STATE(40)] = 1379,
  [SMALL_STATE(41)] = 1410,
  [SMALL_STATE(42)] = 1441,
  [SMALL_STATE(43)] = 1472,
  [SMALL_STATE(44)] = 1503,
  [SMALL_STATE(45)] = 1534,
  [SMALL_STATE(46)] = 1565,
  [SMALL_STATE(47)] = 1596,
  [SMALL_STATE(48)] = 1627,
  [SMALL_STATE(49)] = 1658,
  [SMALL_STATE(50)] = 1687,
  [SMALL_STATE(51)] = 1718,
  [SMALL_STATE(52)] = 1749,
  [SMALL_STATE(53)] = 1780,
  [SMALL_STATE(54)] = 1811,
  [SMALL_STATE(55)] = 1842,
  [SMALL_STATE(56)] = 1873,
  [SMALL_STATE(57)] = 1904,
  [SMALL_STATE(58)] = 1935,
  [SMALL_STATE(59)] = 1966,
  [SMALL_STATE(60)] = 1997,
  [SMALL_STATE(61)] = 2022,
  [SMALL_STATE(62)] = 2053,
  [SMALL_STATE(63)] = 2073,
  [SMALL_STATE(64)] = 2088,
  [SMALL_STATE(65)] = 2103,
  [SMALL_STATE(66)] = 2119,
  [SMALL_STATE(67)] = 2133,
  [SMALL_STATE(68)] = 2147,
  [SMALL_STATE(69)] = 2163,
  [SMALL_STATE(70)] = 2179,
  [SMALL_STATE(71)] = 2192,
  [SMALL_STATE(72)] = 2205,
  [SMALL_STATE(73)] = 2218,
  [SMALL_STATE(74)] = 2231,
  [SMALL_STATE(75)] = 2244,
  [SMALL_STATE(76)] = 2257,
  [SMALL_STATE(77)] = 2270,
  [SMALL_STATE(78)] = 2283,
  [SMALL_STATE(79)] = 2296,
  [SMALL_STATE(80)] = 2309,
  [SMALL_STATE(81)] = 2322,
  [SMALL_STATE(82)] = 2335,
  [SMALL_STATE(83)] = 2352,
  [SMALL_STATE(84)] = 2363,
  [SMALL_STATE(85)] = 2374,
  [SMALL_STATE(86)] = 2385,
  [SMALL_STATE(87)] = 2396,
  [SMALL_STATE(88)] = 2407,
  [SMALL_STATE(89)] = 2418,
  [SMALL_STATE(90)] = 2429,
  [SMALL_STATE(91)] = 2446,
  [SMALL_STATE(92)] = 2457,
  [SMALL_STATE(93)] = 2468,
  [SMALL_STATE(94)] = 2479,
  [SMALL_STATE(95)] = 2490,
  [SMALL_STATE(96)] = 2501,
  [SMALL_STATE(97)] = 2512,
  [SMALL_STATE(98)] = 2523,
  [SMALL_STATE(99)] = 2534,
  [SMALL_STATE(100)] = 2545,
  [SMALL_STATE(101)] = 2556,
  [SMALL_STATE(102)] = 2567,
  [SMALL_STATE(103)] = 2578,
  [SMALL_STATE(104)] = 2589,
  [SMALL_STATE(105)] = 2606,
  [SMALL_STATE(106)] = 2617,
  [SMALL_STATE(107)] = 2628,
  [SMALL_STATE(108)] = 2639,
  [SMALL_STATE(109)] = 2650,
  [SMALL_STATE(110)] = 2661,
  [SMALL_STATE(111)] = 2677,
  [SMALL_STATE(112)] = 2693,
  [SMALL_STATE(113)] = 2707,
  [SMALL_STATE(114)] = 2723,
  [SMALL_STATE(115)] = 2739,
  [SMALL_STATE(116)] = 2755,
  [SMALL_STATE(117)] = 2771,
  [SMALL_STATE(118)] = 2787,
  [SMALL_STATE(119)] = 2803,
  [SMALL_STATE(120)] = 2819,
  [SMALL_STATE(121)] = 2832,
  [SMALL_STATE(122)] = 2845,
  [SMALL_STATE(123)] = 2858,
  [SMALL_STATE(124)] = 2871,
  [SMALL_STATE(125)] = 2884,
  [SMALL_STATE(126)] = 2897,
  [SMALL_STATE(127)] = 2910,
  [SMALL_STATE(128)] = 2923,
  [SMALL_STATE(129)] = 2936,
  [SMALL_STATE(130)] = 2949,
  [SMALL_STATE(131)] = 2962,
  [SMALL_STATE(132)] = 2975,
  [SMALL_STATE(133)] = 2988,
  [SMALL_STATE(134)] = 3001,
  [SMALL_STATE(135)] = 3014,
  [SMALL_STATE(136)] = 3027,
  [SMALL_STATE(137)] = 3040,
  [SMALL_STATE(138)] = 3049,
  [SMALL_STATE(139)] = 3062,
  [SMALL_STATE(140)] = 3075,
  [SMALL_STATE(141)] = 3088,
  [SMALL_STATE(142)] = 3101,
  [SMALL_STATE(143)] = 3114,
  [SMALL_STATE(144)] = 3127,
  [SMALL_STATE(145)] = 3136,
  [SMALL_STATE(146)] = 3149,
  [SMALL_STATE(147)] = 3162,
  [SMALL_STATE(148)] = 3175,
  [SMALL_STATE(149)] = 3188,
  [SMALL_STATE(150)] = 3201,
  [SMALL_STATE(151)] = 3214,
  [SMALL_STATE(152)] = 3227,
  [SMALL_STATE(153)] = 3240,
  [SMALL_STATE(154)] = 3253,
  [SMALL_STATE(155)] = 3266,
  [SMALL_STATE(156)] = 3279,
  [SMALL_STATE(157)] = 3292,
  [SMALL_STATE(158)] = 3305,
  [SMALL_STATE(159)] = 3313,
  [SMALL_STATE(160)] = 3323,
  [SMALL_STATE(161)] = 3333,
  [SMALL_STATE(162)] = 3343,
  [SMALL_STATE(163)] = 3353,
  [SMALL_STATE(164)] = 3363,
  [SMALL_STATE(165)] = 3373,
  [SMALL_STATE(166)] = 3383,
  [SMALL_STATE(167)] = 3393,
  [SMALL_STATE(168)] = 3403,
  [SMALL_STATE(169)] = 3413,
  [SMALL_STATE(170)] = 3421,
  [SMALL_STATE(171)] = 3431,
  [SMALL_STATE(172)] = 3441,
  [SMALL_STATE(173)] = 3449,
  [SMALL_STATE(174)] = 3457,
  [SMALL_STATE(175)] = 3467,
  [SMALL_STATE(176)] = 3474,
  [SMALL_STATE(177)] = 3481,
  [SMALL_STATE(178)] = 3488,
  [SMALL_STATE(179)] = 3495,
  [SMALL_STATE(180)] = 3502,
  [SMALL_STATE(181)] = 3509,
  [SMALL_STATE(182)] = 3516,
  [SMALL_STATE(183)] = 3523,
  [SMALL_STATE(184)] = 3530,
  [SMALL_STATE(185)] = 3537,
  [SMALL_STATE(186)] = 3544,
  [SMALL_STATE(187)] = 3551,
  [SMALL_STATE(188)] = 3558,
  [SMALL_STATE(189)] = 3565,
  [SMALL_STATE(190)] = 3572,
  [SMALL_STATE(191)] = 3579,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_expr, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_expr, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(165),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_array_ptr, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ptr, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 1),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(90),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 13, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 12, .production_id = 12),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 12, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 5, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 10),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 11, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 10, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 6, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 7, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 9, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 8, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(52),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(115),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(91),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(160),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2), SHIFT_REPEAT(159),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2), SHIFT_REPEAT(171),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [411] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_magelang(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
