//! This crate provides magelang language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = "";
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(tree_sitter_magelang::language()).expect("Error loading magelang grammar");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_magelang() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_magelang() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

/// The syntax highlighting query for this grammar.
pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");

/// The local variable query for this grammar.
pub const LOCALS_QUERY: &'static str = include_str!("../../queries/locals.scm");

/// The indentation query for this grammar.
pub const INDENTS_QUERY: &'static str = include_str!("../../queries/indents.scm");

/// The folding query for this grammar.
pub const FOLDS_QUERY: &'static str = include_str!("../../queries/folds.scm");

/// The textobjects query for this grammar.
pub const TEXTOBJECTS_QUERY: &'static str = include_str!("../../queries/textobjects.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::language())
            .expect("Error loading magelang language");
    }

    #[test]
    fn test_can_parse_example_file() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::language())
            .expect("Error loading magelang language");

        let source = include_str!("../../example-file.mg");
        let tree = parser.parse(source, None).unwrap();
        assert!(
            !tree.root_node().has_error(),
            "example-file.mg should parse without errors"
        );
    }

    #[test]
    fn test_queries_are_valid() {
        let language = super::language();
        for (name, source) in [
            ("highlights.scm", super::HIGHLIGHTS_QUERY),
            ("locals.scm", super::LOCALS_QUERY),
            ("indents.scm", super::INDENTS_QUERY),
            ("folds.scm", super::FOLDS_QUERY),
            ("textobjects.scm", super::TEXTOBJECTS_QUERY),
        ] {
            tree_sitter::Query::new(language, source)
                .unwrap_or_else(|_| panic!("invalid {}", name));
        }
    }
}
