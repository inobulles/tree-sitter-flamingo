import XCTest
import SwiftTreeSitter
import TreeSitterFlamingo

final class TreeSitterFlamingoTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_flamingo())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Flamingo grammar")
    }
}
