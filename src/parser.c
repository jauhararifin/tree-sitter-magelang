#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 459
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_while = 15,
  anon_sym_if = 16,
  anon_sym_else = 17,
  anon_sym_continue = 18,
  anon_sym_break = 19,
  anon_sym_return = 20,
  aux_sym_type_identifier_token1 = 21,
  anon_sym_STAR = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  anon_sym_null = 28,
  aux_sym_num_literal_token1 = 29,
  aux_sym_char_literal_token1 = 30,
  anon_sym_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_LT_LT = 35,
  anon_sym_GT_GT = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_EQ_EQ = 39,
  anon_sym_BANG_EQ = 40,
  anon_sym_AMP = 41,
  anon_sym_CARET = 42,
  anon_sym_PIPE = 43,
  anon_sym_AMP_AMP = 44,
  anon_sym_PIPE_PIPE = 45,
  anon_sym_as = 46,
  anon_sym_TILDE = 47,
  anon_sym_BANG = 48,
  anon_sym_DOT = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_string_literal_token1 = 51,
  anon_sym_BSLASH = 52,
  aux_sym_string_literal_token2 = 53,
  aux_sym_string_literal_token3 = 54,
  aux_sym_string_literal_token4 = 55,
  aux_sym_string_literal_token5 = 56,
  aux_sym_string_literal_token6 = 57,
  sym_comment = 58,
  sym_source_file = 59,
  sym_item = 60,
  sym_import = 61,
  sym_struct_declaration = 62,
  sym_type_parameter = 63,
  sym_let_declaration = 64,
  sym_func_declaration = 65,
  sym_stmt_block = 66,
  sym_stmt_expr = 67,
  sym_stmt_assignment = 68,
  sym_stmt_while = 69,
  sym_stmt_if = 70,
  sym_stmt_continue = 71,
  sym_stmt_break = 72,
  sym_stmt_return = 73,
  sym_stmt = 74,
  sym_type_expr = 75,
  sym_type_identifier = 76,
  sym_type_fn = 77,
  sym_type_ptr = 78,
  sym_type_array_ptr = 79,
  sym_type_path = 80,
  sym_type_arguments = 81,
  sym_value_expr = 82,
  sym_true = 83,
  sym_false = 84,
  sym_null = 85,
  sym_num_literal = 86,
  sym_char_literal = 87,
  sym_bin_expr = 88,
  sym_cast_expr = 89,
  sym_unary_expr = 90,
  sym_value_path = 91,
  sym_call_expr = 92,
  sym_index_expr = 93,
  sym_selection_expr = 94,
  sym_deref_expr = 95,
  sym_struct_literal = 96,
  sym_field_identifier = 97,
  sym_identifier = 98,
  sym_string_literal = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_struct_declaration_repeat1 = 101,
  aux_sym_struct_declaration_repeat2 = 102,
  aux_sym_type_parameter_repeat1 = 103,
  aux_sym_func_declaration_repeat1 = 104,
  aux_sym_stmt_block_repeat1 = 105,
  aux_sym_type_fn_repeat1 = 106,
  aux_sym_type_path_repeat1 = 107,
  aux_sym_call_expr_repeat1 = 108,
  aux_sym_struct_literal_repeat1 = 109,
  aux_sym_string_literal_repeat1 = 110,
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
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_continue] = "continue",
  [anon_sym_break] = "break",
  [anon_sym_return] = "return",
  [aux_sym_type_identifier_token1] = "type_identifier_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [aux_sym_num_literal_token1] = "num_literal_token1",
  [aux_sym_char_literal_token1] = "char_literal_token1",
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
  [anon_sym_as] = "as",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
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
  [sym_stmt_expr] = "stmt_expr",
  [sym_stmt_assignment] = "stmt_assignment",
  [sym_stmt_while] = "stmt_while",
  [sym_stmt_if] = "stmt_if",
  [sym_stmt_continue] = "stmt_continue",
  [sym_stmt_break] = "stmt_break",
  [sym_stmt_return] = "stmt_return",
  [sym_stmt] = "stmt",
  [sym_type_expr] = "type_expr",
  [sym_type_identifier] = "type_identifier",
  [sym_type_fn] = "type_fn",
  [sym_type_ptr] = "type_ptr",
  [sym_type_array_ptr] = "type_array_ptr",
  [sym_type_path] = "type_path",
  [sym_type_arguments] = "type_arguments",
  [sym_value_expr] = "value_expr",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_num_literal] = "num_literal",
  [sym_char_literal] = "char_literal",
  [sym_bin_expr] = "bin_expr",
  [sym_cast_expr] = "cast_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_value_path] = "value_path",
  [sym_call_expr] = "call_expr",
  [sym_index_expr] = "index_expr",
  [sym_selection_expr] = "selection_expr",
  [sym_deref_expr] = "deref_expr",
  [sym_struct_literal] = "struct_literal",
  [sym_field_identifier] = "field_identifier",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_struct_declaration_repeat2] = "struct_declaration_repeat2",
  [aux_sym_type_parameter_repeat1] = "type_parameter_repeat1",
  [aux_sym_func_declaration_repeat1] = "func_declaration_repeat1",
  [aux_sym_stmt_block_repeat1] = "stmt_block_repeat1",
  [aux_sym_type_fn_repeat1] = "type_fn_repeat1",
  [aux_sym_type_path_repeat1] = "type_path_repeat1",
  [aux_sym_call_expr_repeat1] = "call_expr_repeat1",
  [aux_sym_struct_literal_repeat1] = "struct_literal_repeat1",
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
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_return] = anon_sym_return,
  [aux_sym_type_identifier_token1] = aux_sym_type_identifier_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [aux_sym_num_literal_token1] = aux_sym_num_literal_token1,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
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
  [anon_sym_as] = anon_sym_as,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_stmt_expr] = sym_stmt_expr,
  [sym_stmt_assignment] = sym_stmt_assignment,
  [sym_stmt_while] = sym_stmt_while,
  [sym_stmt_if] = sym_stmt_if,
  [sym_stmt_continue] = sym_stmt_continue,
  [sym_stmt_break] = sym_stmt_break,
  [sym_stmt_return] = sym_stmt_return,
  [sym_stmt] = sym_stmt,
  [sym_type_expr] = sym_type_expr,
  [sym_type_identifier] = sym_type_identifier,
  [sym_type_fn] = sym_type_fn,
  [sym_type_ptr] = sym_type_ptr,
  [sym_type_array_ptr] = sym_type_array_ptr,
  [sym_type_path] = sym_type_path,
  [sym_type_arguments] = sym_type_arguments,
  [sym_value_expr] = sym_value_expr,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_num_literal] = sym_num_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_bin_expr] = sym_bin_expr,
  [sym_cast_expr] = sym_cast_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_value_path] = sym_value_path,
  [sym_call_expr] = sym_call_expr,
  [sym_index_expr] = sym_index_expr,
  [sym_selection_expr] = sym_selection_expr,
  [sym_deref_expr] = sym_deref_expr,
  [sym_struct_literal] = sym_struct_literal,
  [sym_field_identifier] = sym_field_identifier,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_struct_declaration_repeat2] = aux_sym_struct_declaration_repeat2,
  [aux_sym_type_parameter_repeat1] = aux_sym_type_parameter_repeat1,
  [aux_sym_func_declaration_repeat1] = aux_sym_func_declaration_repeat1,
  [aux_sym_stmt_block_repeat1] = aux_sym_stmt_block_repeat1,
  [aux_sym_type_fn_repeat1] = aux_sym_type_fn_repeat1,
  [aux_sym_type_path_repeat1] = aux_sym_type_path_repeat1,
  [aux_sym_call_expr_repeat1] = aux_sym_call_expr_repeat1,
  [aux_sym_struct_literal_repeat1] = aux_sym_struct_literal_repeat1,
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
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_num_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_as] = {
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
  [anon_sym_DOT] = {
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
  [sym_stmt_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_while] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_if] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_continue] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_break] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_return] = {
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
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_value_expr] = {
    .visible = true,
    .named = true,
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
  [sym_bin_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_value_path] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_selection_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_deref_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_literal] = {
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
  [aux_sym_type_fn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array = 1,
  field_function = 2,
  field_name = 3,
  field_package = 4,
  field_parameters = 5,
  field_result = 6,
  field_type_params = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_function] = "function",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameters] = "parameters",
  [field_result] = "result",
  [field_type_params] = "type_params",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 5},
  [11] = {.index = 24, .length = 5},
  [12] = {.index = 29, .length = 6},
  [13] = {.index = 35, .length = 6},
  [14] = {.index = 41, .length = 7},
  [15] = {.index = 48, .length = 7},
  [16] = {.index = 55, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_name, 2},
    {field_package, 0},
  [5] =
    {field_name, 1},
    {field_type_params, 2},
  [7] =
    {field_array, 0},
  [8] =
    {field_name, 1},
    {field_result, 4},
    {field_result, 5},
  [11] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [15] =
    {field_name, 1},
    {field_result, 5},
    {field_result, 6},
    {field_type_params, 2},
  [19] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
  [24] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_type_params, 2},
  [29] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_result, 7},
    {field_result, 8},
  [35] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_type_params, 2},
  [41] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
  [48] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
    {field_type_params, 2},
  [55] =
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
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 7,
  [8] = 3,
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
  [65] = 10,
  [66] = 9,
  [67] = 67,
  [68] = 12,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 70,
  [73] = 21,
  [74] = 19,
  [75] = 17,
  [76] = 13,
  [77] = 11,
  [78] = 18,
  [79] = 79,
  [80] = 14,
  [81] = 15,
  [82] = 52,
  [83] = 55,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 34,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 32,
  [98] = 58,
  [99] = 31,
  [100] = 100,
  [101] = 93,
  [102] = 102,
  [103] = 30,
  [104] = 24,
  [105] = 22,
  [106] = 29,
  [107] = 107,
  [108] = 108,
  [109] = 89,
  [110] = 88,
  [111] = 111,
  [112] = 87,
  [113] = 86,
  [114] = 85,
  [115] = 84,
  [116] = 26,
  [117] = 100,
  [118] = 51,
  [119] = 84,
  [120] = 85,
  [121] = 86,
  [122] = 87,
  [123] = 88,
  [124] = 89,
  [125] = 28,
  [126] = 27,
  [127] = 60,
  [128] = 41,
  [129] = 25,
  [130] = 40,
  [131] = 39,
  [132] = 100,
  [133] = 23,
  [134] = 108,
  [135] = 111,
  [136] = 108,
  [137] = 107,
  [138] = 20,
  [139] = 139,
  [140] = 140,
  [141] = 63,
  [142] = 107,
  [143] = 111,
  [144] = 102,
  [145] = 145,
  [146] = 92,
  [147] = 102,
  [148] = 64,
  [149] = 91,
  [150] = 95,
  [151] = 36,
  [152] = 33,
  [153] = 38,
  [154] = 50,
  [155] = 62,
  [156] = 61,
  [157] = 37,
  [158] = 54,
  [159] = 59,
  [160] = 94,
  [161] = 56,
  [162] = 57,
  [163] = 16,
  [164] = 42,
  [165] = 53,
  [166] = 49,
  [167] = 48,
  [168] = 47,
  [169] = 46,
  [170] = 45,
  [171] = 44,
  [172] = 43,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 47,
  [183] = 179,
  [184] = 42,
  [185] = 46,
  [186] = 45,
  [187] = 187,
  [188] = 44,
  [189] = 43,
  [190] = 181,
  [191] = 48,
  [192] = 192,
  [193] = 20,
  [194] = 194,
  [195] = 194,
  [196] = 53,
  [197] = 192,
  [198] = 49,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 199,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 200,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 216,
  [218] = 216,
  [219] = 216,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 222,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 223,
  [234] = 234,
  [235] = 231,
  [236] = 220,
  [237] = 226,
  [238] = 227,
  [239] = 232,
  [240] = 220,
  [241] = 227,
  [242] = 242,
  [243] = 243,
  [244] = 232,
  [245] = 226,
  [246] = 246,
  [247] = 223,
  [248] = 248,
  [249] = 234,
  [250] = 250,
  [251] = 222,
  [252] = 252,
  [253] = 242,
  [254] = 243,
  [255] = 226,
  [256] = 234,
  [257] = 234,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 232,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 222,
  [267] = 10,
  [268] = 12,
  [269] = 9,
  [270] = 19,
  [271] = 17,
  [272] = 62,
  [273] = 13,
  [274] = 30,
  [275] = 38,
  [276] = 18,
  [277] = 29,
  [278] = 31,
  [279] = 54,
  [280] = 27,
  [281] = 21,
  [282] = 28,
  [283] = 50,
  [284] = 15,
  [285] = 9,
  [286] = 10,
  [287] = 287,
  [288] = 288,
  [289] = 212,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 199,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 205,
  [309] = 309,
  [310] = 200,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 318,
  [322] = 322,
  [323] = 323,
  [324] = 323,
  [325] = 314,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 331,
  [333] = 333,
  [334] = 330,
  [335] = 15,
  [336] = 18,
  [337] = 21,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 341,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 330,
  [365] = 365,
  [366] = 331,
  [367] = 367,
  [368] = 353,
  [369] = 343,
  [370] = 370,
  [371] = 349,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 361,
  [376] = 330,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 365,
  [387] = 387,
  [388] = 388,
  [389] = 333,
  [390] = 350,
  [391] = 391,
  [392] = 361,
  [393] = 331,
  [394] = 365,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 16,
  [403] = 403,
  [404] = 22,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 397,
  [411] = 398,
  [412] = 401,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 405,
  [419] = 398,
  [420] = 409,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 424,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 432,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 435,
  [438] = 438,
  [439] = 439,
  [440] = 432,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 431,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 431,
  [450] = 431,
  [451] = 424,
  [452] = 452,
  [453] = 435,
  [454] = 435,
  [455] = 455,
  [456] = 456,
  [457] = 442,
  [458] = 424,
};

