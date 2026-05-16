import "../src/hml"

// ============================================================
// hml_get / at
// ============================================================

test "hml_get finds property by key" {
  match hml_parse("host: \"localhost\"\nport: 5432") {
    Ok(nodes) => {
      match hml_get(nodes, "port") {
        Some(HInt(v)) => assert(v == 5432),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_get returns None for missing key" {
  match hml_parse("host: \"localhost\"") {
    Ok(nodes) => {
      match hml_get(nodes, "missing") {
        None => assert(true),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// hml_elem / elem_at
// ============================================================

test "hml_elem finds element by name" {
  match hml_parse("@server(port: 80)\n@client(id: \"c1\")") {
    Ok(nodes) => {
      match hml_elem(nodes, "client") {
        Some(HElement(n, _, _)) => assert(n == "client"),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_elem returns None for missing element" {
  match hml_parse("@server(port: 80)") {
    Ok(nodes) => {
      match hml_elem(nodes, "database") {
        None => assert(true),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "elem_at is alias for hml_elem" {
  match hml_parse("@node(id: \"n1\")") {
    Ok(nodes) => {
      match elem_at(nodes, "node") {
        Some(HElement(n, _, _)) => assert(n == "node"),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// hml_elems (repeated elements)
// ============================================================

test "hml_elems collects repeated elements" {
  let input = "@node(id: \"n1\")\n@node(id: \"n2\")\n@node(id: \"n3\")"
  match hml_parse(input) {
    Ok(nodes) => {
      let elems = hml_elems(nodes, "node")
      assert(length(elems) == 3)
    },
    Err(_) => assert(false)
  }
}

test "hml_elems returns empty for no matches" {
  match hml_parse("@server(port: 80)") {
    Ok(nodes) => {
      let elems = hml_elems(nodes, "worker")
      assert(length(elems) == 0)
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Value extractors
// ============================================================

test "hml_str extracts string" {
  match hml_parse("name: \"hello\"") {
    Ok(nodes) => {
      match hml_get(nodes, "name") {
        Some(v) => {
          match hml_str(v) {
            Some(s) => assert(s == "hello"),
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_str returns None for non-string" {
  match hml_parse("port: 8080") {
    Ok(nodes) => {
      match hml_get(nodes, "port") {
        Some(v) => {
          match hml_str(v) {
            None => assert(true),
            _ => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_int extracts integer" {
  match hml_parse("count: 42") {
    Ok(nodes) => {
      match hml_get(nodes, "count") {
        Some(v) => {
          match hml_int(v) {
            Some(n) => assert(n == 42),
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_duration extracts amount and unit" {
  match hml_parse("timeout: 30s") {
    Ok(nodes) => {
      match hml_get(nodes, "timeout") {
        Some(v) => {
          match hml_duration(v) {
            Some((amt, u)) => {
              assert(amt == 30)
              assert(u == "s")
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

test "hml_list extracts array items" {
  match hml_parse("ports: [80, 443]") {
    Ok(nodes) => {
      match hml_get(nodes, "ports") {
        Some(v) => {
          match hml_list(v) {
            Some(items) => assert(length(items) == 2),
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
// hml_body / hml_attrs / hml_attr
// ============================================================

test "hml_body extracts element body" {
  let input = "@db \{\n    host: \"localhost\"\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      match hml_elem(nodes, "db") {
        Some(el) => {
          match hml_body(el) {
            Some(body) => assert(length(body) == 1),
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_attrs extracts attribute list" {
  match hml_parse("@node(id: \"n1\", weight: 5)") {
    Ok(nodes) => {
      match hml_elem(nodes, "node") {
        Some(el) => {
          match hml_attrs(el) {
            Some(attrs) => assert(length(attrs) == 2),
            None => assert(false)
          }
        },
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "hml_attr finds specific attribute" {
  match hml_parse("@item(price: 9, sale: true)") {
    Ok(nodes) => {
      match hml_elem(nodes, "item") {
        Some(el) => {
          match hml_attr(el, "price") {
            Some(HInt(v)) => assert(v == 9),
            _ => assert(false)
          }
          match hml_attr(el, "sale") {
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

test "hml_attr returns None for missing attr" {
  match hml_parse("@node(id: \"n1\")") {
    Ok(nodes) => {
      match hml_elem(nodes, "node") {
        Some(el) => {
          match hml_attr(el, "missing") {
            None => assert(true),
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
// Pipe-friendly API
// ============================================================

test "at pipe as_str" {
  match hml_parse("name: \"world\"") {
    Ok(nodes) => {
      match at(nodes, "name") |> as_str {
        Some(v) => assert(v == "world"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "at pipe as_int" {
  match hml_parse("port: 3000") {
    Ok(nodes) => {
      match at(nodes, "port") |> as_int {
        Some(v) => assert(v == 3000),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "at pipe as_bool" {
  match hml_parse("debug: true") {
    Ok(nodes) => {
      match at(nodes, "debug") |> as_bool {
        Some(v) => assert(v == true),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// hml_ok
// ============================================================

test "hml_ok converts Ok to Some" {
  let r = hml_parse("key: \"val\"")
  match hml_ok(r) {
    Some(nodes) => assert(length(nodes) == 1),
    None => assert(false)
  }
}

test "hml_ok converts Err to None" {
  let r = hml_parse("@incomplete(")
  match hml_ok(r) {
    None => assert(true),
    _ => assert(false)
  }
}
