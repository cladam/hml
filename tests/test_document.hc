import "../src/hml"

// ============================================================
// Document-level structure
// ============================================================

test "top-level properties and elements mixed" {
  let input = "version: \"1.0\"\n@server(port: 8080)"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 2)
      match at(nodes, "version") |> as_str {
        Some(v) => assert(v == "1.0"),
        None => assert(false)
      }
      match hml_elem(nodes, "server") {
        Some(_) => assert(true),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "comments between elements" {
  let input = "@a\n// comment\n@b"
  match hml_parse(input) {
    Ok(nodes) => assert(length(nodes) == 2),
    Err(_) => assert(false)
  }
}

test "inline comment after property" {
  let input = "port: 8080 // default port\nhost: \"localhost\""
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 2)
      match at(nodes, "port") |> as_int {
        Some(v) => assert(v == 8080),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Body with mixed content (properties + nested elements)
// ============================================================

test "body with properties and nested elements" {
  let input = "@app \{\n    name: \"main\"\n    @database \{\n        host: \"db\"\n    \}\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "app") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              match at(body, "name") |> as_str {
                Some(v) => assert(v == "main"),
                None => assert(false)
              }
              match hml_elem(body, "database") {
                Some(db) => {
                  match hml_body(db) {
                    Some(db_body) => {
                      match at(db_body, "host") |> as_str {
                        Some(v) => assert(v == "db"),
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
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Whitespace handling
// ============================================================

test "extra whitespace around colon" {
  match hml_parse("key:    \"value\"") {
    Ok(nodes) => {
      match at(nodes, "key") |> as_str {
        Some(v) => assert(v == "value"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "leading whitespace before element" {
  match hml_parse("  @node(id: \"n1\")") {
    Ok(nodes) => {
      match hml_elem(nodes, "node") {
        Some(_) => assert(true),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "blank lines between properties" {
  let input = "a: 1\n\n\nb: 2"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 2)
      match at(nodes, "a") |> as_int {
        Some(v) => assert(v == 1),
        None => assert(false)
      }
      match at(nodes, "b") |> as_int {
        Some(v) => assert(v == 2),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Quoted keys
// ============================================================

test "double-quoted key" {
  match hml_parse("\"key with spaces\": \"value\"") {
    Ok(nodes) => {
      match at(nodes, "key with spaces") |> as_str {
        Some(v) => assert(v == "value"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "single-quoted key" {
  match hml_parse("\'simple-key\': 42") {
    Ok(nodes) => {
      match at(nodes, "simple-key") |> as_int {
        Some(v) => assert(v == 42),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Multi-line strings
// ============================================================

test "multi-line basic string" {
  let input = "desc: \"\"\"hello\nworld\"\"\""
  match hml_parse(input) {
    Ok(nodes) => {
      match at(nodes, "desc") |> as_str {
        Some(v) => assert(v == "hello\nworld"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "multi-line literal string" {
  let input = "regex: \'\'\'no\\escaping\'\'\'"
  match hml_parse(input) {
    Ok(nodes) => {
      match at(nodes, "regex") |> as_str {
        Some(v) => assert(v == "no\\escaping"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Directives (skip)
// ============================================================

test "directive lines are skipped" {
  let input = "#hml 0.3\n@server(port: 80)"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 1)
      match hml_elem(nodes, "server") {
        Some(_) => assert(true),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "namespace directive parsed" {
  let input = "#namespace k8s: \"https://kubernetes.io/schema/v1\"\n@k8s.pod"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 2)
      match hml_namespace(nodes, "k8s") {
        Some(uri) => assert(uri == "https://kubernetes.io/schema/v1"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "multiple namespace directives" {
  let input = "#namespace k8s: \"https://kubernetes.io/v1\"\n#namespace hica: \"https://hica.dev/v1\"\nname: \"app\""
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 3)
      let ns = hml_namespaces(nodes)
      assert(length(ns) == 2)
      match hml_namespace(nodes, "hica") {
        Some(uri) => assert(uri == "https://hica.dev/v1"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "namespace with hml_namespaces" {
  let input = "#namespace app: \"https://example.com\"\nversion: \"1.0\""
  match hml_parse(input) {
    Ok(nodes) => {
      let ns = hml_namespaces(nodes)
      assert(length(ns) == 1)
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Array values in body
// ============================================================

test "array property in body" {
  let input = "@config \{\n    ports: [80, 443, 8080]\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "config") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              match hml_get(body, "ports") {
                Some(HArray(items)) => assert(length(items) == 3),
                _ => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Dotted keys
// ============================================================

test "simple dotted key" {
  let input = "database.host: \"localhost\""
  match hml_parse(input) {
    Ok(nodes) => {
      match elem_at(nodes, "database") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              match at(body, "host") |> as_str {
                Some(v) => assert(v == "localhost"),
                None => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "dotted keys merge same prefix" {
  let input = "database.host: \"localhost\"\ndatabase.port: 5432"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 1)
      match elem_at(nodes, "database") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              assert(length(body) == 2)
              match at(body, "host") |> as_str {
                Some(v) => assert(v == "localhost"),
                None => assert(false)
              }
            },
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "dotted keys in element body" {
  let input = "@config \{\n    database.host: \"localhost\"\n    database.port: 5432\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match elem_at(nodes, "config") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              assert(length(body) == 1)
              match elem_at(body, "database") {
                Some(db) => {
                  match hml_body(db) {
                    Some(db_body) => assert(length(db_body) == 2),
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
    Err(_) => assert(false)
  }
}

test "deep dotted key" {
  let input = "a.b.c: 42"
  match hml_parse(input) {
    Ok(nodes) => {
      match elem_at(nodes, "a") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              match elem_at(body, "b") {
                Some(inner) => {
                  match hml_body(inner) {
                    Some(inner_body) => {
                      match at(inner_body, "c") |> as_int {
                        Some(v) => assert(v == 42),
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
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "dotted keys don't merge explicit elements" {
  let input = "@server(port: 8080)\n@server(port: 9090)"
  match hml_parse(input) {
    Ok(nodes) => assert(length(nodes) == 2),
    Err(_) => assert(false)
  }
}