static inline bool aux_sym_type_identifier_token1_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'b'
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

static inline bool aux_sym_type_identifier_token1_character_set_4(int32_t c) {
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
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(165);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(165);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 69:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(169);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_let);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fn);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_continue);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_break);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_return);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(142);
      if (aux_sym_type_identifier_token1_character_set_4(lookahead)) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(141);
      if (aux_sym_type_identifier_token1_character_set_4(lookahead)) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'f') ADVANCE(118);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'h') ADVANCE(140);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'i') ADVANCE(150);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'i') ADVANCE(145);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'k') ADVANCE(124);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(156);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(175);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(143);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(132);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(126);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(112);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(159);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(164);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'o') ADVANCE(149);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(135);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(163);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(147);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(201);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(131);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(134);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 't') ADVANCE(108);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 't') ADVANCE(139);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 't') ADVANCE(162);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(144);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(154);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(130);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(133);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_true);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_false);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_null);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(165);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != 'U' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(213);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_literal_token4);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_literal_token5);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_literal_token6);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
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
  [49] = {.lex_state = 2},
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
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 14},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 11},
  [319] = {.lex_state = 3},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 11},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 5},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 11},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 11},
  [350] = {.lex_state = 11},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 11},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 4},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 4},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 11},
  [390] = {.lex_state = 11},
  [391] = {.lex_state = 1},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 4},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 11},
  [399] = {.lex_state = 11},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 4},
  [403] = {.lex_state = 4},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 11},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 11},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 11},
  [417] = {.lex_state = 11},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 11},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 11},
  [423] = {.lex_state = 11},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 3},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 3},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 3},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 3},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 3},
  [443] = {.lex_state = 3},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 3},
  [446] = {.lex_state = 3},
  [447] = {.lex_state = 3},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 3},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 3},
  [458] = {.lex_state = 0},
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
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [aux_sym_char_literal_token1] = ACTIONS(1),
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
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_string_literal_token3] = ACTIONS(1),
    [aux_sym_string_literal_token4] = ACTIONS(1),
    [aux_sym_string_literal_token5] = ACTIONS(1),
    [aux_sym_string_literal_token6] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(428),
    [sym_item] = STATE(259),
    [sym_import] = STATE(287),
    [sym_struct_declaration] = STATE(287),
    [sym_let_declaration] = STATE(287),
    [sym_func_declaration] = STATE(287),
    [aux_sym_source_file_repeat1] = STATE(259),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_while,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_continue,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(7), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [98] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_while,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_continue,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(2), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [196] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_while,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_continue,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(7), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [294] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_while,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_continue,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(4), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [392] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_while,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_continue,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(7), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [490] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_let,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_while,
    ACTIONS(71), 1,
      anon_sym_if,
    ACTIONS(74), 1,
      anon_sym_continue,
    ACTIONS(77), 1,
      anon_sym_break,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(86), 1,
      anon_sym_true,
    ACTIONS(89), 1,
      anon_sym_false,
    ACTIONS(92), 1,
      anon_sym_null,
    ACTIONS(95), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(7), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(101), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [588] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_while,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_continue,
    ACTIONS(29), 1,
      anon_sym_break,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(178), 1,
      sym_value_expr,
    STATE(6), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(206), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [686] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    STATE(10), 1,
      aux_sym_type_path_repeat1,
    STATE(29), 1,
      sym_type_arguments,
    ACTIONS(109), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(111), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    STATE(12), 1,
      aux_sym_type_path_repeat1,
    STATE(27), 1,
      sym_type_arguments,
    ACTIONS(115), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(117), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(121), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    STATE(12), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(125), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(127), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(134), 23,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COLON_COLON,
    ACTIONS(136), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(138), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(142), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(144), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(150), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(154), 22,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(156), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(158), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(127), 22,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(164), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(168), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(170), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(176), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(180), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(184), 22,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(188), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(192), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(196), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(200), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(117), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(204), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(208), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(212), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(216), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(220), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1804] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_CARET,
    ACTIONS(250), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      anon_sym_AMP_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(228), 5,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(230), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(262), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(266), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(270), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(274), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(278), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(282), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2125] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_CARET,
    ACTIONS(250), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      anon_sym_AMP_AMP,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(286), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
    ACTIONS(284), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2196] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_CARET,
    ACTIONS(250), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(286), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
    ACTIONS(284), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2265] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      anon_sym_CARET,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(286), 6,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2332] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(286), 6,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2397] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(286), 7,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2460] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(242), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(286), 7,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2521] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2576] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(286), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(290), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2670] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(286), 10,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(294), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2760] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_as,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(238), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(240), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(284), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(298), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(302), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(306), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(310), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(312), 11,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
    ACTIONS(314), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(318), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(322), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(326), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(144), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(164), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 12,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_as,
      anon_sym_BANG,
      anon_sym_DOT,
    ACTIONS(330), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
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
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [3274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON_COLON,
    STATE(68), 1,
      aux_sym_type_path_repeat1,
    STATE(126), 1,
      sym_type_arguments,
    ACTIONS(115), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(117), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [3320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON_COLON,
    STATE(65), 1,
      aux_sym_type_path_repeat1,
    STATE(106), 1,
      sym_type_arguments,
    ACTIONS(109), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [3366] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(35), 1,
      sym_value_expr,
    STATE(69), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [3431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON_COLON,
    STATE(68), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(125), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(127), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [3474] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(365), 1,
      anon_sym_true,
    ACTIONS(368), 1,
      anon_sym_false,
    ACTIONS(371), 1,
      anon_sym_null,
    ACTIONS(374), 1,
      aux_sym_num_literal_token1,
    ACTIONS(377), 1,
      aux_sym_char_literal_token1,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(35), 1,
      sym_value_expr,
    STATE(69), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(380), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [3539] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(35), 1,
      sym_value_expr,
    STATE(71), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [3604] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(35), 1,
      sym_value_expr,
    STATE(69), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [3669] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(35), 1,
      sym_value_expr,
    STATE(67), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [3734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COLON,
    ACTIONS(168), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(170), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [3774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(127), 24,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
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
      anon_sym_as,
      anon_sym_DOT,
  [3812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(154), 24,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
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
      anon_sym_as,
      anon_sym_DOT,
  [3850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(134), 24,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
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
      anon_sym_as,
      anon_sym_DOT,
  [3888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(121), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [3928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COLON,
    ACTIONS(156), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(158), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [3968] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(187), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COLON_COLON,
    ACTIONS(136), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(138), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [4070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(142), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(144), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [4110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(294), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [4147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(302), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [4184] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(168), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4243] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(169), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4302] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(170), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4361] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(171), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4420] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(172), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4479] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(164), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(220), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [4575] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(173), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4634] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(197), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4693] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(195), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4752] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(183), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4811] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(190), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4870] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(175), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [4929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(212), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [4966] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(312), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(314), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
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
      anon_sym_as,
  [5009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(208), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [5046] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(167), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5105] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(194), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5164] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(58), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(204), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [5260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(184), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [5297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(176), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [5334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(117), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [5371] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(53), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5430] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(51), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5489] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(184), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5548] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(189), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5607] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(49), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5666] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(188), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5725] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(186), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5784] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(185), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5843] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(182), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(192), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [5939] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(48), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [5998] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(286), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
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
  [6043] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(47), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6102] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(46), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6161] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(45), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6220] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(44), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6279] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(43), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6338] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(340), 1,
      anon_sym_true,
    ACTIONS(342), 1,
      anon_sym_false,
    ACTIONS(344), 1,
      anon_sym_null,
    ACTIONS(346), 1,
      aux_sym_num_literal_token1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_path,
    STATE(42), 1,
      sym_value_expr,
    ACTIONS(350), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(63), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(200), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(196), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(322), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(282), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(188), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(278), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(274), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6656] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(191), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(180), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [6752] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(118), 1,
      sym_value_expr,
    STATE(138), 1,
      sym_value_path,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6811] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(193), 1,
      sym_value_path,
    STATE(198), 1,
      sym_value_expr,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6870] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(118), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6929] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(193), 1,
      sym_value_path,
    STATE(196), 1,
      sym_value_expr,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [6988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(164), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7027] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(176), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7086] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(177), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(164), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7182] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(165), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7241] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(166), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7300] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(98), 1,
      sym_value_expr,
    STATE(138), 1,
      sym_value_path,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7359] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7418] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(192), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7477] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(98), 1,
      sym_value_expr,
    STATE(193), 1,
      sym_value_path,
    ACTIONS(410), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(330), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7573] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(174), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7632] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(181), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [7691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(216), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(270), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(290), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(144), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(326), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(266), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(298), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [7987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(318), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [8024] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(35), 1,
      anon_sym_true,
    ACTIONS(37), 1,
      anon_sym_false,
    ACTIONS(39), 1,
      anon_sym_null,
    ACTIONS(41), 1,
      aux_sym_num_literal_token1,
    ACTIONS(43), 1,
      aux_sym_char_literal_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_identifier,
    STATE(138), 1,
      sym_value_path,
    STATE(179), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(141), 14,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_call_expr,
      sym_index_expr,
      sym_selection_expr,
      sym_deref_expr,
      sym_struct_literal,
      sym_string_literal,
  [8083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(306), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [8120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(310), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [8157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(150), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [8194] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [8260] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8312] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(286), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
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
  [8360] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8410] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(286), 3,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8466] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(286), 3,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8524] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(286), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8584] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(286), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8646] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8710] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    STATE(369), 1,
      aux_sym_struct_literal_repeat1,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8777] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      aux_sym_struct_literal_repeat1,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8844] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8906] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(466), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    STATE(204), 1,
      sym_stmt_block,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8970] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(466), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(472), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_stmt_block,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9034] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      anon_sym_EQ,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9098] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9159] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9220] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9281] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(286), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(284), 6,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9332] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9393] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(466), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      anon_sym_AMP_AMP,
    ACTIONS(284), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9452] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(286), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 4,
      anon_sym_LBRACE,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9505] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 4,
      anon_sym_LBRACE,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9560] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9621] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(466), 1,
      anon_sym_CARET,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 3,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9678] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(466), 1,
      anon_sym_CARET,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    ACTIONS(450), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(460), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(284), 3,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9735] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9796] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 10,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9841] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(164), 18,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
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
      anon_sym_as,
      anon_sym_DOT,
  [9933] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9994] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10055] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(456), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(458), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 8,
      anon_sym_LBRACE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10102] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(420), 1,
      anon_sym_SLASH,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(432), 1,
      anon_sym_CARET,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_AMP_AMP,
    ACTIONS(442), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(426), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(428), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(452), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 12,
      anon_sym_LBRACE,
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
  [10206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(502), 11,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(506), 11,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_else,
    ACTIONS(508), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(510), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(516), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(520), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(524), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(528), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(532), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(502), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(536), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(540), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(544), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(506), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(548), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(552), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(556), 10,
      anon_sym_let,
      anon_sym_while,
      anon_sym_if,
      anon_sym_continue,
      anon_sym_break,
      anon_sym_return,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [10659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 4,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    ACTIONS(360), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(393), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10714] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_type_identifier,
    STATE(332), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10748] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_type_identifier,
    STATE(366), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10782] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_type_identifier,
    STATE(331), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10816] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(285), 1,
      sym_type_identifier,
    STATE(386), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10847] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(373), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10878] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(274), 1,
      sym_type_expr,
    STATE(285), 1,
      sym_type_identifier,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10909] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(275), 1,
      sym_type_expr,
    STATE(285), 1,
      sym_type_identifier,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10940] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(275), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [10971] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(396), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11002] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(283), 1,
      sym_type_expr,
    STATE(285), 1,
      sym_type_identifier,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11033] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(433), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11064] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(367), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11095] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(274), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11126] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(374), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11157] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(285), 1,
      sym_type_identifier,
    STATE(356), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(272), 1,
      sym_type_expr,
    STATE(285), 1,
      sym_type_identifier,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11219] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_fn,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type_identifier,
    STATE(153), 1,
      sym_type_expr,
    STATE(99), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11250] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(279), 1,
      sym_type_expr,
    STATE(285), 1,
      sym_type_identifier,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(356), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11312] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(285), 1,
      sym_type_identifier,
    STATE(365), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11343] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_fn,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type_identifier,
    STATE(154), 1,
      sym_type_expr,
    STATE(99), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11374] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(432), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11405] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_fn,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type_identifier,
    STATE(155), 1,
      sym_type_expr,
    STATE(99), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11436] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(578), 1,
      anon_sym_fn,
    ACTIONS(580), 1,
      anon_sym_STAR,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
    STATE(285), 1,
      sym_type_identifier,
    STATE(394), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11467] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(440), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11498] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(412), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11529] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_fn,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type_identifier,
    STATE(128), 1,
      sym_type_expr,
    STATE(99), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11560] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(272), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11591] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_fn,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(600), 1,
      anon_sym_STAR,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(50), 1,
      sym_type_expr,
    STATE(31), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11622] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(372), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11653] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_fn,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(600), 1,
      anon_sym_STAR,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(38), 1,
      sym_type_expr,
    STATE(31), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11684] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(388), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11715] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_fn,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type_identifier,
    STATE(158), 1,
      sym_type_expr,
    STATE(99), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11746] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(385), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11777] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_fn,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(600), 1,
      anon_sym_STAR,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(30), 1,
      sym_type_expr,
    STATE(31), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11808] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(345), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11839] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(401), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11870] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_fn,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(600), 1,
      anon_sym_STAR,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(41), 1,
      sym_type_expr,
    STATE(31), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11901] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(283), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11932] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_fn,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(600), 1,
      anon_sym_STAR,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(54), 1,
      sym_type_expr,
    STATE(31), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11963] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(279), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11994] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(387), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12025] = 8,
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
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    STATE(262), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(287), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [12054] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(408), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12085] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_fn,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(600), 1,
      anon_sym_STAR,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(62), 1,
      sym_type_expr,
    STATE(31), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12116] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      anon_sym_import,
    ACTIONS(611), 1,
      anon_sym_struct,
    ACTIONS(614), 1,
      anon_sym_let,
    ACTIONS(617), 1,
      anon_sym_fn,
    STATE(262), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(287), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [12145] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(348), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(339), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12207] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_fn,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(568), 1,
      anon_sym_STAR,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
    STATE(269), 1,
      sym_type_identifier,
    STATE(382), 1,
      sym_type_expr,
    STATE(278), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12238] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_fn,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type_identifier,
    STATE(103), 1,
      sym_type_expr,
    STATE(99), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12269] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LT,
    ACTIONS(622), 1,
      anon_sym_COLON_COLON,
    STATE(268), 1,
      aux_sym_type_path_repeat1,
    STATE(280), 1,
      sym_type_arguments,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COLON_COLON,
    STATE(268), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(127), 8,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LT,
    ACTIONS(622), 1,
      anon_sym_COLON_COLON,
    STATE(267), 1,
      aux_sym_type_path_repeat1,
    STATE(277), 1,
      sym_type_arguments,
    ACTIONS(111), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [12352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [12367] = 2,
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
  [12380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 7,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [12393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COLON,
    ACTIONS(158), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(170), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(144), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COLON_COLON,
    ACTIONS(633), 1,
      anon_sym_LT,
    STATE(277), 1,
      sym_type_arguments,
    STATE(286), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COLON_COLON,
    ACTIONS(633), 1,
      anon_sym_LT,
    STATE(268), 1,
      aux_sym_type_path_repeat1,
    STATE(280), 1,
      sym_type_arguments,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12637] = 2,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(643), 5,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
      aux_sym_string_literal_token4,
      aux_sym_string_literal_token5,
      aux_sym_string_literal_token6,
  [12648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [12879] = 5,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    ACTIONS(685), 1,
      aux_sym_string_literal_token1,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    STATE(315), 1,
      aux_sym_string_literal_repeat1,
  [12895] = 5,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      aux_sym_string_literal_token1,
    ACTIONS(694), 1,
      anon_sym_BSLASH,
    STATE(315), 1,
      aux_sym_string_literal_repeat1,
  [12911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      anon_sym_if,
    STATE(213), 2,
      sym_stmt_block,
      sym_stmt_if,
  [12925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(703), 1,
      anon_sym_COLON,
    STATE(303), 1,
      sym_stmt_block,
  [12941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LT,
    ACTIONS(705), 1,
      aux_sym_type_identifier_token1,
    STATE(80), 1,
      sym_identifier,
    STATE(133), 1,
      sym_type_arguments,
  [12957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(709), 1,
      anon_sym_COLON,
    STATE(305), 1,
      sym_stmt_block,
  [12973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      anon_sym_COLON,
    STATE(301), 1,
      sym_stmt_block,
  [12989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LT,
    ACTIONS(717), 1,
      aux_sym_type_identifier_token1,
    STATE(14), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type_arguments,
  [13005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    ACTIONS(721), 1,
      anon_sym_COLON,
    STATE(306), 1,
      sym_stmt_block,
  [13021] = 5,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(325), 1,
      aux_sym_string_literal_repeat1,
  [13037] = 5,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      aux_sym_string_literal_token1,
    STATE(314), 1,
      aux_sym_string_literal_repeat1,
  [13053] = 5,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(685), 1,
      aux_sym_string_literal_token1,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      aux_sym_string_literal_repeat1,
  [13069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    ACTIONS(735), 1,
      anon_sym_COLON,
    STATE(313), 1,
      sym_stmt_block,
  [13085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    ACTIONS(739), 1,
      anon_sym_COLON,
    STATE(307), 1,
      sym_stmt_block,
  [13101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    STATE(438), 1,
      sym_field_identifier,
  [13114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    STATE(438), 1,
      sym_field_identifier,
  [13127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_type_fn_repeat1,
  [13140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_type_fn_repeat1,
  [13153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_type_fn_repeat1,
  [13166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(755), 1,
      anon_sym_STAR,
    STATE(130), 1,
      sym_identifier,
  [13179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_type_fn_repeat1,
  [13192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COLON,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COLON,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(452), 1,
      sym_identifier,
  [13238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(769), 1,
      anon_sym_SEMI,
    STATE(304), 1,
      sym_stmt_block,
  [13251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(438), 1,
      sym_field_identifier,
  [13264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_GT,
    STATE(341), 1,
      aux_sym_type_fn_repeat1,
  [13277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      sym_field_identifier,
  [13290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_struct_literal_repeat1,
  [13303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_GT,
    STATE(362), 1,
      aux_sym_struct_declaration_repeat1,
  [13316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_func_declaration_repeat1,
  [13329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(438), 1,
      sym_field_identifier,
  [13342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_struct_declaration_repeat2,
  [13355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_struct_declaration_repeat2,
  [13368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      sym_identifier,
  [13381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(457), 1,
      sym_identifier,
  [13394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_type_parameter_repeat1,
  [13407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      sym_identifier,
  [13420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      sym_identifier,
  [13433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_struct_literal_repeat1,
  [13446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_struct_declaration_repeat2,
  [13459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [13468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(447), 1,
      sym_field_identifier,
  [13481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_struct_declaration_repeat2,
  [13494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_GT,
    STATE(379), 1,
      aux_sym_type_parameter_repeat1,
  [13507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_type_fn_repeat1,
  [13520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_GT,
    STATE(341), 1,
      aux_sym_type_fn_repeat1,
  [13533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_GT,
    STATE(381), 1,
      aux_sym_struct_declaration_repeat1,
  [13546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LT,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_type_parameter,
  [13559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_type_fn_repeat1,
  [13572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_GT,
    STATE(361), 1,
      aux_sym_type_fn_repeat1,
  [13585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_type_fn_repeat1,
  [13598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    STATE(300), 1,
      sym_stmt_block,
  [13611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      sym_identifier,
  [13624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_struct_literal_repeat1,
  [13637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_func_declaration_repeat1,
  [13650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      sym_identifier,
  [13663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_func_declaration_repeat1,
  [13676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    STATE(309), 1,
      sym_stmt_block,
  [13689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      sym_stmt_block,
  [13702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_GT,
    STATE(341), 1,
      aux_sym_type_fn_repeat1,
  [13715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_type_fn_repeat1,
  [13728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    STATE(438), 1,
      sym_field_identifier,
  [13741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_func_declaration_repeat1,
  [13754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_GT,
    STATE(379), 1,
      aux_sym_type_parameter_repeat1,
  [13767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(425), 1,
      sym_field_identifier,
  [13780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_GT,
    STATE(381), 1,
      aux_sym_struct_declaration_repeat1,
  [13793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_struct_declaration_repeat2,
  [13806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_struct_declaration_repeat2,
  [13819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_func_declaration_repeat1,
  [13832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_struct_declaration_repeat2,
  [13845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_GT,
    STATE(392), 1,
      aux_sym_type_fn_repeat1,
  [13858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(890), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      sym_stmt_block,
  [13871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    STATE(297), 1,
      sym_stmt_block,
  [13884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(894), 1,
      anon_sym_STAR,
    STATE(40), 1,
      sym_identifier,
  [13897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    STATE(442), 1,
      sym_identifier,
  [13910] = 2,
    ACTIONS(645), 1,
      sym_comment,
    ACTIONS(689), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      anon_sym_BSLASH,
  [13919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_GT,
    STATE(341), 1,
      aux_sym_type_fn_repeat1,
  [13932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      aux_sym_type_fn_repeat1,
  [13945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_GT,
    STATE(375), 1,
      aux_sym_type_fn_repeat1,
  [13958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(344), 1,
      sym_identifier,
  [13968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LT,
    STATE(104), 1,
      sym_type_arguments,
  [13986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_type_identifier_token1,
    STATE(270), 1,
      sym_type_identifier,
  [13996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(403), 1,
      sym_identifier,
  [14006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(908), 1,
      anon_sym_EQ,
  [14024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(409), 1,
      sym_identifier,
  [14058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(414), 1,
      sym_identifier,
  [14068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(363), 1,
      sym_identifier,
  [14078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(914), 1,
      anon_sym_EQ,
  [14096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LT,
    STATE(24), 1,
      sym_type_arguments,
  [14106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      aux_sym_type_identifier_token1,
    STATE(19), 1,
      sym_type_identifier,
  [14116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(918), 1,
      anon_sym_EQ,
  [14126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_type_identifier_token1,
    STATE(351), 1,
      sym_type_identifier,
  [14136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_string_literal,
  [14146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_LT,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
  [14156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_type_identifier_token1,
    STATE(438), 1,
      sym_field_identifier,
  [14166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_type_identifier_token1,
    STATE(400), 1,
      sym_type_identifier,
  [14176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(420), 1,
      sym_identifier,
  [14186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_type_identifier_token1,
    STATE(74), 1,
      sym_type_identifier,
  [14196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(928), 1,
      anon_sym_EQ,
  [14206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_type_identifier_token1,
    STATE(415), 1,
      sym_type_identifier,
  [14216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(430), 1,
      sym_identifier,
  [14226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_type_identifier_token1,
    STATE(436), 1,
      sym_identifier,
  [14236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
  [14243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COLON,
  [14250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_SEMI,
  [14257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
  [14264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      ts_builtin_sym_end,
  [14271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN,
  [14278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COLON,
  [14285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RBRACK,
  [14292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
  [14299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
  [14306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
  [14313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_STAR,
  [14320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COLON,
  [14327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_STAR,
  [14334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_COLON,
  [14341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SEMI,
  [14348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
  [14355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_LBRACE,
  [14362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_COLON,
  [14369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COLON,
  [14376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
  [14383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_COLON,
  [14390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_COLON,
  [14397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_COLON,
  [14404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_SEMI,
  [14411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
  [14418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
  [14425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_LPAREN,
  [14432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_COLON,
  [14439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_STAR,
  [14446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_STAR,
  [14453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
  [14460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
  [14467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_COLON,
  [14474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 588,
  [SMALL_STATE(9)] = 686,
  [SMALL_STATE(10)] = 736,
  [SMALL_STATE(11)] = 786,
  [SMALL_STATE(12)] = 831,
  [SMALL_STATE(13)] = 878,
  [SMALL_STATE(14)] = 921,
  [SMALL_STATE(15)] = 966,
  [SMALL_STATE(16)] = 1010,
  [SMALL_STATE(17)] = 1052,
  [SMALL_STATE(18)] = 1094,
  [SMALL_STATE(19)] = 1138,
  [SMALL_STATE(20)] = 1180,
  [SMALL_STATE(21)] = 1224,
  [SMALL_STATE(22)] = 1268,
  [SMALL_STATE(23)] = 1310,
  [SMALL_STATE(24)] = 1352,
  [SMALL_STATE(25)] = 1394,
  [SMALL_STATE(26)] = 1435,
  [SMALL_STATE(27)] = 1476,
  [SMALL_STATE(28)] = 1517,
  [SMALL_STATE(29)] = 1558,
  [SMALL_STATE(30)] = 1599,
  [SMALL_STATE(31)] = 1640,
  [SMALL_STATE(32)] = 1681,
  [SMALL_STATE(33)] = 1722,
  [SMALL_STATE(34)] = 1763,
  [SMALL_STATE(35)] = 1804,
  [SMALL_STATE(36)] = 1879,
  [SMALL_STATE(37)] = 1920,
  [SMALL_STATE(38)] = 1961,
  [SMALL_STATE(39)] = 2002,
  [SMALL_STATE(40)] = 2043,
  [SMALL_STATE(41)] = 2084,
  [SMALL_STATE(42)] = 2125,
  [SMALL_STATE(43)] = 2196,
  [SMALL_STATE(44)] = 2265,
  [SMALL_STATE(45)] = 2332,
  [SMALL_STATE(46)] = 2397,
  [SMALL_STATE(47)] = 2460,
  [SMALL_STATE(48)] = 2521,
  [SMALL_STATE(49)] = 2576,
  [SMALL_STATE(50)] = 2629,
  [SMALL_STATE(51)] = 2670,
  [SMALL_STATE(52)] = 2719,
  [SMALL_STATE(53)] = 2760,
  [SMALL_STATE(54)] = 2817,
  [SMALL_STATE(55)] = 2858,
  [SMALL_STATE(56)] = 2899,
  [SMALL_STATE(57)] = 2940,
  [SMALL_STATE(58)] = 2981,
  [SMALL_STATE(59)] = 3028,
  [SMALL_STATE(60)] = 3069,
  [SMALL_STATE(61)] = 3110,
  [SMALL_STATE(62)] = 3151,
  [SMALL_STATE(63)] = 3192,
  [SMALL_STATE(64)] = 3233,
  [SMALL_STATE(65)] = 3274,
  [SMALL_STATE(66)] = 3320,
  [SMALL_STATE(67)] = 3366,
  [SMALL_STATE(68)] = 3431,
  [SMALL_STATE(69)] = 3474,
  [SMALL_STATE(70)] = 3539,
  [SMALL_STATE(71)] = 3604,
  [SMALL_STATE(72)] = 3669,
  [SMALL_STATE(73)] = 3734,
  [SMALL_STATE(74)] = 3774,
  [SMALL_STATE(75)] = 3812,
  [SMALL_STATE(76)] = 3850,
  [SMALL_STATE(77)] = 3888,
  [SMALL_STATE(78)] = 3928,
  [SMALL_STATE(79)] = 3968,
  [SMALL_STATE(80)] = 4030,
  [SMALL_STATE(81)] = 4070,
  [SMALL_STATE(82)] = 4110,
  [SMALL_STATE(83)] = 4147,
  [SMALL_STATE(84)] = 4184,
  [SMALL_STATE(85)] = 4243,
  [SMALL_STATE(86)] = 4302,
  [SMALL_STATE(87)] = 4361,
  [SMALL_STATE(88)] = 4420,
  [SMALL_STATE(89)] = 4479,
  [SMALL_STATE(90)] = 4538,
  [SMALL_STATE(91)] = 4575,
  [SMALL_STATE(92)] = 4634,
  [SMALL_STATE(93)] = 4693,
  [SMALL_STATE(94)] = 4752,
  [SMALL_STATE(95)] = 4811,
  [SMALL_STATE(96)] = 4870,
  [SMALL_STATE(97)] = 4929,
  [SMALL_STATE(98)] = 4966,
  [SMALL_STATE(99)] = 5009,
  [SMALL_STATE(100)] = 5046,
  [SMALL_STATE(101)] = 5105,
  [SMALL_STATE(102)] = 5164,
  [SMALL_STATE(103)] = 5223,
  [SMALL_STATE(104)] = 5260,
  [SMALL_STATE(105)] = 5297,
  [SMALL_STATE(106)] = 5334,
  [SMALL_STATE(107)] = 5371,
  [SMALL_STATE(108)] = 5430,
  [SMALL_STATE(109)] = 5489,
  [SMALL_STATE(110)] = 5548,
  [SMALL_STATE(111)] = 5607,
  [SMALL_STATE(112)] = 5666,
  [SMALL_STATE(113)] = 5725,
  [SMALL_STATE(114)] = 5784,
  [SMALL_STATE(115)] = 5843,
  [SMALL_STATE(116)] = 5902,
  [SMALL_STATE(117)] = 5939,
  [SMALL_STATE(118)] = 5998,
  [SMALL_STATE(119)] = 6043,
  [SMALL_STATE(120)] = 6102,
  [SMALL_STATE(121)] = 6161,
  [SMALL_STATE(122)] = 6220,
  [SMALL_STATE(123)] = 6279,
  [SMALL_STATE(124)] = 6338,
  [SMALL_STATE(125)] = 6397,
  [SMALL_STATE(126)] = 6434,
  [SMALL_STATE(127)] = 6471,
  [SMALL_STATE(128)] = 6508,
  [SMALL_STATE(129)] = 6545,
  [SMALL_STATE(130)] = 6582,
  [SMALL_STATE(131)] = 6619,
  [SMALL_STATE(132)] = 6656,
  [SMALL_STATE(133)] = 6715,
  [SMALL_STATE(134)] = 6752,
  [SMALL_STATE(135)] = 6811,
  [SMALL_STATE(136)] = 6870,
  [SMALL_STATE(137)] = 6929,
  [SMALL_STATE(138)] = 6988,
  [SMALL_STATE(139)] = 7027,
  [SMALL_STATE(140)] = 7086,
  [SMALL_STATE(141)] = 7145,
  [SMALL_STATE(142)] = 7182,
  [SMALL_STATE(143)] = 7241,
  [SMALL_STATE(144)] = 7300,
  [SMALL_STATE(145)] = 7359,
  [SMALL_STATE(146)] = 7418,
  [SMALL_STATE(147)] = 7477,
  [SMALL_STATE(148)] = 7536,
  [SMALL_STATE(149)] = 7573,
  [SMALL_STATE(150)] = 7632,
  [SMALL_STATE(151)] = 7691,
  [SMALL_STATE(152)] = 7728,
  [SMALL_STATE(153)] = 7765,
  [SMALL_STATE(154)] = 7802,
  [SMALL_STATE(155)] = 7839,
  [SMALL_STATE(156)] = 7876,
  [SMALL_STATE(157)] = 7913,
  [SMALL_STATE(158)] = 7950,
  [SMALL_STATE(159)] = 7987,
  [SMALL_STATE(160)] = 8024,
  [SMALL_STATE(161)] = 8083,
  [SMALL_STATE(162)] = 8120,
  [SMALL_STATE(163)] = 8157,
  [SMALL_STATE(164)] = 8194,
  [SMALL_STATE(165)] = 8260,
  [SMALL_STATE(166)] = 8312,
  [SMALL_STATE(167)] = 8360,
  [SMALL_STATE(168)] = 8410,
  [SMALL_STATE(169)] = 8466,
  [SMALL_STATE(170)] = 8524,
  [SMALL_STATE(171)] = 8584,
  [SMALL_STATE(172)] = 8646,
  [SMALL_STATE(173)] = 8710,
  [SMALL_STATE(174)] = 8777,
  [SMALL_STATE(175)] = 8844,
  [SMALL_STATE(176)] = 8906,
  [SMALL_STATE(177)] = 8970,
  [SMALL_STATE(178)] = 9034,
  [SMALL_STATE(179)] = 9098,
  [SMALL_STATE(180)] = 9159,
  [SMALL_STATE(181)] = 9220,
  [SMALL_STATE(182)] = 9281,
  [SMALL_STATE(183)] = 9332,
  [SMALL_STATE(184)] = 9393,
  [SMALL_STATE(185)] = 9452,
  [SMALL_STATE(186)] = 9505,
  [SMALL_STATE(187)] = 9560,
  [SMALL_STATE(188)] = 9621,
  [SMALL_STATE(189)] = 9678,
  [SMALL_STATE(190)] = 9735,
  [SMALL_STATE(191)] = 9796,
  [SMALL_STATE(192)] = 9841,
  [SMALL_STATE(193)] = 9902,
  [SMALL_STATE(194)] = 9933,
  [SMALL_STATE(195)] = 9994,
  [SMALL_STATE(196)] = 10055,
  [SMALL_STATE(197)] = 10102,
  [SMALL_STATE(198)] = 10163,
  [SMALL_STATE(199)] = 10206,
  [SMALL_STATE(200)] = 10235,
  [SMALL_STATE(201)] = 10264,
  [SMALL_STATE(202)] = 10295,
  [SMALL_STATE(203)] = 10323,
  [SMALL_STATE(204)] = 10351,
  [SMALL_STATE(205)] = 10379,
  [SMALL_STATE(206)] = 10407,
  [SMALL_STATE(207)] = 10435,
  [SMALL_STATE(208)] = 10463,
  [SMALL_STATE(209)] = 10491,
  [SMALL_STATE(210)] = 10519,
  [SMALL_STATE(211)] = 10547,
  [SMALL_STATE(212)] = 10575,
  [SMALL_STATE(213)] = 10603,
  [SMALL_STATE(214)] = 10631,
  [SMALL_STATE(215)] = 10659,
  [SMALL_STATE(216)] = 10680,
  [SMALL_STATE(217)] = 10714,
  [SMALL_STATE(218)] = 10748,
  [SMALL_STATE(219)] = 10782,
  [SMALL_STATE(220)] = 10816,
  [SMALL_STATE(221)] = 10847,
  [SMALL_STATE(222)] = 10878,
  [SMALL_STATE(223)] = 10909,
  [SMALL_STATE(224)] = 10940,
  [SMALL_STATE(225)] = 10971,
  [SMALL_STATE(226)] = 11002,
  [SMALL_STATE(227)] = 11033,
  [SMALL_STATE(228)] = 11064,
  [SMALL_STATE(229)] = 11095,
  [SMALL_STATE(230)] = 11126,
  [SMALL_STATE(231)] = 11157,
  [SMALL_STATE(232)] = 11188,
  [SMALL_STATE(233)] = 11219,
  [SMALL_STATE(234)] = 11250,
  [SMALL_STATE(235)] = 11281,
  [SMALL_STATE(236)] = 11312,
  [SMALL_STATE(237)] = 11343,
  [SMALL_STATE(238)] = 11374,
  [SMALL_STATE(239)] = 11405,
  [SMALL_STATE(240)] = 11436,
  [SMALL_STATE(241)] = 11467,
  [SMALL_STATE(242)] = 11498,
  [SMALL_STATE(243)] = 11529,
  [SMALL_STATE(244)] = 11560,
  [SMALL_STATE(245)] = 11591,
  [SMALL_STATE(246)] = 11622,
  [SMALL_STATE(247)] = 11653,
  [SMALL_STATE(248)] = 11684,
  [SMALL_STATE(249)] = 11715,
  [SMALL_STATE(250)] = 11746,
  [SMALL_STATE(251)] = 11777,
  [SMALL_STATE(252)] = 11808,
  [SMALL_STATE(253)] = 11839,
  [SMALL_STATE(254)] = 11870,
  [SMALL_STATE(255)] = 11901,
  [SMALL_STATE(256)] = 11932,
  [SMALL_STATE(257)] = 11963,
  [SMALL_STATE(258)] = 11994,
  [SMALL_STATE(259)] = 12025,
  [SMALL_STATE(260)] = 12054,
  [SMALL_STATE(261)] = 12085,
  [SMALL_STATE(262)] = 12116,
  [SMALL_STATE(263)] = 12145,
  [SMALL_STATE(264)] = 12176,
  [SMALL_STATE(265)] = 12207,
  [SMALL_STATE(266)] = 12238,
  [SMALL_STATE(267)] = 12269,
  [SMALL_STATE(268)] = 12293,
  [SMALL_STATE(269)] = 12313,
  [SMALL_STATE(270)] = 12337,
  [SMALL_STATE(271)] = 12352,
  [SMALL_STATE(272)] = 12367,
  [SMALL_STATE(273)] = 12380,
  [SMALL_STATE(274)] = 12393,
  [SMALL_STATE(275)] = 12406,
  [SMALL_STATE(276)] = 12419,
  [SMALL_STATE(277)] = 12434,
  [SMALL_STATE(278)] = 12447,
  [SMALL_STATE(279)] = 12460,
  [SMALL_STATE(280)] = 12473,
  [SMALL_STATE(281)] = 12486,
  [SMALL_STATE(282)] = 12501,
  [SMALL_STATE(283)] = 12514,
  [SMALL_STATE(284)] = 12527,
  [SMALL_STATE(285)] = 12542,
  [SMALL_STATE(286)] = 12562,
  [SMALL_STATE(287)] = 12582,
  [SMALL_STATE(288)] = 12593,
  [SMALL_STATE(289)] = 12604,
  [SMALL_STATE(290)] = 12615,
  [SMALL_STATE(291)] = 12626,
  [SMALL_STATE(292)] = 12637,
  [SMALL_STATE(293)] = 12648,
  [SMALL_STATE(294)] = 12659,
  [SMALL_STATE(295)] = 12670,
  [SMALL_STATE(296)] = 12681,
  [SMALL_STATE(297)] = 12692,
  [SMALL_STATE(298)] = 12703,
  [SMALL_STATE(299)] = 12714,
  [SMALL_STATE(300)] = 12725,
  [SMALL_STATE(301)] = 12736,
  [SMALL_STATE(302)] = 12747,
  [SMALL_STATE(303)] = 12758,
  [SMALL_STATE(304)] = 12769,
  [SMALL_STATE(305)] = 12780,
  [SMALL_STATE(306)] = 12791,
  [SMALL_STATE(307)] = 12802,
  [SMALL_STATE(308)] = 12813,
  [SMALL_STATE(309)] = 12824,
  [SMALL_STATE(310)] = 12835,
  [SMALL_STATE(311)] = 12846,
  [SMALL_STATE(312)] = 12857,
  [SMALL_STATE(313)] = 12868,
  [SMALL_STATE(314)] = 12879,
  [SMALL_STATE(315)] = 12895,
  [SMALL_STATE(316)] = 12911,
  [SMALL_STATE(317)] = 12925,
  [SMALL_STATE(318)] = 12941,
  [SMALL_STATE(319)] = 12957,
  [SMALL_STATE(320)] = 12973,
  [SMALL_STATE(321)] = 12989,
  [SMALL_STATE(322)] = 13005,
  [SMALL_STATE(323)] = 13021,
  [SMALL_STATE(324)] = 13037,
  [SMALL_STATE(325)] = 13053,
  [SMALL_STATE(326)] = 13069,
  [SMALL_STATE(327)] = 13085,
  [SMALL_STATE(328)] = 13101,
  [SMALL_STATE(329)] = 13114,
  [SMALL_STATE(330)] = 13127,
  [SMALL_STATE(331)] = 13140,
  [SMALL_STATE(332)] = 13153,
  [SMALL_STATE(333)] = 13166,
  [SMALL_STATE(334)] = 13179,
  [SMALL_STATE(335)] = 13192,
  [SMALL_STATE(336)] = 13203,
  [SMALL_STATE(337)] = 13214,
  [SMALL_STATE(338)] = 13225,
  [SMALL_STATE(339)] = 13238,
  [SMALL_STATE(340)] = 13251,
  [SMALL_STATE(341)] = 13264,
  [SMALL_STATE(342)] = 13277,
  [SMALL_STATE(343)] = 13290,
  [SMALL_STATE(344)] = 13303,
  [SMALL_STATE(345)] = 13316,
  [SMALL_STATE(346)] = 13329,
  [SMALL_STATE(347)] = 13342,
  [SMALL_STATE(348)] = 13355,
  [SMALL_STATE(349)] = 13368,
  [SMALL_STATE(350)] = 13381,
  [SMALL_STATE(351)] = 13394,
  [SMALL_STATE(352)] = 13407,
  [SMALL_STATE(353)] = 13420,
  [SMALL_STATE(354)] = 13433,
  [SMALL_STATE(355)] = 13446,
  [SMALL_STATE(356)] = 13459,
  [SMALL_STATE(357)] = 13468,
  [SMALL_STATE(358)] = 13481,
  [SMALL_STATE(359)] = 13494,
  [SMALL_STATE(360)] = 13507,
  [SMALL_STATE(361)] = 13520,
  [SMALL_STATE(362)] = 13533,
  [SMALL_STATE(363)] = 13546,
  [SMALL_STATE(364)] = 13559,
  [SMALL_STATE(365)] = 13572,
  [SMALL_STATE(366)] = 13585,
  [SMALL_STATE(367)] = 13598,
  [SMALL_STATE(368)] = 13611,
  [SMALL_STATE(369)] = 13624,
  [SMALL_STATE(370)] = 13637,
  [SMALL_STATE(371)] = 13650,
  [SMALL_STATE(372)] = 13663,
  [SMALL_STATE(373)] = 13676,
  [SMALL_STATE(374)] = 13689,
  [SMALL_STATE(375)] = 13702,
  [SMALL_STATE(376)] = 13715,
  [SMALL_STATE(377)] = 13728,
  [SMALL_STATE(378)] = 13741,
  [SMALL_STATE(379)] = 13754,
  [SMALL_STATE(380)] = 13767,
  [SMALL_STATE(381)] = 13780,
  [SMALL_STATE(382)] = 13793,
  [SMALL_STATE(383)] = 13806,
  [SMALL_STATE(384)] = 13819,
  [SMALL_STATE(385)] = 13832,
  [SMALL_STATE(386)] = 13845,
  [SMALL_STATE(387)] = 13858,
  [SMALL_STATE(388)] = 13871,
  [SMALL_STATE(389)] = 13884,
  [SMALL_STATE(390)] = 13897,
  [SMALL_STATE(391)] = 13910,
  [SMALL_STATE(392)] = 13919,
  [SMALL_STATE(393)] = 13932,
  [SMALL_STATE(394)] = 13945,
  [SMALL_STATE(395)] = 13958,
  [SMALL_STATE(396)] = 13968,
  [SMALL_STATE(397)] = 13976,
  [SMALL_STATE(398)] = 13986,
  [SMALL_STATE(399)] = 13996,
  [SMALL_STATE(400)] = 14006,
  [SMALL_STATE(401)] = 14014,
  [SMALL_STATE(402)] = 14024,
  [SMALL_STATE(403)] = 14032,
  [SMALL_STATE(404)] = 14040,
  [SMALL_STATE(405)] = 14048,
  [SMALL_STATE(406)] = 14058,
  [SMALL_STATE(407)] = 14068,
  [SMALL_STATE(408)] = 14078,
  [SMALL_STATE(409)] = 14086,
  [SMALL_STATE(410)] = 14096,
  [SMALL_STATE(411)] = 14106,
  [SMALL_STATE(412)] = 14116,
  [SMALL_STATE(413)] = 14126,
  [SMALL_STATE(414)] = 14136,
  [SMALL_STATE(415)] = 14146,
  [SMALL_STATE(416)] = 14156,
  [SMALL_STATE(417)] = 14166,
  [SMALL_STATE(418)] = 14176,
  [SMALL_STATE(419)] = 14186,
  [SMALL_STATE(420)] = 14196,
  [SMALL_STATE(421)] = 14206,
  [SMALL_STATE(422)] = 14216,
  [SMALL_STATE(423)] = 14226,
  [SMALL_STATE(424)] = 14236,
  [SMALL_STATE(425)] = 14243,
  [SMALL_STATE(426)] = 14250,
  [SMALL_STATE(427)] = 14257,
  [SMALL_STATE(428)] = 14264,
  [SMALL_STATE(429)] = 14271,
  [SMALL_STATE(430)] = 14278,
  [SMALL_STATE(431)] = 14285,
  [SMALL_STATE(432)] = 14292,
  [SMALL_STATE(433)] = 14299,
  [SMALL_STATE(434)] = 14306,
  [SMALL_STATE(435)] = 14313,
  [SMALL_STATE(436)] = 14320,
  [SMALL_STATE(437)] = 14327,
  [SMALL_STATE(438)] = 14334,
  [SMALL_STATE(439)] = 14341,
  [SMALL_STATE(440)] = 14348,
  [SMALL_STATE(441)] = 14355,
  [SMALL_STATE(442)] = 14362,
  [SMALL_STATE(443)] = 14369,
  [SMALL_STATE(444)] = 14376,
  [SMALL_STATE(445)] = 14383,
  [SMALL_STATE(446)] = 14390,
  [SMALL_STATE(447)] = 14397,
  [SMALL_STATE(448)] = 14404,
  [SMALL_STATE(449)] = 14411,
  [SMALL_STATE(450)] = 14418,
  [SMALL_STATE(451)] = 14425,
  [SMALL_STATE(452)] = 14432,
  [SMALL_STATE(453)] = 14439,
  [SMALL_STATE(454)] = 14446,
  [SMALL_STATE(455)] = 14453,
  [SMALL_STATE(456)] = 14460,
  [SMALL_STATE(457)] = 14467,
  [SMALL_STATE(458)] = 14474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(405),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(160),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(139),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(140),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(448),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(439),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(79),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(76),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(161),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(162),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(159),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(156),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(148),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(144),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(324),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 1, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 1, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_path_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(411),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 5, .production_id = 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 5, .production_id = 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deref_expr, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deref_expr, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expr, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ptr, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ptr, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expr, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 8),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr, 4, .production_id = 6),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr, 4, .production_id = 6),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_expr, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection_expr, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expr, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expr, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_expr, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_expr, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_array_ptr, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_array_ptr, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_literal, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_literal, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(419),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(94),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(13),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(56),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(57),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(59),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(61),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(64),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(102),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(323),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_if, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_expr, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_expr, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_return, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_return, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_while, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_while, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_return, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_return, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_break, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_break, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_continue, 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_continue, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 5),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_if, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_assignment, 4),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_assignment, 4),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(406),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(421),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(418),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(407),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(398),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 13, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 9, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, .production_id = 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 8, .production_id = 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 15),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 12, .production_id = 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 12, .production_id = 16),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, .production_id = 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 14),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 6, .production_id = 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 11, .production_id = 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 13),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 12),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 5, .production_id = 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 8),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 10),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 7, .production_id = 7),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 10, .production_id = 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 11),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(315),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(292),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2), SHIFT_REPEAT(231),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 2), SHIFT_REPEAT(423),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 2),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2), SHIFT_REPEAT(416),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2), SHIFT_REPEAT(235),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2), SHIFT_REPEAT(422),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(417),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(399),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 4),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [938] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 4),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
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
