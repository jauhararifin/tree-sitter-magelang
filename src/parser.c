#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 397
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_DQUOTE = 49,
  aux_sym_string_literal_token1 = 50,
  anon_sym_BSLASH = 51,
  aux_sym_string_literal_token2 = 52,
  aux_sym_string_literal_token3 = 53,
  aux_sym_string_literal_token4 = 54,
  aux_sym_string_literal_token5 = 55,
  aux_sym_string_literal_token6 = 56,
  sym_comment = 57,
  sym_source_file = 58,
  sym_item = 59,
  sym_import = 60,
  sym_struct_declaration = 61,
  sym_type_parameter = 62,
  sym_let_declaration = 63,
  sym_func_declaration = 64,
  sym_stmt_block = 65,
  sym_stmt_expr = 66,
  sym_stmt_assignment = 67,
  sym_stmt_while = 68,
  sym_stmt_if = 69,
  sym_stmt_continue = 70,
  sym_stmt_break = 71,
  sym_stmt_return = 72,
  sym_stmt = 73,
  sym_type_expr = 74,
  sym_type_identifier = 75,
  sym_type_fn = 76,
  sym_type_ptr = 77,
  sym_type_array_ptr = 78,
  sym_type_path = 79,
  sym_type_arguments = 80,
  sym_value_expr = 81,
  sym_true = 82,
  sym_false = 83,
  sym_null = 84,
  sym_num_literal = 85,
  sym_char_literal = 86,
  sym_bin_expr = 87,
  sym_cast_expr = 88,
  sym_unary_expr = 89,
  sym_value_path = 90,
  sym_call_expr = 91,
  sym_field_identifier = 92,
  sym_identifier = 93,
  sym_string_literal = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_struct_declaration_repeat1 = 96,
  aux_sym_struct_declaration_repeat2 = 97,
  aux_sym_type_parameter_repeat1 = 98,
  aux_sym_func_declaration_repeat1 = 99,
  aux_sym_stmt_block_repeat1 = 100,
  aux_sym_type_fn_repeat1 = 101,
  aux_sym_type_path_repeat1 = 102,
  aux_sym_call_expr_repeat1 = 103,
  aux_sym_string_literal_repeat1 = 104,
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function = 1,
  field_name = 2,
  field_package = 3,
  field_parameters = 4,
  field_result = 5,
  field_type_params = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 4},
  [9] = {.index = 18, .length = 5},
  [10] = {.index = 23, .length = 5},
  [11] = {.index = 28, .length = 6},
  [12] = {.index = 34, .length = 6},
  [13] = {.index = 40, .length = 7},
  [14] = {.index = 47, .length = 7},
  [15] = {.index = 54, .length = 8},
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
    {field_name, 1},
    {field_result, 4},
    {field_result, 5},
  [10] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [14] =
    {field_name, 1},
    {field_result, 5},
    {field_result, 6},
    {field_type_params, 2},
  [18] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
  [23] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_type_params, 2},
  [28] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_result, 7},
    {field_result, 8},
  [34] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_type_params, 2},
  [40] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
  [47] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
    {field_type_params, 2},
  [54] =
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
  [5] = 4,
  [6] = 2,
  [7] = 2,
  [8] = 4,
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
  [57] = 9,
  [58] = 58,
  [59] = 10,
  [60] = 60,
  [61] = 61,
  [62] = 58,
  [63] = 60,
  [64] = 11,
  [65] = 32,
  [66] = 66,
  [67] = 42,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 18,
  [72] = 72,
  [73] = 15,
  [74] = 14,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 70,
  [81] = 12,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 75,
  [89] = 76,
  [90] = 17,
  [91] = 69,
  [92] = 92,
  [93] = 78,
  [94] = 94,
  [95] = 72,
  [96] = 19,
  [97] = 13,
  [98] = 92,
  [99] = 16,
  [100] = 86,
  [101] = 79,
  [102] = 68,
  [103] = 82,
  [104] = 83,
  [105] = 84,
  [106] = 85,
  [107] = 53,
  [108] = 33,
  [109] = 52,
  [110] = 27,
  [111] = 26,
  [112] = 24,
  [113] = 30,
  [114] = 38,
  [115] = 23,
  [116] = 22,
  [117] = 49,
  [118] = 35,
  [119] = 50,
  [120] = 51,
  [121] = 20,
  [122] = 56,
  [123] = 55,
  [124] = 36,
  [125] = 37,
  [126] = 46,
  [127] = 31,
  [128] = 25,
  [129] = 34,
  [130] = 28,
  [131] = 48,
  [132] = 43,
  [133] = 45,
  [134] = 44,
  [135] = 54,
  [136] = 21,
  [137] = 41,
  [138] = 39,
  [139] = 47,
  [140] = 40,
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
  [152] = 148,
  [153] = 149,
  [154] = 144,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 151,
  [162] = 162,
  [163] = 163,
  [164] = 147,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 169,
  [172] = 169,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 173,
  [180] = 180,
  [181] = 178,
  [182] = 182,
  [183] = 177,
  [184] = 178,
  [185] = 185,
  [186] = 186,
  [187] = 182,
  [188] = 173,
  [189] = 186,
  [190] = 185,
  [191] = 174,
  [192] = 173,
  [193] = 182,
  [194] = 174,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 174,
  [202] = 202,
  [203] = 203,
  [204] = 199,
  [205] = 205,
  [206] = 199,
  [207] = 199,
  [208] = 177,
  [209] = 178,
  [210] = 210,
  [211] = 198,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 175,
  [217] = 175,
  [218] = 218,
  [219] = 175,
  [220] = 9,
  [221] = 10,
  [222] = 11,
  [223] = 19,
  [224] = 15,
  [225] = 30,
  [226] = 25,
  [227] = 21,
  [228] = 31,
  [229] = 34,
  [230] = 16,
  [231] = 18,
  [232] = 17,
  [233] = 44,
  [234] = 14,
  [235] = 53,
  [236] = 33,
  [237] = 45,
  [238] = 9,
  [239] = 10,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 147,
  [244] = 165,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 151,
  [261] = 261,
  [262] = 262,
  [263] = 162,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 270,
  [275] = 269,
  [276] = 272,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 16,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 18,
  [296] = 17,
  [297] = 297,
  [298] = 291,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 280,
  [305] = 285,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 285,
  [315] = 315,
  [316] = 316,
  [317] = 286,
  [318] = 316,
  [319] = 286,
  [320] = 320,
  [321] = 321,
  [322] = 280,
  [323] = 323,
  [324] = 285,
  [325] = 316,
  [326] = 326,
  [327] = 327,
  [328] = 286,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 342,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 32,
  [349] = 344,
  [350] = 350,
  [351] = 340,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 354,
  [358] = 355,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 42,
  [363] = 344,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 365,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 365,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 374,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 377,
  [387] = 377,
  [388] = 377,
  [389] = 374,
  [390] = 390,
  [391] = 391,
  [392] = 365,
  [393] = 378,
  [394] = 394,
  [395] = 378,
  [396] = 374,
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
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(210);
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
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 't') ADVANCE(153);
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
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
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
      if (lookahead == '"') ADVANCE(205);
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
      if (lookahead == '"') ADVANCE(205);
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
      if (lookahead == '"') ADVANCE(205);
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
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
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
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '^') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(197);
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
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0) ADVANCE(211);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
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
      if (lookahead == '/') ADVANCE(220);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != 'U' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(211);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token4);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_literal_token5);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_literal_token6);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
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
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
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
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 11},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 11},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 11},
  [350] = {.lex_state = 11},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 3},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 11},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 3},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 3},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_string_literal_token3] = ACTIONS(1),
    [aux_sym_string_literal_token4] = ACTIONS(1),
    [aux_sym_string_literal_token5] = ACTIONS(1),
    [aux_sym_string_literal_token6] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(383),
    [sym_item] = STATE(200),
    [sym_import] = STATE(245),
    [sym_struct_declaration] = STATE(245),
    [sym_let_declaration] = STATE(245),
    [sym_func_declaration] = STATE(245),
    [aux_sym_source_file_repeat1] = STATE(200),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(8), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [92] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_let,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_continue,
    ACTIONS(69), 1,
      anon_sym_break,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(75), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(78), 1,
      anon_sym_true,
    ACTIONS(81), 1,
      anon_sym_false,
    ACTIONS(84), 1,
      anon_sym_null,
    ACTIONS(87), 1,
      aux_sym_num_literal_token1,
    ACTIONS(90), 1,
      aux_sym_char_literal_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(3), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [184] = 23,
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
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(3), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [276] = 23,
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
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(3), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [368] = 23,
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
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(5), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [460] = 23,
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
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(4), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [552] = 23,
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
    STATE(81), 1,
      sym_identifier,
    STATE(141), 1,
      sym_value_expr,
    STATE(3), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(163), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    STATE(10), 1,
      aux_sym_type_path_repeat1,
    STATE(30), 1,
      sym_type_arguments,
    ACTIONS(109), 11,
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
    ACTIONS(111), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    STATE(11), 1,
      aux_sym_type_path_repeat1,
    STATE(53), 1,
      sym_type_arguments,
    ACTIONS(115), 11,
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
    ACTIONS(117), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    STATE(11), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(119), 11,
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
    ACTIONS(121), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    ACTIONS(126), 11,
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
    ACTIONS(128), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON_COLON,
    ACTIONS(132), 11,
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
    ACTIONS(134), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 11,
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
    ACTIONS(140), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
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
  [909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 11,
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
    ACTIONS(144), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
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
  [949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(146), 11,
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
    ACTIONS(148), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(152), 11,
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
    ACTIONS(154), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COLON,
    ACTIONS(158), 11,
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
    ACTIONS(160), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 11,
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
    ACTIONS(121), 21,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
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
  [1115] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(170), 6,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 11,
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
    ACTIONS(192), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1215] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(170), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 17,
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
  [1262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(170), 10,
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
    ACTIONS(166), 19,
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
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 11,
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
    ACTIONS(196), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 11,
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
    ACTIONS(200), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(170), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 13,
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
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 11,
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
    ACTIONS(204), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 11,
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
    ACTIONS(208), 19,
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
  [1514] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(218), 1,
      anon_sym_AMP_AMP,
    ACTIONS(220), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(212), 5,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(214), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 11,
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
    ACTIONS(117), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 11,
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
    ACTIONS(224), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 11,
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
    ACTIONS(228), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 11,
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
    ACTIONS(232), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 11,
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
    ACTIONS(148), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1778] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 7,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 11,
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
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 11,
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
    ACTIONS(236), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 11,
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
    ACTIONS(240), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 11,
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
    ACTIONS(244), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 11,
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
    ACTIONS(248), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [1989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 11,
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
    ACTIONS(252), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 11,
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
    ACTIONS(256), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 11,
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
    ACTIONS(260), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 11,
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
    ACTIONS(264), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 11,
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
    ACTIONS(268), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 11,
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
    ACTIONS(272), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 11,
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
    ACTIONS(276), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 11,
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
    ACTIONS(280), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 11,
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
    ACTIONS(284), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2340] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 15,
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
  [2389] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(170), 7,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2446] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(170), 6,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(166), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 11,
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
    ACTIONS(288), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 11,
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
    ACTIONS(292), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 11,
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
    ACTIONS(296), 20,
      anon_sym_COMMA,
      anon_sym_LPAREN,
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
  [2622] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(218), 1,
      anon_sym_AMP_AMP,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(170), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
    ACTIONS(166), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2687] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(184), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(188), 1,
      anon_sym_as,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(180), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(170), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
    ACTIONS(166), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(59), 1,
      aux_sym_type_path_repeat1,
    STATE(113), 1,
      sym_type_arguments,
    ACTIONS(109), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [2791] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(29), 1,
      sym_value_expr,
    STATE(63), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [2850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON_COLON,
    STATE(64), 1,
      aux_sym_type_path_repeat1,
    STATE(107), 1,
      sym_type_arguments,
    ACTIONS(115), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(117), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [2891] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_identifier,
    STATE(29), 1,
      sym_value_expr,
    STATE(61), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [2950] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(330), 1,
      anon_sym_true,
    ACTIONS(333), 1,
      anon_sym_false,
    ACTIONS(336), 1,
      anon_sym_null,
    ACTIONS(339), 1,
      aux_sym_num_literal_token1,
    ACTIONS(342), 1,
      aux_sym_char_literal_token1,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(29), 1,
      sym_value_expr,
    STATE(61), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(345), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3009] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_identifier,
    STATE(29), 1,
      sym_value_expr,
    STATE(60), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3068] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_identifier,
    STATE(29), 1,
      sym_value_expr,
    STATE(61), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON,
    STATE(64), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(119), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(121), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(228), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [3199] = 14,
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
    ACTIONS(358), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_identifier,
    STATE(145), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(260), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [3289] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(115), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3342] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(121), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3395] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(28), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COLON,
    ACTIONS(158), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(160), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [3483] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(149), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(144), 19,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
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
  [3569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(140), 19,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
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
  [3602] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(56), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3655] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(55), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3708] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(142), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3761] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(152), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3814] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(111), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3867] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(130), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_COLON_COLON,
    ACTIONS(126), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(128), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [3955] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(116), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4008] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(117), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4061] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(118), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4114] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(119), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4167] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(120), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4220] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(143), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4273] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(122), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4326] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(123), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(152), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(154), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [4414] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(20), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4467] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(144), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4520] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(148), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4573] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(146), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4626] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(153), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(121), 19,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
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
  [4712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(134), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [4747] = 13,
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
    STATE(81), 1,
      sym_identifier,
    STATE(154), 1,
      sym_value_expr,
    ACTIONS(45), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(140), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(146), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(148), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [4835] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(51), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4888] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(26), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4941] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [4994] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(22), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [5047] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(49), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [5100] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(35), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [5153] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(306), 1,
      anon_sym_true,
    ACTIONS(308), 1,
      anon_sym_false,
    ACTIONS(310), 1,
      anon_sym_null,
    ACTIONS(312), 1,
      aux_sym_num_literal_token1,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_identifier,
    STATE(50), 1,
      sym_value_expr,
    ACTIONS(316), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(40), 11,
      sym_true,
      sym_false,
      sym_null,
      sym_num_literal,
      sym_char_literal,
      sym_bin_expr,
      sym_cast_expr,
      sym_unary_expr,
      sym_value_path,
      sym_call_expr,
      sym_string_literal,
  [5206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(292), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(232), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(288), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(204), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5334] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(170), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 10,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(196), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(117), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(244), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(170), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 16,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [5510] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(170), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 14,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [5550] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 12,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [5592] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 3,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5640] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(170), 3,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5690] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(170), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(166), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5742] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(170), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(166), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5796] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(166), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5852] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(166), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
  [5910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(236), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(240), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [5974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(276), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(224), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(200), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(148), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(208), 17,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
      anon_sym_as,
  [6136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(284), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(264), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(272), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(296), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(192), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(256), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(248), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(280), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(252), 18,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
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
      anon_sym_as,
  [6456] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6514] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    STATE(167), 1,
      sym_stmt_block,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6572] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_stmt_block,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6630] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6685] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6740] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 10,
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
    ACTIONS(412), 11,
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
  [6824] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6879] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_else,
    ACTIONS(418), 10,
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
    ACTIONS(420), 10,
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
  [6965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 10,
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
    ACTIONS(426), 11,
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
  [6994] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7049] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7104] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_as,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      anon_sym_AMP_AMP,
    ACTIONS(400), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(376), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(386), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 10,
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
    ACTIONS(436), 10,
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
  [7187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 10,
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
    ACTIONS(440), 10,
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
  [7215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 10,
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
    ACTIONS(444), 10,
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
  [7243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 10,
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
    ACTIONS(448), 10,
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
  [7271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 10,
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
    ACTIONS(452), 10,
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
  [7299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 10,
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
    ACTIONS(456), 10,
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
  [7327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 10,
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
    ACTIONS(426), 10,
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
  [7355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 10,
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
    ACTIONS(460), 10,
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
  [7383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 10,
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
    ACTIONS(464), 10,
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
  [7411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 10,
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
    ACTIONS(412), 10,
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
  [7439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 10,
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
    ACTIONS(468), 10,
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
  [7467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 10,
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
    ACTIONS(472), 10,
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
  [7495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 10,
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
    ACTIONS(476), 10,
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
  [7523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 4,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    ACTIONS(325), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [7544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(319), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7578] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_type_identifier,
    STATE(286), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7612] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_type_identifier,
    STATE(317), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7646] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_type_identifier,
    STATE(328), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7680] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_fn,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(34), 1,
      sym_type_expr,
    STATE(44), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7711] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_fn,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_type_identifier,
    STATE(108), 1,
      sym_type_expr,
    STATE(134), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7742] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(228), 1,
      sym_type_expr,
    STATE(238), 1,
      sym_type_identifier,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7773] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(287), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7804] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(238), 1,
      sym_type_identifier,
    STATE(316), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7835] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_fn,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_type_identifier,
    STATE(133), 1,
      sym_type_expr,
    STATE(134), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7866] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_fn,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_type_identifier,
    STATE(129), 1,
      sym_type_expr,
    STATE(134), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7897] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 1,
      anon_sym_import,
    ACTIONS(529), 1,
      anon_sym_struct,
    ACTIONS(532), 1,
      anon_sym_let,
    ACTIONS(535), 1,
      anon_sym_fn,
    STATE(180), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(245), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [7926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(237), 1,
      sym_type_expr,
    STATE(238), 1,
      sym_type_identifier,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7957] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(378), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [7988] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(238), 1,
      sym_type_identifier,
    STATE(325), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8019] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(237), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8050] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(351), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8081] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(238), 1,
      sym_type_identifier,
    STATE(292), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8112] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(393), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8143] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(229), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8174] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(292), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8205] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(340), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8236] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(236), 1,
      sym_type_expr,
    STATE(238), 1,
      sym_type_identifier,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8267] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(229), 1,
      sym_type_expr,
    STATE(238), 1,
      sym_type_identifier,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(395), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(236), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8360] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(284), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8391] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(299), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(297), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_fn,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(36), 1,
      sym_type_expr,
    STATE(44), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8484] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(227), 1,
      sym_type_expr,
    STATE(238), 1,
      sym_type_identifier,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8515] = 8,
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
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    STATE(180), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(245), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [8544] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_fn,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(33), 1,
      sym_type_expr,
    STATE(44), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8575] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(333), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8606] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(346), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8637] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_fn,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(21), 1,
      sym_type_expr,
    STATE(44), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8668] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(320), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8699] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_fn,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_type_identifier,
    STATE(136), 1,
      sym_type_expr,
    STATE(134), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8730] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(227), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8761] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(518), 1,
      anon_sym_fn,
    ACTIONS(520), 1,
      anon_sym_STAR,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
    STATE(238), 1,
      sym_type_identifier,
    STATE(318), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8792] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_fn,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(45), 1,
      sym_type_expr,
    STATE(44), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8823] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(364), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8854] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_fn,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_type_identifier,
    STATE(124), 1,
      sym_type_expr,
    STATE(134), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8885] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(311), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8916] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(335), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8947] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(312), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [8978] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(313), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [9009] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_fn,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(514), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_type_identifier,
    STATE(127), 1,
      sym_type_expr,
    STATE(134), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [9040] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(228), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [9071] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_fn,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(488), 1,
      anon_sym_STAR,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_type_identifier,
    STATE(310), 1,
      sym_type_expr,
    STATE(233), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [9102] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_fn,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(504), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_type_expr,
    STATE(44), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [9133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LT,
    ACTIONS(542), 1,
      anon_sym_COLON_COLON,
    STATE(221), 1,
      aux_sym_type_path_repeat1,
    STATE(225), 1,
      sym_type_arguments,
    ACTIONS(111), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LT,
    ACTIONS(542), 1,
      anon_sym_COLON_COLON,
    STATE(222), 1,
      aux_sym_type_path_repeat1,
    STATE(235), 1,
      sym_type_arguments,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON_COLON,
    STATE(222), 1,
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
  [9201] = 2,
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
  [9216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
  [9231] = 2,
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
  [9244] = 2,
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
  [9257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9283] = 2,
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
  [9296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON,
    ACTIONS(148), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(160), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(154), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 7,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [9367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [9406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COLON_COLON,
    ACTIONS(553), 1,
      anon_sym_LT,
    STATE(225), 1,
      sym_type_arguments,
    STATE(239), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COLON_COLON,
    ACTIONS(553), 1,
      anon_sym_LT,
    STATE(222), 1,
      aux_sym_type_path_repeat1,
    STATE(235), 1,
      sym_type_arguments,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9633] = 2,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(585), 5,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
      aux_sym_string_literal_token4,
      aux_sym_string_literal_token5,
      aux_sym_string_literal_token6,
  [9644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [9743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SEMI,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(607), 1,
      anon_sym_COLON,
    STATE(259), 1,
      sym_stmt_block,
  [9759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_COLON,
    STATE(251), 1,
      sym_stmt_block,
  [9775] = 5,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      aux_sym_string_literal_token1,
    ACTIONS(617), 1,
      anon_sym_BSLASH,
    STATE(270), 1,
      aux_sym_string_literal_repeat1,
  [9791] = 5,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_BSLASH,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      aux_sym_string_literal_token1,
    STATE(273), 1,
      aux_sym_string_literal_repeat1,
  [9807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_COLON,
    STATE(241), 1,
      sym_stmt_block,
  [9823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LT,
    ACTIONS(629), 1,
      aux_sym_type_identifier_token1,
    STATE(13), 1,
      sym_identifier,
    STATE(37), 1,
      sym_type_arguments,
  [9839] = 5,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_DQUOTE,
    ACTIONS(633), 1,
      aux_sym_string_literal_token1,
    ACTIONS(636), 1,
      anon_sym_BSLASH,
    STATE(273), 1,
      aux_sym_string_literal_repeat1,
  [9855] = 5,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_BSLASH,
    ACTIONS(621), 1,
      aux_sym_string_literal_token1,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(273), 1,
      aux_sym_string_literal_repeat1,
  [9871] = 5,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_BSLASH,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    ACTIONS(643), 1,
      aux_sym_string_literal_token1,
    STATE(274), 1,
      aux_sym_string_literal_repeat1,
  [9887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LT,
    ACTIONS(645), 1,
      aux_sym_type_identifier_token1,
    STATE(97), 1,
      sym_identifier,
    STATE(125), 1,
      sym_type_arguments,
  [9903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      anon_sym_COLON,
    STATE(252), 1,
      sym_stmt_block,
  [9919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    ACTIONS(653), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_stmt_block,
  [9935] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    ACTIONS(657), 1,
      anon_sym_COLON,
    STATE(240), 1,
      sym_stmt_block,
  [9951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_GT,
    STATE(298), 1,
      aux_sym_type_fn_repeat1,
  [9964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_GT,
    STATE(334), 1,
      aux_sym_struct_declaration_repeat1,
  [9977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(293), 1,
      aux_sym_struct_declaration_repeat2,
  [9990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    STATE(390), 1,
      sym_field_identifier,
  [10003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    STATE(265), 1,
      sym_stmt_block,
  [10016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_type_fn_repeat1,
  [10029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_type_fn_repeat1,
  [10042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      aux_sym_struct_declaration_repeat2,
  [10055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_func_declaration_repeat1,
  [10068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_func_declaration_repeat1,
  [10081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COLON,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_type_fn_repeat1,
  [10105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [10114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(293), 1,
      aux_sym_struct_declaration_repeat2,
  [10127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_field_identifier,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_func_declaration_repeat1,
  [10175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_GT,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_type_fn_repeat1,
  [10188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      sym_stmt_block,
  [10201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_func_declaration_repeat1,
  [10214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LT,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym_type_parameter,
  [10227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_field_identifier,
  [10240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      sym_field_identifier,
  [10253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_GT,
    STATE(298), 1,
      aux_sym_type_fn_repeat1,
  [10266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_type_fn_repeat1,
  [10279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(293), 1,
      aux_sym_struct_declaration_repeat2,
  [10292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_field_identifier,
  [10305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(371), 1,
      sym_field_identifier,
  [10318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(385), 1,
      sym_identifier,
  [10331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_func_declaration_repeat1,
  [10344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      anon_sym_SEMI,
    STATE(258), 1,
      sym_stmt_block,
  [10357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      sym_stmt_block,
  [10370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    STATE(249), 1,
      sym_stmt_block,
  [10383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_type_fn_repeat1,
  [10396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_GT,
    STATE(315), 1,
      aux_sym_type_parameter_repeat1,
  [10409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_GT,
    STATE(280), 1,
      aux_sym_type_fn_repeat1,
  [10422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_type_fn_repeat1,
  [10435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_GT,
    STATE(304), 1,
      aux_sym_type_fn_repeat1,
  [10448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_type_fn_repeat1,
  [10461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      aux_sym_struct_declaration_repeat2,
  [10474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_GT,
    STATE(321), 1,
      aux_sym_struct_declaration_repeat1,
  [10487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_GT,
    STATE(298), 1,
      aux_sym_type_fn_repeat1,
  [10500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      sym_field_identifier,
  [10513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_type_fn_repeat1,
  [10526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_GT,
    STATE(322), 1,
      aux_sym_type_fn_repeat1,
  [10539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_GT,
    STATE(327), 1,
      aux_sym_type_parameter_repeat1,
  [10552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_GT,
    STATE(315), 1,
      aux_sym_type_parameter_repeat1,
  [10565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_type_fn_repeat1,
  [10578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(293), 1,
      aux_sym_struct_declaration_repeat2,
  [10591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_field_identifier,
  [10604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_identifier,
  [10617] = 2,
    ACTIONS(587), 1,
      sym_comment,
    ACTIONS(631), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      anon_sym_BSLASH,
  [10626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      aux_sym_struct_declaration_repeat2,
  [10639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_GT,
    STATE(321), 1,
      aux_sym_struct_declaration_repeat1,
  [10652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      sym_stmt_block,
  [10665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LT,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
  [10675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(375), 1,
      sym_string_literal,
  [10685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_if,
    STATE(166), 1,
      sym_stmt_if,
  [10695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_type_identifier_token1,
    STATE(390), 1,
      sym_field_identifier,
  [10705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    ACTIONS(803), 1,
      anon_sym_EQ,
  [10715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_type_identifier_token1,
    STATE(336), 1,
      sym_type_identifier,
  [10725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(354), 1,
      sym_identifier,
  [10735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(357), 1,
      sym_identifier,
  [10745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_type_identifier_token1,
    STATE(223), 1,
      sym_type_identifier,
  [10755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(301), 1,
      sym_identifier,
  [10765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_type_identifier_token1,
    STATE(360), 1,
      sym_type_identifier,
  [10783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      aux_sym_type_identifier_token1,
    STATE(96), 1,
      sym_type_identifier,
  [10801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_type_identifier_token1,
    STATE(326), 1,
      sym_type_identifier,
  [10811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    ACTIONS(811), 1,
      anon_sym_EQ,
  [10821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(337), 1,
      sym_identifier,
  [10831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_COLON,
    ACTIONS(815), 1,
      anon_sym_EQ,
  [10849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_type_arguments,
  [10859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(391), 1,
      sym_identifier,
  [10869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_COLON,
    ACTIONS(819), 1,
      anon_sym_EQ,
  [10879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LT,
    STATE(109), 1,
      sym_type_arguments,
  [10889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(353), 1,
      sym_identifier,
  [10899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_type_identifier_token1,
    STATE(281), 1,
      sym_identifier,
  [10917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_type_identifier_token1,
    STATE(19), 1,
      sym_type_identifier,
  [10935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_STAR,
  [10950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
  [10957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SEMI,
  [10964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_SEMI,
  [10971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_STAR,
  [10978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_COLON,
  [10985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
  [10992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_COLON,
  [10999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COLON,
  [11006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
  [11013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SEMI,
  [11020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_STAR,
  [11027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
  [11034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [11041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
  [11048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
  [11055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
  [11062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
  [11069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
  [11076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
  [11083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COLON,
  [11090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
  [11097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
  [11104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
  [11111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
  [11118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_COLON,
  [11125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COLON,
  [11132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_STAR,
  [11139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [11146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_COLON,
  [11153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [11160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 276,
  [SMALL_STATE(6)] = 368,
  [SMALL_STATE(7)] = 460,
  [SMALL_STATE(8)] = 552,
  [SMALL_STATE(9)] = 644,
  [SMALL_STATE(10)] = 692,
  [SMALL_STATE(11)] = 740,
  [SMALL_STATE(12)] = 785,
  [SMALL_STATE(13)] = 827,
  [SMALL_STATE(14)] = 869,
  [SMALL_STATE(15)] = 909,
  [SMALL_STATE(16)] = 949,
  [SMALL_STATE(17)] = 991,
  [SMALL_STATE(18)] = 1033,
  [SMALL_STATE(19)] = 1075,
  [SMALL_STATE(20)] = 1115,
  [SMALL_STATE(21)] = 1176,
  [SMALL_STATE(22)] = 1215,
  [SMALL_STATE(23)] = 1262,
  [SMALL_STATE(24)] = 1305,
  [SMALL_STATE(25)] = 1344,
  [SMALL_STATE(26)] = 1383,
  [SMALL_STATE(27)] = 1434,
  [SMALL_STATE(28)] = 1473,
  [SMALL_STATE(29)] = 1514,
  [SMALL_STATE(30)] = 1583,
  [SMALL_STATE(31)] = 1622,
  [SMALL_STATE(32)] = 1661,
  [SMALL_STATE(33)] = 1700,
  [SMALL_STATE(34)] = 1739,
  [SMALL_STATE(35)] = 1778,
  [SMALL_STATE(36)] = 1833,
  [SMALL_STATE(37)] = 1872,
  [SMALL_STATE(38)] = 1911,
  [SMALL_STATE(39)] = 1950,
  [SMALL_STATE(40)] = 1989,
  [SMALL_STATE(41)] = 2028,
  [SMALL_STATE(42)] = 2067,
  [SMALL_STATE(43)] = 2106,
  [SMALL_STATE(44)] = 2145,
  [SMALL_STATE(45)] = 2184,
  [SMALL_STATE(46)] = 2223,
  [SMALL_STATE(47)] = 2262,
  [SMALL_STATE(48)] = 2301,
  [SMALL_STATE(49)] = 2340,
  [SMALL_STATE(50)] = 2389,
  [SMALL_STATE(51)] = 2446,
  [SMALL_STATE(52)] = 2505,
  [SMALL_STATE(53)] = 2544,
  [SMALL_STATE(54)] = 2583,
  [SMALL_STATE(55)] = 2622,
  [SMALL_STATE(56)] = 2687,
  [SMALL_STATE(57)] = 2750,
  [SMALL_STATE(58)] = 2791,
  [SMALL_STATE(59)] = 2850,
  [SMALL_STATE(60)] = 2891,
  [SMALL_STATE(61)] = 2950,
  [SMALL_STATE(62)] = 3009,
  [SMALL_STATE(63)] = 3068,
  [SMALL_STATE(64)] = 3127,
  [SMALL_STATE(65)] = 3165,
  [SMALL_STATE(66)] = 3199,
  [SMALL_STATE(67)] = 3255,
  [SMALL_STATE(68)] = 3289,
  [SMALL_STATE(69)] = 3342,
  [SMALL_STATE(70)] = 3395,
  [SMALL_STATE(71)] = 3448,
  [SMALL_STATE(72)] = 3483,
  [SMALL_STATE(73)] = 3536,
  [SMALL_STATE(74)] = 3569,
  [SMALL_STATE(75)] = 3602,
  [SMALL_STATE(76)] = 3655,
  [SMALL_STATE(77)] = 3708,
  [SMALL_STATE(78)] = 3761,
  [SMALL_STATE(79)] = 3814,
  [SMALL_STATE(80)] = 3867,
  [SMALL_STATE(81)] = 3920,
  [SMALL_STATE(82)] = 3955,
  [SMALL_STATE(83)] = 4008,
  [SMALL_STATE(84)] = 4061,
  [SMALL_STATE(85)] = 4114,
  [SMALL_STATE(86)] = 4167,
  [SMALL_STATE(87)] = 4220,
  [SMALL_STATE(88)] = 4273,
  [SMALL_STATE(89)] = 4326,
  [SMALL_STATE(90)] = 4379,
  [SMALL_STATE(91)] = 4414,
  [SMALL_STATE(92)] = 4467,
  [SMALL_STATE(93)] = 4520,
  [SMALL_STATE(94)] = 4573,
  [SMALL_STATE(95)] = 4626,
  [SMALL_STATE(96)] = 4679,
  [SMALL_STATE(97)] = 4712,
  [SMALL_STATE(98)] = 4747,
  [SMALL_STATE(99)] = 4800,
  [SMALL_STATE(100)] = 4835,
  [SMALL_STATE(101)] = 4888,
  [SMALL_STATE(102)] = 4941,
  [SMALL_STATE(103)] = 4994,
  [SMALL_STATE(104)] = 5047,
  [SMALL_STATE(105)] = 5100,
  [SMALL_STATE(106)] = 5153,
  [SMALL_STATE(107)] = 5206,
  [SMALL_STATE(108)] = 5238,
  [SMALL_STATE(109)] = 5270,
  [SMALL_STATE(110)] = 5302,
  [SMALL_STATE(111)] = 5334,
  [SMALL_STATE(112)] = 5378,
  [SMALL_STATE(113)] = 5410,
  [SMALL_STATE(114)] = 5442,
  [SMALL_STATE(115)] = 5474,
  [SMALL_STATE(116)] = 5510,
  [SMALL_STATE(117)] = 5550,
  [SMALL_STATE(118)] = 5592,
  [SMALL_STATE(119)] = 5640,
  [SMALL_STATE(120)] = 5690,
  [SMALL_STATE(121)] = 5742,
  [SMALL_STATE(122)] = 5796,
  [SMALL_STATE(123)] = 5852,
  [SMALL_STATE(124)] = 5910,
  [SMALL_STATE(125)] = 5942,
  [SMALL_STATE(126)] = 5974,
  [SMALL_STATE(127)] = 6006,
  [SMALL_STATE(128)] = 6038,
  [SMALL_STATE(129)] = 6070,
  [SMALL_STATE(130)] = 6102,
  [SMALL_STATE(131)] = 6136,
  [SMALL_STATE(132)] = 6168,
  [SMALL_STATE(133)] = 6200,
  [SMALL_STATE(134)] = 6232,
  [SMALL_STATE(135)] = 6264,
  [SMALL_STATE(136)] = 6296,
  [SMALL_STATE(137)] = 6328,
  [SMALL_STATE(138)] = 6360,
  [SMALL_STATE(139)] = 6392,
  [SMALL_STATE(140)] = 6424,
  [SMALL_STATE(141)] = 6456,
  [SMALL_STATE(142)] = 6514,
  [SMALL_STATE(143)] = 6572,
  [SMALL_STATE(144)] = 6630,
  [SMALL_STATE(145)] = 6685,
  [SMALL_STATE(146)] = 6740,
  [SMALL_STATE(147)] = 6795,
  [SMALL_STATE(148)] = 6824,
  [SMALL_STATE(149)] = 6879,
  [SMALL_STATE(150)] = 6934,
  [SMALL_STATE(151)] = 6965,
  [SMALL_STATE(152)] = 6994,
  [SMALL_STATE(153)] = 7049,
  [SMALL_STATE(154)] = 7104,
  [SMALL_STATE(155)] = 7159,
  [SMALL_STATE(156)] = 7187,
  [SMALL_STATE(157)] = 7215,
  [SMALL_STATE(158)] = 7243,
  [SMALL_STATE(159)] = 7271,
  [SMALL_STATE(160)] = 7299,
  [SMALL_STATE(161)] = 7327,
  [SMALL_STATE(162)] = 7355,
  [SMALL_STATE(163)] = 7383,
  [SMALL_STATE(164)] = 7411,
  [SMALL_STATE(165)] = 7439,
  [SMALL_STATE(166)] = 7467,
  [SMALL_STATE(167)] = 7495,
  [SMALL_STATE(168)] = 7523,
  [SMALL_STATE(169)] = 7544,
  [SMALL_STATE(170)] = 7578,
  [SMALL_STATE(171)] = 7612,
  [SMALL_STATE(172)] = 7646,
  [SMALL_STATE(173)] = 7680,
  [SMALL_STATE(174)] = 7711,
  [SMALL_STATE(175)] = 7742,
  [SMALL_STATE(176)] = 7773,
  [SMALL_STATE(177)] = 7804,
  [SMALL_STATE(178)] = 7835,
  [SMALL_STATE(179)] = 7866,
  [SMALL_STATE(180)] = 7897,
  [SMALL_STATE(181)] = 7926,
  [SMALL_STATE(182)] = 7957,
  [SMALL_STATE(183)] = 7988,
  [SMALL_STATE(184)] = 8019,
  [SMALL_STATE(185)] = 8050,
  [SMALL_STATE(186)] = 8081,
  [SMALL_STATE(187)] = 8112,
  [SMALL_STATE(188)] = 8143,
  [SMALL_STATE(189)] = 8174,
  [SMALL_STATE(190)] = 8205,
  [SMALL_STATE(191)] = 8236,
  [SMALL_STATE(192)] = 8267,
  [SMALL_STATE(193)] = 8298,
  [SMALL_STATE(194)] = 8329,
  [SMALL_STATE(195)] = 8360,
  [SMALL_STATE(196)] = 8391,
  [SMALL_STATE(197)] = 8422,
  [SMALL_STATE(198)] = 8453,
  [SMALL_STATE(199)] = 8484,
  [SMALL_STATE(200)] = 8515,
  [SMALL_STATE(201)] = 8544,
  [SMALL_STATE(202)] = 8575,
  [SMALL_STATE(203)] = 8606,
  [SMALL_STATE(204)] = 8637,
  [SMALL_STATE(205)] = 8668,
  [SMALL_STATE(206)] = 8699,
  [SMALL_STATE(207)] = 8730,
  [SMALL_STATE(208)] = 8761,
  [SMALL_STATE(209)] = 8792,
  [SMALL_STATE(210)] = 8823,
  [SMALL_STATE(211)] = 8854,
  [SMALL_STATE(212)] = 8885,
  [SMALL_STATE(213)] = 8916,
  [SMALL_STATE(214)] = 8947,
  [SMALL_STATE(215)] = 8978,
  [SMALL_STATE(216)] = 9009,
  [SMALL_STATE(217)] = 9040,
  [SMALL_STATE(218)] = 9071,
  [SMALL_STATE(219)] = 9102,
  [SMALL_STATE(220)] = 9133,
  [SMALL_STATE(221)] = 9157,
  [SMALL_STATE(222)] = 9181,
  [SMALL_STATE(223)] = 9201,
  [SMALL_STATE(224)] = 9216,
  [SMALL_STATE(225)] = 9231,
  [SMALL_STATE(226)] = 9244,
  [SMALL_STATE(227)] = 9257,
  [SMALL_STATE(228)] = 9270,
  [SMALL_STATE(229)] = 9283,
  [SMALL_STATE(230)] = 9296,
  [SMALL_STATE(231)] = 9311,
  [SMALL_STATE(232)] = 9326,
  [SMALL_STATE(233)] = 9341,
  [SMALL_STATE(234)] = 9354,
  [SMALL_STATE(235)] = 9367,
  [SMALL_STATE(236)] = 9380,
  [SMALL_STATE(237)] = 9393,
  [SMALL_STATE(238)] = 9406,
  [SMALL_STATE(239)] = 9426,
  [SMALL_STATE(240)] = 9446,
  [SMALL_STATE(241)] = 9457,
  [SMALL_STATE(242)] = 9468,
  [SMALL_STATE(243)] = 9479,
  [SMALL_STATE(244)] = 9490,
  [SMALL_STATE(245)] = 9501,
  [SMALL_STATE(246)] = 9512,
  [SMALL_STATE(247)] = 9523,
  [SMALL_STATE(248)] = 9534,
  [SMALL_STATE(249)] = 9545,
  [SMALL_STATE(250)] = 9556,
  [SMALL_STATE(251)] = 9567,
  [SMALL_STATE(252)] = 9578,
  [SMALL_STATE(253)] = 9589,
  [SMALL_STATE(254)] = 9600,
  [SMALL_STATE(255)] = 9611,
  [SMALL_STATE(256)] = 9622,
  [SMALL_STATE(257)] = 9633,
  [SMALL_STATE(258)] = 9644,
  [SMALL_STATE(259)] = 9655,
  [SMALL_STATE(260)] = 9666,
  [SMALL_STATE(261)] = 9677,
  [SMALL_STATE(262)] = 9688,
  [SMALL_STATE(263)] = 9699,
  [SMALL_STATE(264)] = 9710,
  [SMALL_STATE(265)] = 9721,
  [SMALL_STATE(266)] = 9732,
  [SMALL_STATE(267)] = 9743,
  [SMALL_STATE(268)] = 9759,
  [SMALL_STATE(269)] = 9775,
  [SMALL_STATE(270)] = 9791,
  [SMALL_STATE(271)] = 9807,
  [SMALL_STATE(272)] = 9823,
  [SMALL_STATE(273)] = 9839,
  [SMALL_STATE(274)] = 9855,
  [SMALL_STATE(275)] = 9871,
  [SMALL_STATE(276)] = 9887,
  [SMALL_STATE(277)] = 9903,
  [SMALL_STATE(278)] = 9919,
  [SMALL_STATE(279)] = 9935,
  [SMALL_STATE(280)] = 9951,
  [SMALL_STATE(281)] = 9964,
  [SMALL_STATE(282)] = 9977,
  [SMALL_STATE(283)] = 9990,
  [SMALL_STATE(284)] = 10003,
  [SMALL_STATE(285)] = 10016,
  [SMALL_STATE(286)] = 10029,
  [SMALL_STATE(287)] = 10042,
  [SMALL_STATE(288)] = 10055,
  [SMALL_STATE(289)] = 10068,
  [SMALL_STATE(290)] = 10081,
  [SMALL_STATE(291)] = 10092,
  [SMALL_STATE(292)] = 10105,
  [SMALL_STATE(293)] = 10114,
  [SMALL_STATE(294)] = 10127,
  [SMALL_STATE(295)] = 10140,
  [SMALL_STATE(296)] = 10151,
  [SMALL_STATE(297)] = 10162,
  [SMALL_STATE(298)] = 10175,
  [SMALL_STATE(299)] = 10188,
  [SMALL_STATE(300)] = 10201,
  [SMALL_STATE(301)] = 10214,
  [SMALL_STATE(302)] = 10227,
  [SMALL_STATE(303)] = 10240,
  [SMALL_STATE(304)] = 10253,
  [SMALL_STATE(305)] = 10266,
  [SMALL_STATE(306)] = 10279,
  [SMALL_STATE(307)] = 10292,
  [SMALL_STATE(308)] = 10305,
  [SMALL_STATE(309)] = 10318,
  [SMALL_STATE(310)] = 10331,
  [SMALL_STATE(311)] = 10344,
  [SMALL_STATE(312)] = 10357,
  [SMALL_STATE(313)] = 10370,
  [SMALL_STATE(314)] = 10383,
  [SMALL_STATE(315)] = 10396,
  [SMALL_STATE(316)] = 10409,
  [SMALL_STATE(317)] = 10422,
  [SMALL_STATE(318)] = 10435,
  [SMALL_STATE(319)] = 10448,
  [SMALL_STATE(320)] = 10461,
  [SMALL_STATE(321)] = 10474,
  [SMALL_STATE(322)] = 10487,
  [SMALL_STATE(323)] = 10500,
  [SMALL_STATE(324)] = 10513,
  [SMALL_STATE(325)] = 10526,
  [SMALL_STATE(326)] = 10539,
  [SMALL_STATE(327)] = 10552,
  [SMALL_STATE(328)] = 10565,
  [SMALL_STATE(329)] = 10578,
  [SMALL_STATE(330)] = 10591,
  [SMALL_STATE(331)] = 10604,
  [SMALL_STATE(332)] = 10617,
  [SMALL_STATE(333)] = 10626,
  [SMALL_STATE(334)] = 10639,
  [SMALL_STATE(335)] = 10652,
  [SMALL_STATE(336)] = 10665,
  [SMALL_STATE(337)] = 10675,
  [SMALL_STATE(338)] = 10685,
  [SMALL_STATE(339)] = 10695,
  [SMALL_STATE(340)] = 10705,
  [SMALL_STATE(341)] = 10715,
  [SMALL_STATE(342)] = 10725,
  [SMALL_STATE(343)] = 10735,
  [SMALL_STATE(344)] = 10745,
  [SMALL_STATE(345)] = 10755,
  [SMALL_STATE(346)] = 10765,
  [SMALL_STATE(347)] = 10773,
  [SMALL_STATE(348)] = 10783,
  [SMALL_STATE(349)] = 10791,
  [SMALL_STATE(350)] = 10801,
  [SMALL_STATE(351)] = 10811,
  [SMALL_STATE(352)] = 10821,
  [SMALL_STATE(353)] = 10831,
  [SMALL_STATE(354)] = 10839,
  [SMALL_STATE(355)] = 10849,
  [SMALL_STATE(356)] = 10859,
  [SMALL_STATE(357)] = 10869,
  [SMALL_STATE(358)] = 10879,
  [SMALL_STATE(359)] = 10889,
  [SMALL_STATE(360)] = 10899,
  [SMALL_STATE(361)] = 10907,
  [SMALL_STATE(362)] = 10917,
  [SMALL_STATE(363)] = 10925,
  [SMALL_STATE(364)] = 10935,
  [SMALL_STATE(365)] = 10943,
  [SMALL_STATE(366)] = 10950,
  [SMALL_STATE(367)] = 10957,
  [SMALL_STATE(368)] = 10964,
  [SMALL_STATE(369)] = 10971,
  [SMALL_STATE(370)] = 10978,
  [SMALL_STATE(371)] = 10985,
  [SMALL_STATE(372)] = 10992,
  [SMALL_STATE(373)] = 10999,
  [SMALL_STATE(374)] = 11006,
  [SMALL_STATE(375)] = 11013,
  [SMALL_STATE(376)] = 11020,
  [SMALL_STATE(377)] = 11027,
  [SMALL_STATE(378)] = 11034,
  [SMALL_STATE(379)] = 11041,
  [SMALL_STATE(380)] = 11048,
  [SMALL_STATE(381)] = 11055,
  [SMALL_STATE(382)] = 11062,
  [SMALL_STATE(383)] = 11069,
  [SMALL_STATE(384)] = 11076,
  [SMALL_STATE(385)] = 11083,
  [SMALL_STATE(386)] = 11090,
  [SMALL_STATE(387)] = 11097,
  [SMALL_STATE(388)] = 11104,
  [SMALL_STATE(389)] = 11111,
  [SMALL_STATE(390)] = 11118,
  [SMALL_STATE(391)] = 11125,
  [SMALL_STATE(392)] = 11132,
  [SMALL_STATE(393)] = 11139,
  [SMALL_STATE(394)] = 11146,
  [SMALL_STATE(395)] = 11153,
  [SMALL_STATE(396)] = 11160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(343),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(98),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(77),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(87),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(368),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(367),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(66),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(74),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(131),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(135),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(139),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(126),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(132),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(80),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(269),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_path_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(363),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 1, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 1, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_expr, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_expr, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 7),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expr, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_array_ptr, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_array_ptr, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ptr, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ptr, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expr, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expr, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3, .production_id = 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expr, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_literal, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 5, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 5, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(92),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(14),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(48),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(54),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(47),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(46),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(43),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(70),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(275),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(349),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_if, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_expr, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_expr, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_continue, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_continue, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_break, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_break, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_return, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_return, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_assignment, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_assignment, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_return, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_return, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_if, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_while, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_while, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(352),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(341),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(344),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 9),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 5, .production_id = 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 13, .production_id = 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 12, .production_id = 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 9, .production_id = 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 8),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 14),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 13),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 7),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 6, .production_id = 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 12, .production_id = 15),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 11, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 7, .production_id = 6),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 10),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 12),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 10, .production_id = 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 8, .production_id = 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 11),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, .production_id = 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(273),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(257),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2), SHIFT_REPEAT(356),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2), SHIFT_REPEAT(189),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2), SHIFT_REPEAT(339),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2), SHIFT_REPEAT(186),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(347),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(359),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [861] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
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
