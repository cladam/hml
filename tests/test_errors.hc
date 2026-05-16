import "../src/hml"

// ============================================================
// Unterminated strings
// ============================================================

test "unterminated basic string" {
  match hml_parse("name: \"hello") {
    Err(e) => assert(contains(e, "unterminated")),
    Ok(_) => assert(false)
  }
}

test "unterminated literal string" {
  match hml_parse("name: \'hello") {
    Err(e) => assert(contains(e, "unterminated")),
    Ok(_) => assert(false)
  }
}

test "unterminated multi-line string" {
  match hml_parse("name: \"\"\"hello") {
    Err(e) => assert(contains(e, "unterminated")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Missing colon after key
// ============================================================

test "missing colon after key" {
  match hml_parse("host \"localhost\"") {
    Err(e) => assert(contains(e, ":")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Unterminated body
// ============================================================

test "unterminated element body" {
  match hml_parse("@server \{\n    name: \"api\"") {
    Err(e) => assert(contains(e, "unterminated") || contains(e, "missing")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Unterminated attributes
// ============================================================

test "unterminated attribute list" {
  match hml_parse("@node(id: \"n1\"") {
    Err(e) => assert(contains(e, "expected") || contains(e, "unterminated")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Invalid values
// ============================================================

test "unexpected character in value position" {
  match hml_parse("key: !invalid") {
    Err(e) => assert(contains(e, "unexpected")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Unclosed array
// ============================================================

test "unclosed array" {
  match hml_parse("items: [1, 2, 3") {
    Err(e) => assert(contains(e, "expected") || contains(e, "]")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Invalid escape sequence
// ============================================================

test "invalid escape in string" {
  match hml_parse("name: \"hello\\z\"") {
    Err(e) => assert(contains(e, "escape")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Unexpected content at top level
// ============================================================

test "bare number at top level is error" {
  match hml_parse("42") {
    Err(_) => assert(true),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Empty element name
// ============================================================

test "missing element name after @" {
  match hml_parse("@(id: \"n1\")") {
    Err(e) => assert(contains(e, "expected") || contains(e, "key")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Missing value after colon
// ============================================================

test "missing value after colon in body" {
  match hml_parse("@cfg \{\n    key:\n\}") {
    Err(e) => assert(contains(e, "unexpected")),
    Ok(_) => assert(false)
  }
}

// ============================================================
// Merge rule: dotted keys vs explicit elements
// ============================================================

test "merge rule: dotted key then explicit element in body" {
  let input = "@config \{\n    database.host: \"localhost\"\n    @database \{\n        port: 5432\n    \}\n\}"
  match hml_parse(input) {
    Err(e) => assert(contains(e, "merge rule")),
    Ok(_) => assert(false)
  }
}

test "merge rule: explicit element then dotted key in body" {
  let input = "@config \{\n    @database \{\n        port: 5432\n    \}\n    database.host: \"localhost\"\n\}"
  match hml_parse(input) {
    Err(e) => assert(contains(e, "merge rule")),
    Ok(_) => assert(false)
  }
}

test "merge rule: dotted key then explicit element at document level" {
  let input = "database.host: \"localhost\"\n@database \{\n    port: 5432\n\}"
  match hml_parse(input) {
    Err(e) => assert(contains(e, "merge rule")),
    Ok(_) => assert(false)
  }
}

test "merge rule: multiple dotted keys same root is valid" {
  let input = "@config \{\n    database.host: \"localhost\"\n    database.port: 5432\n\}"
  match hml_parse(input) {
    Ok(nodes) => assert(length(nodes) == 1),
    Err(_) => assert(false)
  }
}

test "merge rule: repeated explicit elements is valid" {
  let input = "@cluster \{\n    @node(id: \"n1\")\n    @node(id: \"n2\")\n\}"
  match hml_parse(input) {
    Ok(nodes) => assert(length(nodes) == 1),
    Err(_) => assert(false)
  }
}
