import "../src/hml"

// ============================================================
// String parsing
// ============================================================

test "basic string value" {
  match hml_parse("name: \"hello\"") {
    Ok(nodes) => {
      match at(nodes, "name") |> as_str {
        Some(v) => assert(v == "hello"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "string with escape sequences" {
  match hml_parse("msg: \"line1\\nline2\"") {
    Ok(nodes) => {
      match at(nodes, "msg") |> as_str {
        Some(v) => assert(v == "line1\nline2"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "string with tab escape" {
  match hml_parse("msg: \"a\\tb\"") {
    Ok(nodes) => {
      match at(nodes, "msg") |> as_str {
        Some(v) => assert(v == "a\tb"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "string with escaped quote" {
  match hml_parse("msg: \"say \\\"hi\\\"\"") {
    Ok(nodes) => {
      match at(nodes, "msg") |> as_str {
        Some(v) => assert(v == "say \"hi\""),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "literal string no escaping" {
  match hml_parse("path: \'C:\\Users\\docs\'") {
    Ok(nodes) => {
      match at(nodes, "path") |> as_str {
        Some(v) => assert(v == "C:\\Users\\docs"),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Integer parsing
// ============================================================

test "positive integer" {
  match hml_parse("port: 8080") {
    Ok(nodes) => {
      match at(nodes, "port") |> as_int {
        Some(v) => assert(v == 8080),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "negative integer" {
  match hml_parse("offset: -17") {
    Ok(nodes) => {
      match at(nodes, "offset") |> as_int {
        Some(v) => assert(v == -17),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "zero integer" {
  match hml_parse("count: 0") {
    Ok(nodes) => {
      match at(nodes, "count") |> as_int {
        Some(v) => assert(v == 0),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Float parsing
// ============================================================

test "basic float" {
  match hml_parse("pi: 3.14") {
    Ok(nodes) => {
      match hml_get(nodes, "pi") {
        Some(HFloat(_)) => assert(true),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "negative float" {
  match hml_parse("temp: -0.01") {
    Ok(nodes) => {
      match hml_get(nodes, "temp") {
        Some(HFloat(_)) => assert(true),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "float with exponent" {
  match hml_parse("big: 5e22") {
    Ok(nodes) => {
      match hml_get(nodes, "big") {
        Some(HFloat(_)) => assert(true),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Boolean parsing
// ============================================================

test "true boolean" {
  match hml_parse("enabled: true") {
    Ok(nodes) => {
      match at(nodes, "enabled") |> as_bool {
        Some(v) => assert(v == true),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "false boolean" {
  match hml_parse("verbose: false") {
    Ok(nodes) => {
      match at(nodes, "verbose") |> as_bool {
        Some(v) => assert(v == false),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Null parsing
// ============================================================

test "null value" {
  match hml_parse("override: null") {
    Ok(nodes) => {
      match hml_get(nodes, "override") {
        Some(HNull) => assert(true),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Duration parsing
// ============================================================

test "duration seconds" {
  match hml_parse("timeout: 30s") {
    Ok(nodes) => {
      match hml_get(nodes, "timeout") {
        Some(HDuration(amt, u)) => {
          assert(amt == 30)
          assert(u == "s")
        },
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "duration milliseconds" {
  match hml_parse("interval: 500ms") {
    Ok(nodes) => {
      match hml_get(nodes, "interval") {
        Some(HDuration(amt, u)) => {
          assert(amt == 500)
          assert(u == "ms")
        },
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "duration hours" {
  match hml_parse("ttl: 24h") {
    Ok(nodes) => {
      match hml_get(nodes, "ttl") {
        Some(HDuration(amt, u)) => {
          assert(amt == 24)
          assert(u == "h")
        },
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "duration minutes" {
  match hml_parse("grace: 5m") {
    Ok(nodes) => {
      match hml_get(nodes, "grace") {
        Some(HDuration(amt, u)) => {
          assert(amt == 5)
          assert(u == "m")
        },
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "zero duration" {
  match hml_parse("delay: 0s") {
    Ok(nodes) => {
      match hml_get(nodes, "delay") {
        Some(HDuration(amt, u)) => {
          assert(amt == 0)
          assert(u == "s")
        },
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Array parsing
// ============================================================

test "integer array" {
  match hml_parse("ports: [8080, 8081, 8082]") {
    Ok(nodes) => {
      match hml_get(nodes, "ports") {
        Some(HArray(items)) => assert(length(items) == 3),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "string array" {
  match hml_parse("tags: [\"web\", \"prod\"]") {
    Ok(nodes) => {
      match hml_get(nodes, "tags") {
        Some(HArray(items)) => assert(length(items) == 2),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

test "empty array" {
  match hml_parse("items: []") {
    Ok(nodes) => {
      match hml_get(nodes, "items") {
        Some(HArray(items)) => assert(length(items) == 0),
        _ => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}

// ============================================================
// Multiple properties
// ============================================================

test "multiple properties" {
  match hml_parse("host: \"localhost\"\nport: 5432\nssl: true") {
    Ok(nodes) => assert(length(nodes) == 3),
    Err(_) => assert(false)
  }
}

test "empty input" {
  match hml_parse("") {
    Ok(nodes) => assert(length(nodes) == 0),
    Err(_) => assert(false)
  }
}

test "comment-only input" {
  match hml_parse("// just a comment\n// another") {
    Ok(nodes) => assert(length(nodes) == 0),
    Err(_) => assert(false)
  }
}
