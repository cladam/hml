import "../src/hml"

// ============================================================
// Bare element (no attrs, no body)
// ============================================================

test "bare element" {
  match hml_parse("@break") {
    Ok(nodes) => {
      assert(length(nodes) == 1)
      match hml_elem(nodes, "break") {
        Some(HElement(n, attrs, body)) => {
          assert(n == "break")
          assert(length(attrs) == 0)
          assert(length(body) == 0)
        },
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Element with attributes only (leaf element)
// ============================================================

test "element with string attribute" {
  match hml_parse("@node(id: \"n1\")") {
    Ok(nodes) => {
      match hml_elem(nodes, "node") {
        Some(el) => {
          match hml_attr(el, "id") {
            Some(HStr(v)) => assert(v == "n1"),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "element with integer attribute" {
  match hml_parse("@server(port: 8080)") {
    Ok(nodes) => {
      match hml_elem(nodes, "server") {
        Some(el) => {
          match hml_attr(el, "port") {
            Some(HInt(v)) => assert(v == 8080),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "element with multiple attributes" {
  match hml_parse("@node(id: \"n1\", weight: 5)") {
    Ok(nodes) => {
      match hml_elem(nodes, "node") {
        Some(el) => {
          match hml_attr(el, "id") {
            Some(HStr(v)) => assert(v == "n1"),
            _ => assert(false)
          }
          match hml_attr(el, "weight") {
            Some(HInt(v)) => assert(v == 5),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "boolean flag attribute" {
  match hml_parse("@field(required, unique)") {
    Ok(nodes) => {
      match hml_elem(nodes, "field") {
        Some(el) => {
          match hml_attr(el, "required") {
            Some(HBool(v)) => assert(v == true),
            _ => assert(false)
          }
          match hml_attr(el, "unique") {
            Some(HBool(v)) => assert(v == true),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "mixed flag and value attributes" {
  match hml_parse("@service(id: \"auth\", public, version: 3)") {
    Ok(nodes) => {
      match hml_elem(nodes, "service") {
        Some(el) => {
          match hml_attr(el, "id") {
            Some(HStr(v)) => assert(v == "auth"),
            _ => assert(false)
          }
          match hml_attr(el, "public") {
            Some(HBool(v)) => assert(v == true),
            _ => assert(false)
          }
          match hml_attr(el, "version") {
            Some(HInt(v)) => assert(v == 3),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Element with body
// ============================================================

test "element with body properties" {
  let input = "@database \{\n    host: \"localhost\"\n    port: 5432\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "database") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              assert(length(body) == 2)
              match at(body, "host") |> as_str {
                Some(v) => assert(v == "localhost"),
                None => assert(false)
              }
              match at(body, "port") |> as_int {
                Some(v) => assert(v == 5432),
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
// Element with attributes and body
// ============================================================

test "element with attrs and body" {
  let input = "@server(port: 8080) \{\n    name: \"api\"\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "server") {
        Some(el) => {
          match hml_attr(el, "port") {
            Some(HInt(v)) => assert(v == 8080),
            _ => assert(false)
          }
          match hml_body(el) {
            Some(body) => {
              match at(body, "name") |> as_str {
                Some(v) => assert(v == "api"),
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
// Namespaced element names
// ============================================================

test "dotted element name" {
  match hml_parse("@k8s.pod(name: \"worker\")") {
    Ok(nodes) => {
      match hml_elem(nodes, "k8s.pod") {
        Some(el) => {
          match hml_attr(el, "name") {
            Some(HStr(v)) => assert(v == "worker"),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Nested elements
// ============================================================

test "nested elements" {
  let input = "@cluster \{\n    @node(id: \"n1\")\n    @node(id: \"n2\")\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "cluster") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              let node_list = hml_elems(body, "node")
              assert(length(node_list) == 2)
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
// Multiple top-level elements
// ============================================================

test "multiple top-level elements" {
  let input = "@server(port: 8080)\n@server(port: 9090)"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 2)
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Inline element as value
// ============================================================

test "inline element as property value" {
  let input = "@upstream \{\n    retry: @policy(max: 3, delay: 500ms)\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "upstream") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => {
              match hml_get(body, "retry") {
                Some(HElement(n, _, _)) => assert(n == "policy"),
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
// Duration attribute
// ============================================================

test "duration as attribute value" {
  match hml_parse("@probe(interval: 10s)") {
    Ok(nodes) => {
      match hml_elem(nodes, "probe") {
        Some(el) => {
          match hml_attr(el, "interval") {
            Some(HDuration(amt, u)) => {
              assert(amt == 10)
              assert(u == "s")
            },
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}
