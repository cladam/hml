import "../src/hml"

// ============================================================
// Text content mode
// ============================================================

test "body element contains text" {
  let input = "@article \{\n    @body \{\n        Hello world\n    \}\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "article") {
        Some(art) => {
          match hml_body(art) {
            Some(body) => {
              match hml_elem(body, "body") {
                Some(b) => {
                  match hml_body(b) {
                    Some(text_nodes) => {
                      assert(length(text_nodes) == 1)
                      match text_nodes {
                        [NText(t), ..] => assert(t == "Hello world"),
                        _ => assert(false)
                      }
                    },
                    None => assert(false)
                  }
                },
                None => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "text element p" {
  let input = "@p \{\n    A paragraph of text.\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "p") {
        Some(p_elem) => {
          match hml_body(p_elem) {
            Some(body) => {
              assert(length(body) == 1)
              match body {
                [NText(t), ..] => assert(t == "A paragraph of text."),
                _ => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "text element with property" {
  let input = "@body \{\n    title: \"hello\"\n    Some text here.\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "body") {
        Some(b) => {
          match hml_body(b) {
            Some(body) => {
              assert(length(body) == 2)
              match at(body, "title") |> as_str {
                Some(v) => assert(v == "hello"),
                None => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "text with inline element" {
  let input = "@body \{\n    Hello @em\{world\} today\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "body") {
        Some(b) => {
          match hml_body(b) {
            Some(body) => {
              assert(length(body) == 3)
              match body {
                [NText(t1), NElem(HElement(name, _, inner)), NText(t2)] => {
                  assert(t1 == "Hello ")
                  assert(name == "em")
                  assert(t2 == " today")
                },
                _ => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "text with block element" {
  let input = "@body \{\n    First line.\n    @p \{\n        Nested paragraph.\n    \}\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "body") {
        Some(b) => {
          match hml_body(b) {
            Some(body) => {
              assert(length(body) == 2)
              match hml_elem(body, "p") {
                Some(_) => assert(true),
                None => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "custom text element via #text directive" {
  let input = "#text: section\n@section \{\n    Custom text content.\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "section") {
        Some(sec) => {
          match hml_body(sec) {
            Some(body) => {
              assert(length(body) == 1)
              match body {
                [NText(t), ..] => assert(t == "Custom text content."),
                _ => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "multiple text lines" {
  let input = "@body \{\n    First line.\n    Second line.\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "body") {
        Some(b) => {
          match hml_body(b) {
            Some(body) => {
              assert(length(body) == 2)
              match body {
                [NText(t1), NText(t2)] => {
                  assert(t1 == "First line.")
                  assert(t2 == "Second line.")
                },
                _ => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "inline element with attributes" {
  let input = "@body \{\n    Click @link(href: \"https://example.com\")\{here\}\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "body") {
        Some(b) => {
          match hml_body(b) {
            Some(body) => {
              assert(length(body) == 2)
              match body {
                [NText(t1), NElem(HElement(name, attrs, _))] => {
                  assert(t1 == "Click ")
                  assert(name == "link")
                  assert(length(attrs) == 1)
                },
                _ => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}
