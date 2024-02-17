#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 567
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_AT = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_struct = 6,
  anon_sym_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_COLON = 11,
  anon_sym_RBRACE = 12,
  anon_sym_let = 13,
  anon_sym_EQ = 14,
  anon_sym_fn = 15,
  anon_sym_while = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  anon_sym_continue = 19,
  anon_sym_break = 20,
  anon_sym_return = 21,
  aux_sym_type_identifier_token1 = 22,
  anon_sym_STAR = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_COLON_COLON = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_null = 29,
  aux_sym_num_literal_token1 = 30,
  aux_sym_char_literal_token1 = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_LT_LT = 36,
  anon_sym_GT_GT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_EQ_EQ = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_AMP = 42,
  anon_sym_CARET = 43,
  anon_sym_PIPE = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_as = 47,
  anon_sym_TILDE = 48,
  anon_sym_BANG = 49,
  anon_sym_DOT = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_string_literal_token1 = 52,
  anon_sym_BSLASH = 53,
  aux_sym_string_literal_token2 = 54,
  aux_sym_string_literal_token3 = 55,
  aux_sym_string_literal_token4 = 56,
  aux_sym_string_literal_token5 = 57,
  aux_sym_string_literal_token6 = 58,
  sym_comment = 59,
  sym_source_file = 60,
  sym_item = 61,
  sym_import = 62,
  sym_annotation = 63,
  sym_struct_declaration = 64,
  sym_type_parameter = 65,
  sym_let_declaration = 66,
  sym_func_declaration = 67,
  sym_stmt_block = 68,
  sym_stmt_expr = 69,
  sym_stmt_assignment = 70,
  sym_stmt_while = 71,
  sym_stmt_if = 72,
  sym_stmt_continue = 73,
  sym_stmt_break = 74,
  sym_stmt_return = 75,
  sym_stmt = 76,
  sym_type_expr = 77,
  sym_type_identifier = 78,
  sym_type_fn = 79,
  sym_type_ptr = 80,
  sym_type_array_ptr = 81,
  sym_type_path = 82,
  sym_type_arguments = 83,
  sym_value_expr = 84,
  sym_true = 85,
  sym_false = 86,
  sym_null = 87,
  sym_num_literal = 88,
  sym_char_literal = 89,
  sym_bin_expr = 90,
  sym_cast_expr = 91,
  sym_unary_expr = 92,
  sym_value_path = 93,
  sym_call_expr = 94,
  sym_index_expr = 95,
  sym_selection_expr = 96,
  sym_deref_expr = 97,
  sym_struct_literal = 98,
  sym_field_identifier = 99,
  sym_identifier = 100,
  sym_string_literal = 101,
  aux_sym_source_file_repeat1 = 102,
  aux_sym_import_repeat1 = 103,
  aux_sym_annotation_repeat1 = 104,
  aux_sym_struct_declaration_repeat1 = 105,
  aux_sym_struct_declaration_repeat2 = 106,
  aux_sym_type_parameter_repeat1 = 107,
  aux_sym_func_declaration_repeat1 = 108,
  aux_sym_stmt_block_repeat1 = 109,
  aux_sym_type_fn_repeat1 = 110,
  aux_sym_call_expr_repeat1 = 111,
  aux_sym_struct_literal_repeat1 = 112,
  aux_sym_string_literal_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_annotation] = "annotation",
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
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_struct_declaration_repeat2] = "struct_declaration_repeat2",
  [aux_sym_type_parameter_repeat1] = "type_parameter_repeat1",
  [aux_sym_func_declaration_repeat1] = "func_declaration_repeat1",
  [aux_sym_stmt_block_repeat1] = "stmt_block_repeat1",
  [aux_sym_type_fn_repeat1] = "type_fn_repeat1",
  [aux_sym_call_expr_repeat1] = "call_expr_repeat1",
  [aux_sym_struct_literal_repeat1] = "struct_literal_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_annotation] = sym_annotation,
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
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_struct_declaration_repeat2] = aux_sym_struct_declaration_repeat2,
  [aux_sym_type_parameter_repeat1] = aux_sym_type_parameter_repeat1,
  [aux_sym_func_declaration_repeat1] = aux_sym_func_declaration_repeat1,
  [aux_sym_stmt_block_repeat1] = aux_sym_stmt_block_repeat1,
  [aux_sym_type_fn_repeat1] = aux_sym_type_fn_repeat1,
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
  [anon_sym_AT] = {
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
  [sym_annotation] = {
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
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat1] = {
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
  field_at = 2,
  field_function = 3,
  field_name = 4,
  field_package = 5,
  field_parameters = 6,
  field_result = 7,
  field_type_params = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_at] = "at",
  [field_function] = "function",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameters] = "parameters",
  [field_result] = "result",
  [field_type_params] = "type_params",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 4},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 5},
  [15] = {.index = 32, .length = 5},
  [16] = {.index = 37, .length = 4},
  [17] = {.index = 41, .length = 4},
  [18] = {.index = 45, .length = 6},
  [19] = {.index = 51, .length = 6},
  [20] = {.index = 57, .length = 5},
  [21] = {.index = 62, .length = 5},
  [22] = {.index = 67, .length = 7},
  [23] = {.index = 74, .length = 7},
  [24] = {.index = 81, .length = 6},
  [25] = {.index = 87, .length = 6},
  [26] = {.index = 93, .length = 8},
  [27] = {.index = 101, .length = 7},
  [28] = {.index = 108, .length = 7},
  [29] = {.index = 115, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_at, 0},
    {field_name, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
  [4] =
    {field_name, 2},
  [5] =
    {field_function, 0},
  [6] =
    {field_name, 2},
    {field_package, 0},
  [8] =
    {field_name, 1},
    {field_type_params, 2},
  [10] =
    {field_array, 0},
  [11] =
    {field_name, 1},
    {field_result, 4},
    {field_result, 5},
  [14] =
    {field_name, 2},
    {field_type_params, 3},
  [16] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [20] =
    {field_name, 1},
    {field_result, 5},
    {field_result, 6},
    {field_type_params, 2},
  [24] =
    {field_name, 2},
    {field_result, 5},
    {field_result, 6},
  [27] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
  [32] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_type_params, 2},
  [37] =
    {field_name, 2},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
  [41] =
    {field_name, 2},
    {field_result, 6},
    {field_result, 7},
    {field_type_params, 3},
  [45] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_result, 7},
    {field_result, 8},
  [51] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_type_params, 2},
  [57] =
    {field_name, 2},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
  [62] =
    {field_name, 2},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_type_params, 3},
  [67] =
    {field_name, 1},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
  [74] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
    {field_type_params, 2},
  [81] =
    {field_name, 2},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_result, 8},
    {field_result, 9},
  [87] =
    {field_name, 2},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_parameters, 8},
    {field_type_params, 3},
  [93] =
    {field_name, 1},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_result, 9},
    {field_result, 10},
    {field_type_params, 2},
  [101] =
    {field_name, 2},
    {field_parameters, 4},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_result, 9},
    {field_result, 10},
  [108] =
    {field_name, 2},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_result, 9},
    {field_result, 10},
    {field_type_params, 3},
  [115] =
    {field_name, 2},
    {field_parameters, 5},
    {field_parameters, 6},
    {field_parameters, 7},
    {field_parameters, 8},
    {field_result, 10},
    {field_result, 11},
    {field_type_params, 3},
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
  [5] = 3,
  [6] = 4,
  [7] = 4,
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
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 68,
  [70] = 15,
  [71] = 17,
  [72] = 21,
  [73] = 9,
  [74] = 22,
  [75] = 75,
  [76] = 30,
  [77] = 58,
  [78] = 53,
  [79] = 16,
  [80] = 12,
  [81] = 11,
  [82] = 52,
  [83] = 83,
  [84] = 83,
  [85] = 19,
  [86] = 56,
  [87] = 13,
  [88] = 14,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 50,
  [93] = 93,
  [94] = 51,
  [95] = 62,
  [96] = 96,
  [97] = 54,
  [98] = 89,
  [99] = 46,
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
  [111] = 55,
  [112] = 63,
  [113] = 102,
  [114] = 26,
  [115] = 60,
  [116] = 57,
  [117] = 18,
  [118] = 118,
  [119] = 44,
  [120] = 29,
  [121] = 27,
  [122] = 122,
  [123] = 107,
  [124] = 59,
  [125] = 96,
  [126] = 90,
  [127] = 122,
  [128] = 100,
  [129] = 101,
  [130] = 103,
  [131] = 104,
  [132] = 105,
  [133] = 106,
  [134] = 107,
  [135] = 108,
  [136] = 109,
  [137] = 110,
  [138] = 138,
  [139] = 138,
  [140] = 25,
  [141] = 24,
  [142] = 110,
  [143] = 32,
  [144] = 33,
  [145] = 83,
  [146] = 91,
  [147] = 31,
  [148] = 35,
  [149] = 38,
  [150] = 100,
  [151] = 101,
  [152] = 103,
  [153] = 104,
  [154] = 105,
  [155] = 61,
  [156] = 106,
  [157] = 47,
  [158] = 48,
  [159] = 49,
  [160] = 23,
  [161] = 109,
  [162] = 20,
  [163] = 108,
  [164] = 164,
  [165] = 165,
  [166] = 42,
  [167] = 34,
  [168] = 43,
  [169] = 45,
  [170] = 41,
  [171] = 40,
  [172] = 39,
  [173] = 37,
  [174] = 36,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 40,
  [186] = 41,
  [187] = 42,
  [188] = 43,
  [189] = 34,
  [190] = 190,
  [191] = 45,
  [192] = 192,
  [193] = 192,
  [194] = 194,
  [195] = 194,
  [196] = 13,
  [197] = 181,
  [198] = 184,
  [199] = 199,
  [200] = 37,
  [201] = 39,
  [202] = 183,
  [203] = 36,
  [204] = 199,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 206,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 207,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 226,
  [228] = 226,
  [229] = 226,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 230,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 235,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 236,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 232,
  [248] = 248,
  [249] = 249,
  [250] = 240,
  [251] = 251,
  [252] = 234,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 255,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 237,
  [267] = 237,
  [268] = 236,
  [269] = 269,
  [270] = 270,
  [271] = 240,
  [272] = 232,
  [273] = 230,
  [274] = 274,
  [275] = 231,
  [276] = 276,
  [277] = 277,
  [278] = 234,
  [279] = 234,
  [280] = 239,
  [281] = 281,
  [282] = 236,
  [283] = 230,
  [284] = 248,
  [285] = 237,
  [286] = 286,
  [287] = 232,
  [288] = 10,
  [289] = 22,
  [290] = 16,
  [291] = 31,
  [292] = 24,
  [293] = 17,
  [294] = 294,
  [295] = 54,
  [296] = 11,
  [297] = 21,
  [298] = 52,
  [299] = 299,
  [300] = 15,
  [301] = 25,
  [302] = 63,
  [303] = 38,
  [304] = 51,
  [305] = 50,
  [306] = 207,
  [307] = 210,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 220,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 218,
  [334] = 206,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 211,
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
  [355] = 10,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 359,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 364,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 365,
  [380] = 380,
  [381] = 381,
  [382] = 16,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 17,
  [387] = 15,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 392,
  [420] = 420,
  [421] = 414,
  [422] = 422,
  [423] = 423,
  [424] = 400,
  [425] = 403,
  [426] = 426,
  [427] = 420,
  [428] = 398,
  [429] = 429,
  [430] = 430,
  [431] = 21,
  [432] = 432,
  [433] = 384,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 414,
  [441] = 441,
  [442] = 422,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 403,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 422,
  [453] = 453,
  [454] = 454,
  [455] = 437,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 400,
  [461] = 461,
  [462] = 439,
  [463] = 463,
  [464] = 464,
  [465] = 403,
  [466] = 466,
  [467] = 467,
  [468] = 422,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 480,
  [493] = 493,
  [494] = 494,
  [495] = 488,
  [496] = 496,
  [497] = 497,
  [498] = 484,
  [499] = 499,
  [500] = 500,
  [501] = 485,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 490,
  [506] = 506,
  [507] = 507,
  [508] = 484,
  [509] = 509,
  [510] = 510,
  [511] = 502,
  [512] = 481,
  [513] = 513,
  [514] = 491,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 484,
  [519] = 18,
  [520] = 520,
  [521] = 14,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 527,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 524,
  [541] = 529,
  [542] = 530,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 549,
  [552] = 552,
  [553] = 553,
  [554] = 530,
  [555] = 555,
  [556] = 556,
  [557] = 524,
  [558] = 524,
  [559] = 559,
  [560] = 527,
  [561] = 561,
  [562] = 530,
  [563] = 529,
  [564] = 564,
  [565] = 565,
  [566] = 529,
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
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '^') ADVANCE(197);
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
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '~') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '~') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '~') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (aux_sym_type_identifier_token1_character_set_1(lookahead)) ADVANCE(166);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '~') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '~') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '~') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(185);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym_type_identifier_token1_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(223);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(170);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(180);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(118);
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
      if (lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(175);
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
      if (lookahead == 'n') ADVANCE(126);
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
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(100);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 69:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(180);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
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
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(170);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_let);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_fn);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_continue);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_break);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_return);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(143);
      if (aux_sym_type_identifier_token1_character_set_4(lookahead)) ADVANCE(166);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(142);
      if (aux_sym_type_identifier_token1_character_set_4(lookahead)) ADVANCE(166);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(174);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'f') ADVANCE(119);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'i') ADVANCE(151);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'i') ADVANCE(146);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'k') ADVANCE(125);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(176);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(144);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'l') ADVANCE(158);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(127);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(115);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'n') ADVANCE(165);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'o') ADVANCE(150);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(136);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(164);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'r') ADVANCE(148);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(202);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(132);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 's') ADVANCE(135);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 't') ADVANCE(111);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 't') ADVANCE(140);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 't') ADVANCE(163);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(145);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(155);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(131);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'u') ADVANCE(134);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_false);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_null);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_num_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_type_identifier_token1_character_set_3(lookahead)) ADVANCE(166);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != 'U' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_literal_token4);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_literal_token5);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_literal_token6);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
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
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
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
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
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
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 5},
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
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 14},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 3},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 3},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 3},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 11},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 3},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 5},
  [387] = {.lex_state = 5},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 11},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 11},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 4},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 11},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 4},
  [415] = {.lex_state = 4},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 4},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 11},
  [421] = {.lex_state = 4},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 11},
  [424] = {.lex_state = 4},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 11},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 4},
  [431] = {.lex_state = 5},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 11},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 11},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 11},
  [440] = {.lex_state = 4},
  [441] = {.lex_state = 4},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 11},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 11},
  [454] = {.lex_state = 11},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 11},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 11},
  [459] = {.lex_state = 4},
  [460] = {.lex_state = 4},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 11},
  [463] = {.lex_state = 11},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 11},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 4},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 11},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 3},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 11},
  [485] = {.lex_state = 3},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 11},
  [490] = {.lex_state = 11},
  [491] = {.lex_state = 11},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 11},
  [494] = {.lex_state = 4},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 11},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 11},
  [499] = {.lex_state = 11},
  [500] = {.lex_state = 11},
  [501] = {.lex_state = 3},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 4},
  [504] = {.lex_state = 11},
  [505] = {.lex_state = 11},
  [506] = {.lex_state = 11},
  [507] = {.lex_state = 11},
  [508] = {.lex_state = 11},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 11},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 3},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 11},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 11},
  [517] = {.lex_state = 11},
  [518] = {.lex_state = 11},
  [519] = {.lex_state = 4},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 4},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 3},
  [526] = {.lex_state = 3},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 3},
  [532] = {.lex_state = 3},
  [533] = {.lex_state = 3},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 3},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 3},
  [538] = {.lex_state = 3},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 3},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 3},
  [550] = {.lex_state = 3},
  [551] = {.lex_state = 3},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 3},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 3},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 3},
  [566] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(534),
    [sym_item] = STATE(223),
    [sym_import] = STATE(347),
    [sym_annotation] = STATE(294),
    [sym_struct_declaration] = STATE(347),
    [sym_let_declaration] = STATE(347),
    [sym_func_declaration] = STATE(347),
    [aux_sym_source_file_repeat1] = STATE(223),
    [aux_sym_import_repeat1] = STATE(294),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(20), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_continue,
    ACTIONS(40), 1,
      anon_sym_break,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_true,
    ACTIONS(52), 1,
      anon_sym_false,
    ACTIONS(55), 1,
      anon_sym_null,
    ACTIONS(58), 1,
      aux_sym_num_literal_token1,
    ACTIONS(61), 1,
      aux_sym_char_literal_token1,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(2), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(64), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [105] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      anon_sym_continue,
    ACTIONS(84), 1,
      anon_sym_break,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(4), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [210] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      anon_sym_continue,
    ACTIONS(84), 1,
      anon_sym_break,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(2), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [315] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      anon_sym_continue,
    ACTIONS(84), 1,
      anon_sym_break,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(6), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [420] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      anon_sym_continue,
    ACTIONS(84), 1,
      anon_sym_break,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(2), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [525] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      anon_sym_continue,
    ACTIONS(84), 1,
      anon_sym_break,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(2), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [630] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      anon_sym_continue,
    ACTIONS(84), 1,
      anon_sym_break,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(180), 1,
      sym_value_expr,
    STATE(7), 2,
      sym_stmt,
      aux_sym_stmt_block_repeat1,
    STATE(380), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(213), 9,
      sym_let_declaration,
      sym_stmt_block,
      sym_stmt_expr,
      sym_stmt_assignment,
      sym_stmt_while,
      sym_stmt_if,
      sym_stmt_continue,
      sym_stmt_break,
      sym_stmt_return,
    STATE(86), 14,
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
  [735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COLON_COLON,
    ACTIONS(116), 12,
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
    ACTIONS(114), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      sym_type_arguments,
    ACTIONS(122), 12,
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
    ACTIONS(120), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 12,
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
    ACTIONS(126), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COLON_COLON,
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
    ACTIONS(130), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 12,
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
    ACTIONS(136), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 12,
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
    ACTIONS(142), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [1001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
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
    ACTIONS(146), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(63), 1,
      sym_type_arguments,
    ACTIONS(154), 12,
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
    ACTIONS(152), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(158), 12,
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
    ACTIONS(156), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 12,
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
    ACTIONS(162), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(166), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 12,
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
    ACTIONS(170), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
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
  [1259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(176), 12,
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
    ACTIONS(174), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1303] = 3,
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
    ACTIONS(180), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1345] = 3,
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
    ACTIONS(184), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1386] = 3,
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
    ACTIONS(188), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1427] = 3,
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
    ACTIONS(192), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1468] = 3,
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
    ACTIONS(196), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1509] = 3,
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
    ACTIONS(200), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1550] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      anon_sym_CARET,
    ACTIONS(232), 1,
      anon_sym_PIPE,
    ACTIONS(234), 1,
      anon_sym_AMP_AMP,
    ACTIONS(236), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(206), 5,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
    ACTIONS(212), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 12,
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
    ACTIONS(242), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 12,
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
    ACTIONS(246), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 12,
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
    ACTIONS(250), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 12,
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
    ACTIONS(254), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1789] = 3,
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
    ACTIONS(258), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1830] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(264), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(264), 10,
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
    ACTIONS(262), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1936] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 17,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1989] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 9,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2044] = 3,
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
    ACTIONS(266), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2085] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 7,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2146] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 7,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2209] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 6,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2274] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      anon_sym_CARET,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 6,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_PIPE,
      anon_sym_BANG,
    ACTIONS(262), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2341] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      anon_sym_CARET,
    ACTIONS(232), 1,
      anon_sym_PIPE,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
    ACTIONS(262), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2410] = 3,
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
    ACTIONS(270), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2451] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      anon_sym_CARET,
    ACTIONS(232), 1,
      anon_sym_PIPE,
    ACTIONS(234), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_as,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(220), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(224), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 5,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_BANG,
    ACTIONS(262), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE,
      anon_sym_DQUOTE,
  [2522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(276), 11,
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
    ACTIONS(274), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2569] = 3,
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
    ACTIONS(278), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 12,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2651] = 3,
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
    ACTIONS(286), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2692] = 3,
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
    ACTIONS(290), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2733] = 3,
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
    ACTIONS(294), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2774] = 3,
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
    ACTIONS(298), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2815] = 3,
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
    ACTIONS(302), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 12,
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
    ACTIONS(174), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2897] = 3,
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
    ACTIONS(306), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 12,
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
    ACTIONS(136), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 12,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3020] = 3,
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
    ACTIONS(314), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3061] = 3,
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
    ACTIONS(318), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3102] = 3,
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
    ACTIONS(322), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3143] = 3,
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
    ACTIONS(326), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 12,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 12,
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
    ACTIONS(334), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3266] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(346), 1,
      anon_sym_true,
    ACTIONS(349), 1,
      anon_sym_false,
    ACTIONS(352), 1,
      anon_sym_null,
    ACTIONS(355), 1,
      aux_sym_num_literal_token1,
    ACTIONS(358), 1,
      aux_sym_char_literal_token1,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(28), 1,
      sym_value_expr,
    STATE(64), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(361), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [3331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COLON_COLON,
    STATE(149), 1,
      sym_type_arguments,
    ACTIONS(122), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3374] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(28), 1,
      sym_value_expr,
    STATE(68), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [3439] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(28), 1,
      sym_value_expr,
    STATE(69), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [3504] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(28), 1,
      sym_value_expr,
    STATE(64), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [3569] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(28), 1,
      sym_value_expr,
    STATE(64), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [3634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(148), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(146), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(158), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(156), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(176), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(174), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON_COLON,
    ACTIONS(116), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(114), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(180), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3832] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(182), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [3894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(246), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RBRACE,
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
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(314), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_DQUOTE,
  [3970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(302), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
      anon_sym_DQUOTE,
  [4008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      sym_type_arguments,
    ACTIONS(154), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(152), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
    ACTIONS(132), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(130), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(126), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(298), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4163] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(99), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4222] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(99), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(166), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(136), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(136), 22,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
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
  [4394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(142), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4431] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(176), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4490] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(181), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4549] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(192), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(290), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4645] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(190), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(294), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(330), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4778] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(195), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(174), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4874] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(175), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [4933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(276), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(274), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [4976] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(167), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5035] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(148), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5094] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(184), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5153] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(174), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5212] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(173), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5271] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(172), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5330] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(171), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5389] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(170), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5448] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(166), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5507] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(168), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5566] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(169), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(306), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(334), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5699] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(198), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(196), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(322), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(310), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(162), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [5906] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(179), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [5965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(270), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [6002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(242), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [6039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(200), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [6076] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(204), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6135] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(41), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [6194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(318), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [6231] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(194), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6290] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(197), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6349] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(199), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6408] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(189), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6467] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(148), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6526] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(196), 1,
      sym_value_path,
    STATE(203), 1,
      sym_value_expr,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6585] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(196), 1,
      sym_value_path,
    STATE(200), 1,
      sym_value_expr,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6644] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(196), 1,
      sym_value_path,
    STATE(201), 1,
      sym_value_expr,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6703] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(185), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6762] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(186), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6821] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(187), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6880] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(188), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6939] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(191), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [6998] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(202), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [7057] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(183), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [7116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(192), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(188), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7190] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(45), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(254), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(258), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7323] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(46), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7382] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(87), 1,
      sym_value_path,
    STATE(193), 1,
      sym_value_expr,
    ACTIONS(100), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [7441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(250), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7478] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(264), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(266), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7560] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(34), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7619] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(35), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7678] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(36), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7737] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(37), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7796] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(39), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(326), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7892] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(40), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [7951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(278), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [7988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(282), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [8025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(286), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [8062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(184), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [8099] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(43), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [8158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(170), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [8195] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(375), 1,
      anon_sym_true,
    ACTIONS(377), 1,
      anon_sym_false,
    ACTIONS(379), 1,
      anon_sym_null,
    ACTIONS(381), 1,
      aux_sym_num_literal_token1,
    ACTIONS(383), 1,
      aux_sym_char_literal_token1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value_path,
    STATE(42), 1,
      sym_value_expr,
    ACTIONS(385), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(56), 14,
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
  [8254] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(178), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [8313] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(90), 1,
      anon_sym_true,
    ACTIONS(92), 1,
      anon_sym_false,
    ACTIONS(94), 1,
      anon_sym_null,
    ACTIONS(96), 1,
      aux_sym_num_literal_token1,
    ACTIONS(98), 1,
      aux_sym_char_literal_token1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_identifier,
    STATE(177), 1,
      sym_value_expr,
    STATE(196), 1,
      sym_value_path,
    ACTIONS(407), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(86), 14,
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
  [8372] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(264), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8434] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(264), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8486] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8550] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [8616] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(264), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8676] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 3,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8734] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 3,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8790] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 14,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
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
  [8840] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
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
  [8888] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    STATE(455), 1,
      aux_sym_struct_literal_repeat1,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8955] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(437), 1,
      aux_sym_struct_literal_repeat1,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9022] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_AMP,
    ACTIONS(469), 1,
      anon_sym_CARET,
    ACTIONS(471), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_AMP_AMP,
    ACTIONS(475), 1,
      anon_sym_PIPE_PIPE,
    STATE(205), 1,
      sym_stmt_block,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9086] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_AMP,
    ACTIONS(469), 1,
      anon_sym_CARET,
    ACTIONS(471), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_AMP_AMP,
    ACTIONS(475), 1,
      anon_sym_PIPE_PIPE,
    STATE(219), 1,
      sym_stmt_block,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9150] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9212] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(481), 1,
      anon_sym_EQ,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9276] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9337] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9398] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9459] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9520] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 4,
      anon_sym_LBRACE,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9573] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_AMP,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 4,
      anon_sym_LBRACE,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9628] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_AMP,
    ACTIONS(469), 1,
      anon_sym_CARET,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 3,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9685] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_AMP,
    ACTIONS(469), 1,
      anon_sym_CARET,
    ACTIONS(471), 1,
      anon_sym_PIPE,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 3,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9742] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 8,
      anon_sym_LBRACE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9789] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9850] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(467), 1,
      anon_sym_AMP,
    ACTIONS(469), 1,
      anon_sym_CARET,
    ACTIONS(471), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_AMP_AMP,
    ACTIONS(262), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(465), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9909] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [9970] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10031] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10092] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(499), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(136), 18,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
  [10184] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10245] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10306] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10367] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 10,
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
  [10412] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(451), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(461), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(262), 6,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10463] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10524] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    ACTIONS(455), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(262), 12,
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
  [10567] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_as,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_AMP,
    ACTIONS(435), 1,
      anon_sym_CARET,
    ACTIONS(437), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      anon_sym_AMP_AMP,
    ACTIONS(445), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(429), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(431), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_else,
    ACTIONS(513), 10,
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
    ACTIONS(511), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(519), 11,
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
  [10690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
    ACTIONS(523), 11,
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
  [10720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 10,
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
    ACTIONS(517), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 10,
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
    ACTIONS(525), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 10,
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
    ACTIONS(529), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 10,
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
    ACTIONS(533), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 10,
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
    ACTIONS(521), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 10,
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
    ACTIONS(537), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 10,
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
    ACTIONS(541), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 10,
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
    ACTIONS(545), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 10,
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
    ACTIONS(549), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [10981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 10,
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
    ACTIONS(553), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 10,
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
    ACTIONS(557), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 10,
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
    ACTIONS(561), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 10,
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
    ACTIONS(565), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 10,
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
    ACTIONS(569), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 10,
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
    ACTIONS(573), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11155] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    STATE(224), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(294), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    STATE(347), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [11191] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 1,
      anon_sym_import,
    ACTIONS(584), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      anon_sym_struct,
    ACTIONS(590), 1,
      anon_sym_let,
    ACTIONS(593), 1,
      anon_sym_fn,
    STATE(224), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(294), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    STATE(347), 4,
      sym_import,
      sym_struct_declaration,
      sym_let_declaration,
      sym_func_declaration,
  [11227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 4,
      aux_sym_type_identifier_token1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    ACTIONS(341), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_num_literal_token1,
      aux_sym_char_literal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [11248] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(425), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11282] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_type_identifier,
    STATE(403), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11316] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_type_identifier,
    STATE(447), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11350] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_type_identifier,
    STATE(465), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11384] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(305), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11415] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_fn,
    ACTIONS(620), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(622), 1,
      anon_sym_STAR,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_type_identifier,
    STATE(47), 1,
      sym_type_expr,
    STATE(25), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11446] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(291), 1,
      sym_type_expr,
    STATE(355), 1,
      sym_type_identifier,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11477] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_type_expr,
    STATE(355), 1,
      sym_type_identifier,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11508] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(304), 1,
      sym_type_expr,
    STATE(355), 1,
      sym_type_identifier,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11539] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(355), 1,
      sym_type_identifier,
    STATE(417), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11570] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(295), 1,
      sym_type_expr,
    STATE(355), 1,
      sym_type_identifier,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11601] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(298), 1,
      sym_type_expr,
    STATE(355), 1,
      sym_type_identifier,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11632] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(417), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11663] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(355), 1,
      sym_type_identifier,
    STATE(424), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11694] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(527), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11725] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(355), 1,
      sym_type_identifier,
    STATE(460), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11756] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(295), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11787] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(470), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11818] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(466), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11849] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(464), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11880] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(474), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11911] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      anon_sym_fn,
    ACTIONS(636), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(638), 1,
      anon_sym_STAR,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_type_identifier,
    STATE(147), 1,
      sym_type_expr,
    STATE(140), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11942] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(492), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [11973] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(410), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12004] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(560), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12035] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(408), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12066] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(304), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12097] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(405), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12128] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(396), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12159] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(488), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12190] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(395), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(446), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12252] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(450), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(495), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12314] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(445), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12345] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(401), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12376] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(443), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12407] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(404), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12438] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(406), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12469] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(432), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12500] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      anon_sym_fn,
    ACTIONS(636), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(638), 1,
      anon_sym_STAR,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_type_identifier,
    STATE(82), 1,
      sym_type_expr,
    STATE(140), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12531] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(298), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12562] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      anon_sym_fn,
    ACTIONS(636), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(638), 1,
      anon_sym_STAR,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_type_identifier,
    STATE(97), 1,
      sym_type_expr,
    STATE(140), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(393), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12624] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(394), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12655] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(536), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12686] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(291), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12717] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_fn,
    ACTIONS(620), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(622), 1,
      anon_sym_STAR,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_type_identifier,
    STATE(50), 1,
      sym_type_expr,
    STATE(25), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12748] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(497), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12779] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      anon_sym_fn,
    ACTIONS(636), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(638), 1,
      anon_sym_STAR,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_type_identifier,
    STATE(157), 1,
      sym_type_expr,
    STATE(140), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12810] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(429), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12841] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(522), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12872] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      anon_sym_fn,
    ACTIONS(636), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(638), 1,
      anon_sym_STAR,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_type_identifier,
    STATE(94), 1,
      sym_type_expr,
    STATE(140), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12903] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_fn,
    ACTIONS(620), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(622), 1,
      anon_sym_STAR,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_type_identifier,
    STATE(51), 1,
      sym_type_expr,
    STATE(25), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12934] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(626), 1,
      anon_sym_fn,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
    STATE(355), 1,
      sym_type_identifier,
    STATE(400), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12965] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(399), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [12996] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_fn,
    ACTIONS(620), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(622), 1,
      anon_sym_STAR,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_type_identifier,
    STATE(54), 1,
      sym_type_expr,
    STATE(25), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [13027] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
    ACTIONS(634), 1,
      anon_sym_fn,
    ACTIONS(636), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(638), 1,
      anon_sym_STAR,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_type_identifier,
    STATE(92), 1,
      sym_type_expr,
    STATE(140), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [13058] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(480), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [13089] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_fn,
    ACTIONS(620), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(622), 1,
      anon_sym_STAR,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_type_identifier,
    STATE(52), 1,
      sym_type_expr,
    STATE(25), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [13120] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    ACTIONS(602), 1,
      anon_sym_fn,
    ACTIONS(604), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_type_identifier,
    STATE(402), 1,
      sym_type_expr,
    STATE(301), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [13151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      anon_sym_fn,
    ACTIONS(620), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(622), 1,
      anon_sym_STAR,
    ACTIONS(624), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_type_expr,
    STATE(25), 4,
      sym_type_fn,
      sym_type_ptr,
      sym_type_array_ptr,
      sym_type_path,
  [13182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LT,
    ACTIONS(644), 1,
      anon_sym_COLON_COLON,
    STATE(303), 1,
      sym_type_arguments,
    ACTIONS(120), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [13218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LT,
    STATE(302), 1,
      sym_type_arguments,
    ACTIONS(152), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(156), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13277] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(648), 1,
      anon_sym_import,
    ACTIONS(650), 1,
      anon_sym_struct,
    ACTIONS(652), 1,
      anon_sym_let,
    ACTIONS(654), 1,
      anon_sym_fn,
    STATE(299), 2,
      sym_annotation,
      aux_sym_import_repeat1,
  [13300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DQUOTE,
  [13326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COLON,
    ACTIONS(174), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_AT,
    STATE(299), 2,
      sym_annotation,
      aux_sym_import_repeat1,
    ACTIONS(658), 4,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COLON,
    ACTIONS(146), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [13451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [13991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [14003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [14015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [14027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [14039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LT,
    ACTIONS(753), 1,
      anon_sym_COLON_COLON,
    STATE(303), 1,
      sym_type_arguments,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14056] = 2,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(755), 5,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
      aux_sym_string_literal_token4,
      aux_sym_string_literal_token5,
      aux_sym_string_literal_token6,
  [14067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 5,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [14078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 5,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_struct,
      anon_sym_let,
      anon_sym_fn,
  [14089] = 5,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      aux_sym_string_literal_token1,
    ACTIONS(767), 1,
      anon_sym_BSLASH,
    STATE(371), 1,
      aux_sym_string_literal_repeat1,
  [14105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      anon_sym_COLON,
    STATE(329), 1,
      sym_stmt_block,
  [14121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(372), 2,
      sym_string_literal,
      aux_sym_annotation_repeat1,
  [14135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    ACTIONS(779), 1,
      anon_sym_COLON,
    STATE(335), 1,
      sym_stmt_block,
  [14151] = 5,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(765), 1,
      aux_sym_string_literal_token1,
    ACTIONS(767), 1,
      anon_sym_BSLASH,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
    STATE(371), 1,
      aux_sym_string_literal_repeat1,
  [14167] = 5,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_BSLASH,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    ACTIONS(785), 1,
      aux_sym_string_literal_token1,
    STATE(363), 1,
      aux_sym_string_literal_repeat1,
  [14183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_LT,
    ACTIONS(789), 1,
      aux_sym_type_identifier_token1,
    STATE(12), 1,
      sym_identifier,
    STATE(20), 1,
      sym_type_arguments,
  [14199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(793), 1,
      anon_sym_COLON,
    STATE(311), 1,
      sym_stmt_block,
  [14215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_COLON,
    STATE(350), 1,
      sym_stmt_block,
  [14231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(799), 1,
      anon_sym_if,
    STATE(214), 2,
      sym_stmt_block,
      sym_stmt_if,
  [14245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(361), 2,
      sym_string_literal,
      aux_sym_annotation_repeat1,
  [14259] = 5,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_BSLASH,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      aux_sym_string_literal_token1,
    STATE(359), 1,
      aux_sym_string_literal_repeat1,
  [14275] = 5,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 1,
      aux_sym_string_literal_token1,
    ACTIONS(812), 1,
      anon_sym_BSLASH,
    STATE(371), 1,
      aux_sym_string_literal_repeat1,
  [14291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    STATE(372), 2,
      sym_string_literal,
      aux_sym_annotation_repeat1,
  [14305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    ACTIONS(822), 1,
      anon_sym_COLON,
    STATE(353), 1,
      sym_stmt_block,
  [14321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(826), 1,
      anon_sym_COLON,
    STATE(319), 1,
      sym_stmt_block,
  [14337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_SEMI,
    ACTIONS(830), 1,
      anon_sym_COLON,
    STATE(325), 1,
      sym_stmt_block,
  [14353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    ACTIONS(834), 1,
      anon_sym_COLON,
    STATE(327), 1,
      sym_stmt_block,
  [14369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_COLON,
    STATE(331), 1,
      sym_stmt_block,
  [14385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_COLON,
    STATE(332), 1,
      sym_stmt_block,
  [14401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LT,
    ACTIONS(844), 1,
      aux_sym_type_identifier_token1,
    STATE(80), 1,
      sym_identifier,
    STATE(162), 1,
      sym_type_arguments,
  [14417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(846), 1,
      anon_sym_let,
    STATE(299), 2,
      sym_annotation,
      aux_sym_import_repeat1,
  [14431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    ACTIONS(850), 1,
      anon_sym_COLON,
    STATE(339), 1,
      sym_stmt_block,
  [14447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LT,
    STATE(302), 1,
      sym_type_arguments,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(346), 1,
      sym_stmt_block,
  [14477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(525), 1,
      sym_identifier,
  [14490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    STATE(533), 1,
      sym_field_identifier,
  [14503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_COLON,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [14538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [14551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_GT,
    STATE(390), 1,
      aux_sym_type_parameter_repeat1,
  [14564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_func_declaration_repeat1,
  [14577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_GT,
    STATE(392), 1,
      aux_sym_type_fn_repeat1,
  [14590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_func_declaration_repeat1,
  [14603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(321), 1,
      sym_stmt_block,
  [14616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(890), 1,
      anon_sym_SEMI,
    STATE(328), 1,
      sym_stmt_block,
  [14629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      aux_sym_func_declaration_repeat1,
  [14642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    STATE(561), 1,
      sym_field_identifier,
  [14655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(898), 1,
      anon_sym_STAR,
    STATE(49), 1,
      sym_field_identifier,
  [14668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    STATE(343), 1,
      sym_stmt_block,
  [14681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_GT,
    STATE(414), 1,
      aux_sym_type_fn_repeat1,
  [14694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      aux_sym_struct_declaration_repeat2,
  [14707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(337), 1,
      sym_stmt_block,
  [14720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_type_fn_repeat1,
  [14733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(916), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym_stmt_block,
  [14746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_struct_declaration_repeat2,
  [14759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(467), 1,
      aux_sym_struct_declaration_repeat2,
  [14772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_struct_declaration_repeat1,
  [14785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    STATE(312), 1,
      sym_stmt_block,
  [14798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(556), 1,
      sym_field_identifier,
  [14811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_func_declaration_repeat1,
  [14824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [14837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [14850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [14863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_GT,
    STATE(392), 1,
      aux_sym_type_fn_repeat1,
  [14876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_GT,
    STATE(430), 1,
      aux_sym_struct_declaration_repeat1,
  [14889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(416), 1,
      aux_sym_struct_literal_repeat1,
  [14902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [14911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(955), 1,
      anon_sym_GT,
    STATE(390), 1,
      aux_sym_type_parameter_repeat1,
  [14924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(419), 1,
      aux_sym_type_fn_repeat1,
  [14937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      sym_identifier,
  [14950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_GT,
    STATE(392), 1,
      aux_sym_type_fn_repeat1,
  [14963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_type_fn_repeat1,
  [14976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      sym_identifier,
  [14989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(968), 1,
      anon_sym_GT,
    STATE(421), 1,
      aux_sym_type_fn_repeat1,
  [15002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      aux_sym_type_fn_repeat1,
  [15015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [15028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    STATE(551), 1,
      sym_identifier,
  [15041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(976), 1,
      anon_sym_STAR,
    STATE(159), 1,
      sym_field_identifier,
  [15054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_struct_declaration_repeat2,
  [15067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_struct_declaration_repeat1,
  [15080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_COLON,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    STATE(351), 1,
      sym_stmt_block,
  [15104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    STATE(525), 1,
      sym_identifier,
  [15117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_func_declaration_repeat1,
  [15130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [15143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [15156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(416), 1,
      aux_sym_struct_literal_repeat1,
  [15169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(996), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [15182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(525), 1,
      sym_identifier,
  [15195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(998), 1,
      anon_sym_GT,
    STATE(392), 1,
      aux_sym_type_fn_repeat1,
  [15208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_GT,
    STATE(407), 1,
      aux_sym_struct_declaration_repeat1,
  [15221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_type_fn_repeat1,
  [15234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_struct_declaration_repeat2,
  [15247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_LPAREN,
    ACTIONS(1006), 1,
      anon_sym_LT,
    STATE(555), 1,
      sym_type_parameter,
  [15260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(341), 1,
      sym_stmt_block,
  [15273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
    STATE(316), 1,
      sym_stmt_block,
  [15286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      aux_sym_type_fn_repeat1,
  [15299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_func_declaration_repeat1,
  [15312] = 2,
    ACTIONS(757), 1,
      sym_comment,
    ACTIONS(807), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      anon_sym_BSLASH,
  [15321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(1019), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      sym_stmt_block,
  [15334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      sym_identifier,
  [15347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_type_fn_repeat1,
  [15360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    STATE(535), 1,
      sym_field_identifier,
  [15373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    STATE(532), 1,
      sym_field_identifier,
  [15386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    STATE(416), 1,
      aux_sym_struct_literal_repeat1,
  [15399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(544), 1,
      sym_field_identifier,
  [15412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [15425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      sym_identifier,
  [15438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_GT,
    STATE(418), 1,
      aux_sym_type_parameter_repeat1,
  [15451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_GT,
    STATE(440), 1,
      aux_sym_type_fn_repeat1,
  [15464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [15477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    STATE(525), 1,
      sym_identifier,
  [15490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_identifier,
  [15503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    STATE(426), 1,
      aux_sym_struct_declaration_repeat2,
  [15516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_type_fn_repeat1,
  [15529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      aux_sym_func_declaration_repeat1,
  [15542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [15555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      aux_sym_type_fn_repeat1,
  [15568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [15581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    STATE(308), 1,
      sym_stmt_block,
  [15594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_func_declaration_repeat1,
  [15607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [15620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_GT,
    STATE(441), 1,
      aux_sym_struct_declaration_repeat1,
  [15633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_LBRACE,
    ACTIONS(1067), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      sym_stmt_block,
  [15646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
    STATE(413), 1,
      aux_sym_struct_declaration_repeat2,
  [15659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_field_identifier,
  [15672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
    STATE(538), 1,
      sym_field_identifier,
  [15685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LT,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    STATE(543), 1,
      sym_type_parameter,
  [15698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_func_declaration_repeat1,
  [15711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(1077), 1,
      anon_sym_EQ,
  [15721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_COLON,
    ACTIONS(1081), 1,
      anon_sym_EQ,
  [15731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(523), 1,
      sym_identifier,
  [15741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(525), 1,
      sym_identifier,
  [15751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      aux_sym_type_identifier_token1,
    STATE(79), 1,
      sym_type_identifier,
  [15761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    ACTIONS(1087), 1,
      anon_sym_EQ,
  [15771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LT,
    ACTIONS(1091), 1,
      anon_sym_LBRACE,
  [15781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(547), 1,
      sym_string_literal,
  [15791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(1093), 1,
      anon_sym_EQ,
  [15801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(526), 1,
      sym_identifier,
  [15811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(501), 1,
      sym_identifier,
  [15821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(481), 1,
      sym_identifier,
  [15831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    ACTIONS(1095), 1,
      anon_sym_EQ,
  [15841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_type_identifier_token1,
    STATE(459), 1,
      sym_type_identifier,
  [15851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(1099), 1,
      anon_sym_EQ,
  [15869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_type_identifier_token1,
    STATE(533), 1,
      sym_field_identifier,
  [15879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_type_identifier_token1,
    STATE(382), 1,
      sym_type_identifier,
  [15897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(473), 1,
      sym_identifier,
  [15907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(415), 1,
      sym_identifier,
  [15917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_COLON,
    ACTIONS(1105), 1,
      anon_sym_EQ,
  [15927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LT,
    STATE(85), 1,
      sym_type_arguments,
  [15937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [15945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(478), 1,
      sym_identifier,
  [15955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(485), 1,
      sym_identifier,
  [15965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_type_identifier_token1,
    STATE(486), 1,
      sym_type_identifier,
  [15975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(487), 1,
      sym_identifier,
  [15985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      aux_sym_type_identifier_token1,
    STATE(16), 1,
      sym_type_identifier,
  [15995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(503), 1,
      sym_identifier,
  [16005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_type_identifier_token1,
    STATE(513), 1,
      sym_type_identifier,
  [16015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_type_arguments,
  [16025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COLON,
    ACTIONS(1111), 1,
      anon_sym_EQ,
  [16035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_LT,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
  [16045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(512), 1,
      sym_identifier,
  [16055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(444), 1,
      sym_identifier,
  [16065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_type_identifier_token1,
    STATE(520), 1,
      sym_identifier,
  [16075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_type_identifier_token1,
    STATE(494), 1,
      sym_type_identifier,
  [16085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_type_identifier_token1,
    STATE(290), 1,
      sym_type_identifier,
  [16095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [16103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(545), 1,
      sym_string_literal,
  [16113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [16121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
  [16136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
  [16143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_COLON,
  [16150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_COLON,
  [16157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
  [16164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LPAREN,
  [16171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
  [16178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_STAR,
  [16185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COLON,
  [16192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON,
  [16199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON,
  [16206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      ts_builtin_sym_end,
  [16213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COLON,
  [16220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
  [16227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_COLON,
  [16234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_COLON,
  [16241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_LBRACE,
  [16248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_RBRACK,
  [16255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
  [16262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_STAR,
  [16269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LPAREN,
  [16276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_COLON,
  [16283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
  [16290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_LBRACE,
  [16297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_SEMI,
  [16304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_LBRACE,
  [16311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_COLON,
  [16318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_COLON,
  [16325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON,
  [16332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_SEMI,
  [16339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_SEMI,
  [16346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_STAR,
  [16353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN,
  [16360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COLON,
  [16367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_RBRACK,
  [16374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_RBRACK,
  [16381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
  [16388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
  [16395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_COLON,
  [16402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_STAR,
  [16409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
  [16416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_LBRACE,
  [16423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_COLON,
  [16430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 780,
  [SMALL_STATE(11)] = 827,
  [SMALL_STATE(12)] = 870,
  [SMALL_STATE(13)] = 915,
  [SMALL_STATE(14)] = 959,
  [SMALL_STATE(15)] = 1001,
  [SMALL_STATE(16)] = 1045,
  [SMALL_STATE(17)] = 1089,
  [SMALL_STATE(18)] = 1133,
  [SMALL_STATE(19)] = 1175,
  [SMALL_STATE(20)] = 1217,
  [SMALL_STATE(21)] = 1259,
  [SMALL_STATE(22)] = 1303,
  [SMALL_STATE(23)] = 1345,
  [SMALL_STATE(24)] = 1386,
  [SMALL_STATE(25)] = 1427,
  [SMALL_STATE(26)] = 1468,
  [SMALL_STATE(27)] = 1509,
  [SMALL_STATE(28)] = 1550,
  [SMALL_STATE(29)] = 1625,
  [SMALL_STATE(30)] = 1666,
  [SMALL_STATE(31)] = 1707,
  [SMALL_STATE(32)] = 1748,
  [SMALL_STATE(33)] = 1789,
  [SMALL_STATE(34)] = 1830,
  [SMALL_STATE(35)] = 1887,
  [SMALL_STATE(36)] = 1936,
  [SMALL_STATE(37)] = 1989,
  [SMALL_STATE(38)] = 2044,
  [SMALL_STATE(39)] = 2085,
  [SMALL_STATE(40)] = 2146,
  [SMALL_STATE(41)] = 2209,
  [SMALL_STATE(42)] = 2274,
  [SMALL_STATE(43)] = 2341,
  [SMALL_STATE(44)] = 2410,
  [SMALL_STATE(45)] = 2451,
  [SMALL_STATE(46)] = 2522,
  [SMALL_STATE(47)] = 2569,
  [SMALL_STATE(48)] = 2610,
  [SMALL_STATE(49)] = 2651,
  [SMALL_STATE(50)] = 2692,
  [SMALL_STATE(51)] = 2733,
  [SMALL_STATE(52)] = 2774,
  [SMALL_STATE(53)] = 2815,
  [SMALL_STATE(54)] = 2856,
  [SMALL_STATE(55)] = 2897,
  [SMALL_STATE(56)] = 2938,
  [SMALL_STATE(57)] = 2979,
  [SMALL_STATE(58)] = 3020,
  [SMALL_STATE(59)] = 3061,
  [SMALL_STATE(60)] = 3102,
  [SMALL_STATE(61)] = 3143,
  [SMALL_STATE(62)] = 3184,
  [SMALL_STATE(63)] = 3225,
  [SMALL_STATE(64)] = 3266,
  [SMALL_STATE(65)] = 3331,
  [SMALL_STATE(66)] = 3374,
  [SMALL_STATE(67)] = 3439,
  [SMALL_STATE(68)] = 3504,
  [SMALL_STATE(69)] = 3569,
  [SMALL_STATE(70)] = 3634,
  [SMALL_STATE(71)] = 3674,
  [SMALL_STATE(72)] = 3714,
  [SMALL_STATE(73)] = 3754,
  [SMALL_STATE(74)] = 3794,
  [SMALL_STATE(75)] = 3832,
  [SMALL_STATE(76)] = 3894,
  [SMALL_STATE(77)] = 3932,
  [SMALL_STATE(78)] = 3970,
  [SMALL_STATE(79)] = 4008,
  [SMALL_STATE(80)] = 4048,
  [SMALL_STATE(81)] = 4088,
  [SMALL_STATE(82)] = 4126,
  [SMALL_STATE(83)] = 4163,
  [SMALL_STATE(84)] = 4222,
  [SMALL_STATE(85)] = 4281,
  [SMALL_STATE(86)] = 4318,
  [SMALL_STATE(87)] = 4355,
  [SMALL_STATE(88)] = 4394,
  [SMALL_STATE(89)] = 4431,
  [SMALL_STATE(90)] = 4490,
  [SMALL_STATE(91)] = 4549,
  [SMALL_STATE(92)] = 4608,
  [SMALL_STATE(93)] = 4645,
  [SMALL_STATE(94)] = 4704,
  [SMALL_STATE(95)] = 4741,
  [SMALL_STATE(96)] = 4778,
  [SMALL_STATE(97)] = 4837,
  [SMALL_STATE(98)] = 4874,
  [SMALL_STATE(99)] = 4933,
  [SMALL_STATE(100)] = 4976,
  [SMALL_STATE(101)] = 5035,
  [SMALL_STATE(102)] = 5094,
  [SMALL_STATE(103)] = 5153,
  [SMALL_STATE(104)] = 5212,
  [SMALL_STATE(105)] = 5271,
  [SMALL_STATE(106)] = 5330,
  [SMALL_STATE(107)] = 5389,
  [SMALL_STATE(108)] = 5448,
  [SMALL_STATE(109)] = 5507,
  [SMALL_STATE(110)] = 5566,
  [SMALL_STATE(111)] = 5625,
  [SMALL_STATE(112)] = 5662,
  [SMALL_STATE(113)] = 5699,
  [SMALL_STATE(114)] = 5758,
  [SMALL_STATE(115)] = 5795,
  [SMALL_STATE(116)] = 5832,
  [SMALL_STATE(117)] = 5869,
  [SMALL_STATE(118)] = 5906,
  [SMALL_STATE(119)] = 5965,
  [SMALL_STATE(120)] = 6002,
  [SMALL_STATE(121)] = 6039,
  [SMALL_STATE(122)] = 6076,
  [SMALL_STATE(123)] = 6135,
  [SMALL_STATE(124)] = 6194,
  [SMALL_STATE(125)] = 6231,
  [SMALL_STATE(126)] = 6290,
  [SMALL_STATE(127)] = 6349,
  [SMALL_STATE(128)] = 6408,
  [SMALL_STATE(129)] = 6467,
  [SMALL_STATE(130)] = 6526,
  [SMALL_STATE(131)] = 6585,
  [SMALL_STATE(132)] = 6644,
  [SMALL_STATE(133)] = 6703,
  [SMALL_STATE(134)] = 6762,
  [SMALL_STATE(135)] = 6821,
  [SMALL_STATE(136)] = 6880,
  [SMALL_STATE(137)] = 6939,
  [SMALL_STATE(138)] = 6998,
  [SMALL_STATE(139)] = 7057,
  [SMALL_STATE(140)] = 7116,
  [SMALL_STATE(141)] = 7153,
  [SMALL_STATE(142)] = 7190,
  [SMALL_STATE(143)] = 7249,
  [SMALL_STATE(144)] = 7286,
  [SMALL_STATE(145)] = 7323,
  [SMALL_STATE(146)] = 7382,
  [SMALL_STATE(147)] = 7441,
  [SMALL_STATE(148)] = 7478,
  [SMALL_STATE(149)] = 7523,
  [SMALL_STATE(150)] = 7560,
  [SMALL_STATE(151)] = 7619,
  [SMALL_STATE(152)] = 7678,
  [SMALL_STATE(153)] = 7737,
  [SMALL_STATE(154)] = 7796,
  [SMALL_STATE(155)] = 7855,
  [SMALL_STATE(156)] = 7892,
  [SMALL_STATE(157)] = 7951,
  [SMALL_STATE(158)] = 7988,
  [SMALL_STATE(159)] = 8025,
  [SMALL_STATE(160)] = 8062,
  [SMALL_STATE(161)] = 8099,
  [SMALL_STATE(162)] = 8158,
  [SMALL_STATE(163)] = 8195,
  [SMALL_STATE(164)] = 8254,
  [SMALL_STATE(165)] = 8313,
  [SMALL_STATE(166)] = 8372,
  [SMALL_STATE(167)] = 8434,
  [SMALL_STATE(168)] = 8486,
  [SMALL_STATE(169)] = 8550,
  [SMALL_STATE(170)] = 8616,
  [SMALL_STATE(171)] = 8676,
  [SMALL_STATE(172)] = 8734,
  [SMALL_STATE(173)] = 8790,
  [SMALL_STATE(174)] = 8840,
  [SMALL_STATE(175)] = 8888,
  [SMALL_STATE(176)] = 8955,
  [SMALL_STATE(177)] = 9022,
  [SMALL_STATE(178)] = 9086,
  [SMALL_STATE(179)] = 9150,
  [SMALL_STATE(180)] = 9212,
  [SMALL_STATE(181)] = 9276,
  [SMALL_STATE(182)] = 9337,
  [SMALL_STATE(183)] = 9398,
  [SMALL_STATE(184)] = 9459,
  [SMALL_STATE(185)] = 9520,
  [SMALL_STATE(186)] = 9573,
  [SMALL_STATE(187)] = 9628,
  [SMALL_STATE(188)] = 9685,
  [SMALL_STATE(189)] = 9742,
  [SMALL_STATE(190)] = 9789,
  [SMALL_STATE(191)] = 9850,
  [SMALL_STATE(192)] = 9909,
  [SMALL_STATE(193)] = 9970,
  [SMALL_STATE(194)] = 10031,
  [SMALL_STATE(195)] = 10092,
  [SMALL_STATE(196)] = 10153,
  [SMALL_STATE(197)] = 10184,
  [SMALL_STATE(198)] = 10245,
  [SMALL_STATE(199)] = 10306,
  [SMALL_STATE(200)] = 10367,
  [SMALL_STATE(201)] = 10412,
  [SMALL_STATE(202)] = 10463,
  [SMALL_STATE(203)] = 10524,
  [SMALL_STATE(204)] = 10567,
  [SMALL_STATE(205)] = 10628,
  [SMALL_STATE(206)] = 10660,
  [SMALL_STATE(207)] = 10690,
  [SMALL_STATE(208)] = 10720,
  [SMALL_STATE(209)] = 10749,
  [SMALL_STATE(210)] = 10778,
  [SMALL_STATE(211)] = 10807,
  [SMALL_STATE(212)] = 10836,
  [SMALL_STATE(213)] = 10865,
  [SMALL_STATE(214)] = 10894,
  [SMALL_STATE(215)] = 10923,
  [SMALL_STATE(216)] = 10952,
  [SMALL_STATE(217)] = 10981,
  [SMALL_STATE(218)] = 11010,
  [SMALL_STATE(219)] = 11039,
  [SMALL_STATE(220)] = 11068,
  [SMALL_STATE(221)] = 11097,
  [SMALL_STATE(222)] = 11126,
  [SMALL_STATE(223)] = 11155,
  [SMALL_STATE(224)] = 11191,
  [SMALL_STATE(225)] = 11227,
  [SMALL_STATE(226)] = 11248,
  [SMALL_STATE(227)] = 11282,
  [SMALL_STATE(228)] = 11316,
  [SMALL_STATE(229)] = 11350,
  [SMALL_STATE(230)] = 11384,
  [SMALL_STATE(231)] = 11415,
  [SMALL_STATE(232)] = 11446,
  [SMALL_STATE(233)] = 11477,
  [SMALL_STATE(234)] = 11508,
  [SMALL_STATE(235)] = 11539,
  [SMALL_STATE(236)] = 11570,
  [SMALL_STATE(237)] = 11601,
  [SMALL_STATE(238)] = 11632,
  [SMALL_STATE(239)] = 11663,
  [SMALL_STATE(240)] = 11694,
  [SMALL_STATE(241)] = 11725,
  [SMALL_STATE(242)] = 11756,
  [SMALL_STATE(243)] = 11787,
  [SMALL_STATE(244)] = 11818,
  [SMALL_STATE(245)] = 11849,
  [SMALL_STATE(246)] = 11880,
  [SMALL_STATE(247)] = 11911,
  [SMALL_STATE(248)] = 11942,
  [SMALL_STATE(249)] = 11973,
  [SMALL_STATE(250)] = 12004,
  [SMALL_STATE(251)] = 12035,
  [SMALL_STATE(252)] = 12066,
  [SMALL_STATE(253)] = 12097,
  [SMALL_STATE(254)] = 12128,
  [SMALL_STATE(255)] = 12159,
  [SMALL_STATE(256)] = 12190,
  [SMALL_STATE(257)] = 12221,
  [SMALL_STATE(258)] = 12252,
  [SMALL_STATE(259)] = 12283,
  [SMALL_STATE(260)] = 12314,
  [SMALL_STATE(261)] = 12345,
  [SMALL_STATE(262)] = 12376,
  [SMALL_STATE(263)] = 12407,
  [SMALL_STATE(264)] = 12438,
  [SMALL_STATE(265)] = 12469,
  [SMALL_STATE(266)] = 12500,
  [SMALL_STATE(267)] = 12531,
  [SMALL_STATE(268)] = 12562,
  [SMALL_STATE(269)] = 12593,
  [SMALL_STATE(270)] = 12624,
  [SMALL_STATE(271)] = 12655,
  [SMALL_STATE(272)] = 12686,
  [SMALL_STATE(273)] = 12717,
  [SMALL_STATE(274)] = 12748,
  [SMALL_STATE(275)] = 12779,
  [SMALL_STATE(276)] = 12810,
  [SMALL_STATE(277)] = 12841,
  [SMALL_STATE(278)] = 12872,
  [SMALL_STATE(279)] = 12903,
  [SMALL_STATE(280)] = 12934,
  [SMALL_STATE(281)] = 12965,
  [SMALL_STATE(282)] = 12996,
  [SMALL_STATE(283)] = 13027,
  [SMALL_STATE(284)] = 13058,
  [SMALL_STATE(285)] = 13089,
  [SMALL_STATE(286)] = 13120,
  [SMALL_STATE(287)] = 13151,
  [SMALL_STATE(288)] = 13182,
  [SMALL_STATE(289)] = 13203,
  [SMALL_STATE(290)] = 13218,
  [SMALL_STATE(291)] = 13236,
  [SMALL_STATE(292)] = 13249,
  [SMALL_STATE(293)] = 13262,
  [SMALL_STATE(294)] = 13277,
  [SMALL_STATE(295)] = 13300,
  [SMALL_STATE(296)] = 13313,
  [SMALL_STATE(297)] = 13326,
  [SMALL_STATE(298)] = 13341,
  [SMALL_STATE(299)] = 13354,
  [SMALL_STATE(300)] = 13371,
  [SMALL_STATE(301)] = 13386,
  [SMALL_STATE(302)] = 13399,
  [SMALL_STATE(303)] = 13412,
  [SMALL_STATE(304)] = 13425,
  [SMALL_STATE(305)] = 13438,
  [SMALL_STATE(306)] = 13451,
  [SMALL_STATE(307)] = 13463,
  [SMALL_STATE(308)] = 13475,
  [SMALL_STATE(309)] = 13487,
  [SMALL_STATE(310)] = 13499,
  [SMALL_STATE(311)] = 13511,
  [SMALL_STATE(312)] = 13523,
  [SMALL_STATE(313)] = 13535,
  [SMALL_STATE(314)] = 13547,
  [SMALL_STATE(315)] = 13559,
  [SMALL_STATE(316)] = 13571,
  [SMALL_STATE(317)] = 13583,
  [SMALL_STATE(318)] = 13595,
  [SMALL_STATE(319)] = 13607,
  [SMALL_STATE(320)] = 13619,
  [SMALL_STATE(321)] = 13631,
  [SMALL_STATE(322)] = 13643,
  [SMALL_STATE(323)] = 13655,
  [SMALL_STATE(324)] = 13667,
  [SMALL_STATE(325)] = 13679,
  [SMALL_STATE(326)] = 13691,
  [SMALL_STATE(327)] = 13703,
  [SMALL_STATE(328)] = 13715,
  [SMALL_STATE(329)] = 13727,
  [SMALL_STATE(330)] = 13739,
  [SMALL_STATE(331)] = 13751,
  [SMALL_STATE(332)] = 13763,
  [SMALL_STATE(333)] = 13775,
  [SMALL_STATE(334)] = 13787,
  [SMALL_STATE(335)] = 13799,
  [SMALL_STATE(336)] = 13811,
  [SMALL_STATE(337)] = 13823,
  [SMALL_STATE(338)] = 13835,
  [SMALL_STATE(339)] = 13847,
  [SMALL_STATE(340)] = 13859,
  [SMALL_STATE(341)] = 13871,
  [SMALL_STATE(342)] = 13883,
  [SMALL_STATE(343)] = 13895,
  [SMALL_STATE(344)] = 13907,
  [SMALL_STATE(345)] = 13919,
  [SMALL_STATE(346)] = 13931,
  [SMALL_STATE(347)] = 13943,
  [SMALL_STATE(348)] = 13955,
  [SMALL_STATE(349)] = 13967,
  [SMALL_STATE(350)] = 13979,
  [SMALL_STATE(351)] = 13991,
  [SMALL_STATE(352)] = 14003,
  [SMALL_STATE(353)] = 14015,
  [SMALL_STATE(354)] = 14027,
  [SMALL_STATE(355)] = 14039,
  [SMALL_STATE(356)] = 14056,
  [SMALL_STATE(357)] = 14067,
  [SMALL_STATE(358)] = 14078,
  [SMALL_STATE(359)] = 14089,
  [SMALL_STATE(360)] = 14105,
  [SMALL_STATE(361)] = 14121,
  [SMALL_STATE(362)] = 14135,
  [SMALL_STATE(363)] = 14151,
  [SMALL_STATE(364)] = 14167,
  [SMALL_STATE(365)] = 14183,
  [SMALL_STATE(366)] = 14199,
  [SMALL_STATE(367)] = 14215,
  [SMALL_STATE(368)] = 14231,
  [SMALL_STATE(369)] = 14245,
  [SMALL_STATE(370)] = 14259,
  [SMALL_STATE(371)] = 14275,
  [SMALL_STATE(372)] = 14291,
  [SMALL_STATE(373)] = 14305,
  [SMALL_STATE(374)] = 14321,
  [SMALL_STATE(375)] = 14337,
  [SMALL_STATE(376)] = 14353,
  [SMALL_STATE(377)] = 14369,
  [SMALL_STATE(378)] = 14385,
  [SMALL_STATE(379)] = 14401,
  [SMALL_STATE(380)] = 14417,
  [SMALL_STATE(381)] = 14431,
  [SMALL_STATE(382)] = 14447,
  [SMALL_STATE(383)] = 14461,
  [SMALL_STATE(384)] = 14477,
  [SMALL_STATE(385)] = 14490,
  [SMALL_STATE(386)] = 14503,
  [SMALL_STATE(387)] = 14514,
  [SMALL_STATE(388)] = 14525,
  [SMALL_STATE(389)] = 14538,
  [SMALL_STATE(390)] = 14551,
  [SMALL_STATE(391)] = 14564,
  [SMALL_STATE(392)] = 14577,
  [SMALL_STATE(393)] = 14590,
  [SMALL_STATE(394)] = 14603,
  [SMALL_STATE(395)] = 14616,
  [SMALL_STATE(396)] = 14629,
  [SMALL_STATE(397)] = 14642,
  [SMALL_STATE(398)] = 14655,
  [SMALL_STATE(399)] = 14668,
  [SMALL_STATE(400)] = 14681,
  [SMALL_STATE(401)] = 14694,
  [SMALL_STATE(402)] = 14707,
  [SMALL_STATE(403)] = 14720,
  [SMALL_STATE(404)] = 14733,
  [SMALL_STATE(405)] = 14746,
  [SMALL_STATE(406)] = 14759,
  [SMALL_STATE(407)] = 14772,
  [SMALL_STATE(408)] = 14785,
  [SMALL_STATE(409)] = 14798,
  [SMALL_STATE(410)] = 14811,
  [SMALL_STATE(411)] = 14824,
  [SMALL_STATE(412)] = 14837,
  [SMALL_STATE(413)] = 14850,
  [SMALL_STATE(414)] = 14863,
  [SMALL_STATE(415)] = 14876,
  [SMALL_STATE(416)] = 14889,
  [SMALL_STATE(417)] = 14902,
  [SMALL_STATE(418)] = 14911,
  [SMALL_STATE(419)] = 14924,
  [SMALL_STATE(420)] = 14937,
  [SMALL_STATE(421)] = 14950,
  [SMALL_STATE(422)] = 14963,
  [SMALL_STATE(423)] = 14976,
  [SMALL_STATE(424)] = 14989,
  [SMALL_STATE(425)] = 15002,
  [SMALL_STATE(426)] = 15015,
  [SMALL_STATE(427)] = 15028,
  [SMALL_STATE(428)] = 15041,
  [SMALL_STATE(429)] = 15054,
  [SMALL_STATE(430)] = 15067,
  [SMALL_STATE(431)] = 15080,
  [SMALL_STATE(432)] = 15091,
  [SMALL_STATE(433)] = 15104,
  [SMALL_STATE(434)] = 15117,
  [SMALL_STATE(435)] = 15130,
  [SMALL_STATE(436)] = 15143,
  [SMALL_STATE(437)] = 15156,
  [SMALL_STATE(438)] = 15169,
  [SMALL_STATE(439)] = 15182,
  [SMALL_STATE(440)] = 15195,
  [SMALL_STATE(441)] = 15208,
  [SMALL_STATE(442)] = 15221,
  [SMALL_STATE(443)] = 15234,
  [SMALL_STATE(444)] = 15247,
  [SMALL_STATE(445)] = 15260,
  [SMALL_STATE(446)] = 15273,
  [SMALL_STATE(447)] = 15286,
  [SMALL_STATE(448)] = 15299,
  [SMALL_STATE(449)] = 15312,
  [SMALL_STATE(450)] = 15321,
  [SMALL_STATE(451)] = 15334,
  [SMALL_STATE(452)] = 15347,
  [SMALL_STATE(453)] = 15360,
  [SMALL_STATE(454)] = 15373,
  [SMALL_STATE(455)] = 15386,
  [SMALL_STATE(456)] = 15399,
  [SMALL_STATE(457)] = 15412,
  [SMALL_STATE(458)] = 15425,
  [SMALL_STATE(459)] = 15438,
  [SMALL_STATE(460)] = 15451,
  [SMALL_STATE(461)] = 15464,
  [SMALL_STATE(462)] = 15477,
  [SMALL_STATE(463)] = 15490,
  [SMALL_STATE(464)] = 15503,
  [SMALL_STATE(465)] = 15516,
  [SMALL_STATE(466)] = 15529,
  [SMALL_STATE(467)] = 15542,
  [SMALL_STATE(468)] = 15555,
  [SMALL_STATE(469)] = 15568,
  [SMALL_STATE(470)] = 15581,
  [SMALL_STATE(471)] = 15594,
  [SMALL_STATE(472)] = 15607,
  [SMALL_STATE(473)] = 15620,
  [SMALL_STATE(474)] = 15633,
  [SMALL_STATE(475)] = 15646,
  [SMALL_STATE(476)] = 15659,
  [SMALL_STATE(477)] = 15672,
  [SMALL_STATE(478)] = 15685,
  [SMALL_STATE(479)] = 15698,
  [SMALL_STATE(480)] = 15711,
  [SMALL_STATE(481)] = 15721,
  [SMALL_STATE(482)] = 15731,
  [SMALL_STATE(483)] = 15741,
  [SMALL_STATE(484)] = 15751,
  [SMALL_STATE(485)] = 15761,
  [SMALL_STATE(486)] = 15771,
  [SMALL_STATE(487)] = 15781,
  [SMALL_STATE(488)] = 15791,
  [SMALL_STATE(489)] = 15801,
  [SMALL_STATE(490)] = 15811,
  [SMALL_STATE(491)] = 15821,
  [SMALL_STATE(492)] = 15831,
  [SMALL_STATE(493)] = 15841,
  [SMALL_STATE(494)] = 15851,
  [SMALL_STATE(495)] = 15859,
  [SMALL_STATE(496)] = 15869,
  [SMALL_STATE(497)] = 15879,
  [SMALL_STATE(498)] = 15887,
  [SMALL_STATE(499)] = 15897,
  [SMALL_STATE(500)] = 15907,
  [SMALL_STATE(501)] = 15917,
  [SMALL_STATE(502)] = 15927,
  [SMALL_STATE(503)] = 15937,
  [SMALL_STATE(504)] = 15945,
  [SMALL_STATE(505)] = 15955,
  [SMALL_STATE(506)] = 15965,
  [SMALL_STATE(507)] = 15975,
  [SMALL_STATE(508)] = 15985,
  [SMALL_STATE(509)] = 15995,
  [SMALL_STATE(510)] = 16005,
  [SMALL_STATE(511)] = 16015,
  [SMALL_STATE(512)] = 16025,
  [SMALL_STATE(513)] = 16035,
  [SMALL_STATE(514)] = 16045,
  [SMALL_STATE(515)] = 16055,
  [SMALL_STATE(516)] = 16065,
  [SMALL_STATE(517)] = 16075,
  [SMALL_STATE(518)] = 16085,
  [SMALL_STATE(519)] = 16095,
  [SMALL_STATE(520)] = 16103,
  [SMALL_STATE(521)] = 16113,
  [SMALL_STATE(522)] = 16121,
  [SMALL_STATE(523)] = 16129,
  [SMALL_STATE(524)] = 16136,
  [SMALL_STATE(525)] = 16143,
  [SMALL_STATE(526)] = 16150,
  [SMALL_STATE(527)] = 16157,
  [SMALL_STATE(528)] = 16164,
  [SMALL_STATE(529)] = 16171,
  [SMALL_STATE(530)] = 16178,
  [SMALL_STATE(531)] = 16185,
  [SMALL_STATE(532)] = 16192,
  [SMALL_STATE(533)] = 16199,
  [SMALL_STATE(534)] = 16206,
  [SMALL_STATE(535)] = 16213,
  [SMALL_STATE(536)] = 16220,
  [SMALL_STATE(537)] = 16227,
  [SMALL_STATE(538)] = 16234,
  [SMALL_STATE(539)] = 16241,
  [SMALL_STATE(540)] = 16248,
  [SMALL_STATE(541)] = 16255,
  [SMALL_STATE(542)] = 16262,
  [SMALL_STATE(543)] = 16269,
  [SMALL_STATE(544)] = 16276,
  [SMALL_STATE(545)] = 16283,
  [SMALL_STATE(546)] = 16290,
  [SMALL_STATE(547)] = 16297,
  [SMALL_STATE(548)] = 16304,
  [SMALL_STATE(549)] = 16311,
  [SMALL_STATE(550)] = 16318,
  [SMALL_STATE(551)] = 16325,
  [SMALL_STATE(552)] = 16332,
  [SMALL_STATE(553)] = 16339,
  [SMALL_STATE(554)] = 16346,
  [SMALL_STATE(555)] = 16353,
  [SMALL_STATE(556)] = 16360,
  [SMALL_STATE(557)] = 16367,
  [SMALL_STATE(558)] = 16374,
  [SMALL_STATE(559)] = 16381,
  [SMALL_STATE(560)] = 16388,
  [SMALL_STATE(561)] = 16395,
  [SMALL_STATE(562)] = 16402,
  [SMALL_STATE(563)] = 16409,
  [SMALL_STATE(564)] = 16416,
  [SMALL_STATE(565)] = 16423,
  [SMALL_STATE(566)] = 16430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(482),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(122),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(491),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(164),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(165),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(552),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(553),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(75),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(81),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(121),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(120),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(119),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(116),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(155),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(84),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_block_repeat1, 2), SHIFT_REPEAT(370),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 1, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 1, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3, .production_id = 6),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 5, .production_id = 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 5, .production_id = 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_path, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_path, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expr, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expr, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expr, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ptr, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ptr, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_expr, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_expr, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_expr, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_expr, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expr, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expr, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deref_expr, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deref_expr, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection_expr, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_expr, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 7),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_fn, 6),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_fn, 6),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_array_ptr, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_array_ptr, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr, 4, .production_id = 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr, 4, .production_id = 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_literal, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_literal, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 8),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 7),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 7),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_literal, 6),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_literal, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_path, 4),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(127),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(11),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(27),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(29),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(44),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(57),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(61),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(145),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(364),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_if, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_block, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_block, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_expr, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_expr, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_if, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_if, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_continue, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_continue, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_break, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_break, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_return, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_return, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_while, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_while, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_return, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_return, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_assignment, 4),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_assignment, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(516),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(482),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(510),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(514),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(515),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(482),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 17),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 10, .production_id = 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 9, .production_id = 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 5, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 13),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, .production_id = 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 18),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, .production_id = 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 13, .production_id = 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 19),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 7, .production_id = 9),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 8, .production_id = 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 10, .production_id = 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 13, .production_id = 29),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 20),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 12, .production_id = 28),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 10, .production_id = 21),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 12),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 6, .production_id = 7),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 11, .production_id = 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 14),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 8, .production_id = 11),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 16),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 22),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 23),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 6, .production_id = 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 11, .production_id = 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 12, .production_id = 27),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 13, .production_id = 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 24),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, .production_id = 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 9, .production_id = 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 11, .production_id = 25),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 12, .production_id = 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 8, .production_id = 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9, .production_id = 15),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 12, .production_id = 26),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 12, .production_id = 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 7, .production_id = 10),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 14, .production_id = 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(371),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(356),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(370),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(517),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2), SHIFT_REPEAT(235),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(509),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2), SHIFT_REPEAT(496),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 2), SHIFT_REPEAT(483),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_literal_repeat1, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_fn_repeat1, 2), SHIFT_REPEAT(238),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 2), SHIFT_REPEAT(489),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_declaration_repeat1, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat2, 4),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 4),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
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
