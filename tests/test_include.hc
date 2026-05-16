import "../src/hml"

// ============================================================
// #include directive
// ============================================================

test "include inserts file nodes at insertion point" {
  match hml_parse_file("tests/fixtures/main.hml") {
    Ok(nodes) => {
      assert(length(nodes) == 3)
      match at(nodes, "title") |> as_str {
        Some(v) => assert(v == "My App"),
        None => assert(false)
      }
      match hml_elem(nodes, "database") {
        Some(db) => {
          match hml_attr(db, "host") |> as_str {
            Some(h) => assert(h == "localhost"),
            None => assert(false)
          }
        },
        None => assert(false)
      }
      match at(nodes, "version") |> as_str {
        Some(v) => assert(v == "1.0"),
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "multiple includes in one file" {
  match hml_parse_file("tests/fixtures/multi_include.hml") {
    Ok(nodes) => {
      assert(length(nodes) == 4)
      match at(nodes, "title") |> as_str {
        Some(v) => assert(v == "Multi"),
        None => assert(false)
      }
      match hml_elem(nodes, "database") {
        Some(_) => assert(true),
        None => assert(false)
      }
      match hml_elem(nodes, "cache") {
        Some(_) => assert(true),
        None => assert(false)
      }
      match at(nodes, "mode") |> as_str {
        Some(v) => assert(v == "production"),
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "nested includes" {
  match hml_parse_file("tests/fixtures/nested_a.hml") {
    Ok(nodes) => {
      assert(length(nodes) == 2)
      match at(nodes, "debug") |> as_bool {
        Some(v) => assert(v == true),
        None => assert(false)
      }
      match at(nodes, "app_name") |> as_str {
        Some(v) => assert(v == "nested"),
        None => assert(false)
      }
    },
    Err(e) => {
      println(e)
      assert(false)
    }
  }
}

test "circular include detected" {
  match hml_parse_file("tests/fixtures/circular_a.hml") {
    Ok(_) => assert(false),
    Err(e) => assert(starts_with(e, "circular include"))
  }
}

test "missing include file returns error" {
  match hml_parse_file("tests/fixtures/nonexistent.hml") {
    Ok(_) => assert(false),
    Err(e) => assert(starts_with(e, "cannot read"))
  }
}

test "hml_parse skips include directives" {
  let input = "title: \"hello\"\n#include \"something.hml\"\ncount: 42"
  match hml_parse(input) {
    Ok(nodes) => {
      assert(length(nodes) == 2)
      match at(nodes, "title") |> as_str {
        Some(v) => assert(v == "hello"),
        None => assert(false)
      }
      match at(nodes, "count") |> as_int {
        Some(v) => assert(v == 42),
        None => assert(false)
      }
    },
    Err(_) => assert(false)
  }
}
