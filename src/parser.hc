// parser.hc — HML parser
import "./hml_types"

// ============================================================
// Character helpers
// ============================================================

pub fun peek(s: string, pos: int) : string =>
  if pos >= str_length(s) { "" }
  else { s[pos: pos + 1] }

pub fun is_ws(c: string) : bool =>
  c == " " || c == "\t"

pub fun is_newline(c: string) : bool =>
  c == "\n" || c == "\r"

pub fun is_digit(c: string) : bool =>
  c != "" && contains("0123456789", c)

pub fun is_alpha(c: string) : bool =>
  c != "" && contains("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", c)

pub fun is_bare_key_char(c: string) : bool =>
  is_alpha(c) || is_digit(c) || c == "-" || c == "_"

pub fun is_hex_char(c: string) : bool =>
  c != "" && contains("0123456789abcdefABCDEF", c)

pub fun hex_digit_val(c: string) : int {
  if c == "0" { 0 } else if c == "1" { 1 } else if c == "2" { 2 }
  else if c == "3" { 3 } else if c == "4" { 4 } else if c == "5" { 5 }
  else if c == "6" { 6 } else if c == "7" { 7 } else if c == "8" { 8 }
  else if c == "9" { 9 } else if c == "a" || c == "A" { 10 }
  else if c == "b" || c == "B" { 11 } else if c == "c" || c == "C" { 12 }
  else if c == "d" || c == "D" { 13 } else if c == "e" || c == "E" { 14 }
  else { 15 }
}

pub fun parse_hex_digits(s: string, pos: int, n: int, acc: int) : result<(int, int), string> {
  if n == 0 { Ok((acc, pos)) }
  else if pos >= str_length(s) { Err("unexpected end in unicode escape") }
  else if is_hex_char(peek(s, pos)) {
    parse_hex_digits(s, pos + 1, n - 1, acc * 16 + hex_digit_val(peek(s, pos)))
  }
  else { Err("invalid hex digit in unicode escape: " + peek(s, pos)) }
}

// ============================================================
// Scanning helpers
// ============================================================

pub fun skip_ws(s: string, pos: int) : int {
  if pos >= str_length(s) { pos }
  else if is_ws(peek(s, pos)) { skip_ws(s, pos + 1) }
  else { pos }
}

pub fun skip_ws_and_newlines(s: string, pos: int) : int {
  if pos >= str_length(s) { pos }
  else if is_ws(peek(s, pos)) || is_newline(peek(s, pos)) { skip_ws_and_newlines(s, pos + 1) }
  else { pos }
}

pub fun skip_to_eol(s: string, pos: int) : int {
  if pos >= str_length(s) { pos }
  else if peek(s, pos) == "\n" { pos }
  else if peek(s, pos) == "\r" { pos }
  else { skip_to_eol(s, pos + 1) }
}

pub fun skip_comment(s: string, pos: int) : int {
  if pos + 1 < str_length(s) && peek(s, pos) == "/" && peek(s, pos + 1) == "/" {
    skip_to_eol(s, pos + 2)
  }
  else { pos }
}

pub fun skip_noise(s: string, pos: int) : int {
  let p1 = skip_ws_and_newlines(s, pos)
  if p1 + 1 < str_length(s) && peek(s, p1) == "/" && peek(s, p1 + 1) == "/" {
    let p2 = skip_to_eol(s, p1 + 2)
    skip_noise(s, p2)
  }
  else { p1 }
}

// ============================================================
// Key parsing
// ============================================================

pub fun parse_bare_key(s: string, pos: int, acc: string) : result<(string, int), string> {
  if pos >= str_length(s) || !is_bare_key_char(peek(s, pos)) {
    if str_length(acc) == 0 { Err("expected key at position " + show(pos)) }
    else { Ok((acc, pos)) }
  }
  else { parse_bare_key(s, pos + 1, acc + peek(s, pos)) }
}

pub fun parse_escape_u4(s: string, pos: int, acc: string) : result<(string, int), string> {
  match parse_hex_digits(s, pos + 2, 4, 0) {
    Ok((cp, p2)) => parse_basic_string(s, p2, acc + char_to_string(chr(cp))),
    Err(e) => Err(e)
  }
}

pub fun parse_escape_u8(s: string, pos: int, acc: string) : result<(string, int), string> {
  match parse_hex_digits(s, pos + 2, 8, 0) {
    Ok((cp, p2)) => parse_basic_string(s, p2, acc + char_to_string(chr(cp))),
    Err(e) => Err(e)
  }
}

pub fun parse_escape(s: string, pos: int, acc: string) : result<(string, int), string> {
  let next = peek(s, pos + 1)
  if next == "n" { parse_basic_string(s, pos + 2, acc + "\n") }
  else if next == "t" { parse_basic_string(s, pos + 2, acc + "\t") }
  else if next == "r" { parse_basic_string(s, pos + 2, acc + "\r") }
  else if next == "\\" { parse_basic_string(s, pos + 2, acc + "\\") }
  else if next == "\"" { parse_basic_string(s, pos + 2, acc + "\"") }
  else if next == "u" { parse_escape_u4(s, pos, acc) }
  else if next == "U" { parse_escape_u8(s, pos, acc) }
  else { Err("unknown escape: \\" + next) }
}

pub fun parse_basic_string(s: string, pos: int, acc: string) : result<(string, int), string> {
  if pos >= str_length(s) { Err("unterminated string") }
  else if peek(s, pos) == "\"" { Ok((acc, pos + 1)) }
  else if peek(s, pos) == "\\" {
    if pos + 1 >= str_length(s) { Err("unterminated escape") }
    else { parse_escape(s, pos, acc) }
  }
  else { parse_basic_string(s, pos + 1, acc + peek(s, pos)) }
}

pub fun parse_literal_string(s: string, pos: int, acc: string) : result<(string, int), string> {
  if pos >= str_length(s) { Err("unterminated literal string") }
  else if peek(s, pos) == "\'" { Ok((acc, pos + 1)) }
  else { parse_literal_string(s, pos + 1, acc + peek(s, pos)) }
}

pub fun parse_key(s: string, pos: int) : result<(string, int), string> {
  if peek(s, pos) == "\"" { parse_basic_string(s, pos + 1, "") }
  else if peek(s, pos) == "\'" { parse_literal_string(s, pos + 1, "") }
  else { parse_bare_key(s, pos, "") }
}

// ============================================================
// Value parsing
// ============================================================

pub fun parse_int_digits(s: string, pos: int, acc: string) : (string, int) {
  if pos >= str_length(s) { (acc, pos) }
  else if is_digit(peek(s, pos)) { parse_int_digits(s, pos + 1, acc + peek(s, pos)) }
  else if peek(s, pos) == "_" && pos + 1 < str_length(s) && is_digit(peek(s, pos + 1)) {
    parse_int_digits(s, pos + 1, acc)
  }
  else { (acc, pos) }
}

pub fun is_duration_unit(s: string, pos: int) : maybe<(string, int)> {
  if pos + 1 < str_length(s) && peek(s, pos) == "n" && peek(s, pos + 1) == "s" { Some(("ns", pos + 2)) }
  else if pos + 1 < str_length(s) && peek(s, pos) == "u" && peek(s, pos + 1) == "s" { Some(("us", pos + 2)) }
  else if pos + 1 < str_length(s) && peek(s, pos) == "m" && peek(s, pos + 1) == "s" { Some(("ms", pos + 2)) }
  else if peek(s, pos) == "s" { Some(("s", pos + 1)) }
  else if peek(s, pos) == "m" { Some(("m", pos + 1)) }
  else if peek(s, pos) == "h" { Some(("h", pos + 1)) }
  else if peek(s, pos) == "d" { Some(("d", pos + 1)) }
  else { None }
}

pub fun parse_number_or_duration(s: string, pos: int) : result<(Hml, int), string> {
  let sign_pos = if peek(s, pos) == "+" || peek(s, pos) == "-" { pos + 1 } else { pos }
  let sign_str = if peek(s, pos) == "-" { "-" } else { "" }
  let (digits_str, p2) = parse_int_digits(s, sign_pos, "")
  if str_length(digits_str) == 0 { Err("expected number at position " + show(pos)) }
  else {
    // Check for duration suffix (no sign allowed for durations)
    if sign_str == "" {
      match is_duration_unit(s, p2) {
        Some((unit, p3)) => Ok((HDuration(unwrap_maybe_or(parse_int(digits_str), 0), unit), p3)),
        None => parse_number_rest(s, p2, sign_str + digits_str)
      }
    }
    else { parse_number_rest(s, p2, sign_str + digits_str) }
  }
}

pub fun parse_number_rest(s: string, pos: int, int_part: string) : result<(Hml, int), string> {
  if peek(s, pos) == "." {
    let (frac, p2) = parse_int_digits(s, pos + 1, "")
    if str_length(frac) == 0 { Err("expected digits after decimal point") }
    else {
      let float_str = int_part + "." + frac
      if peek(s, p2) == "e" || peek(s, p2) == "E" {
        let (exp, p3) = parse_exponent(s, p2 + 1)
        Ok((HFloat(unwrap_maybe_or(parse_float(float_str + "e" + exp), 0.0)), p3))
      }
      else { Ok((HFloat(unwrap_maybe_or(parse_float(float_str), 0.0)), p2)) }
    }
  }
  else if peek(s, pos) == "e" || peek(s, pos) == "E" {
    let (exp, p2) = parse_exponent(s, pos + 1)
    Ok((HFloat(unwrap_maybe_or(parse_float(int_part + "e" + exp), 0.0)), p2))
  }
  else { Ok((HInt(unwrap_maybe_or(parse_int(int_part), 0)), pos)) }
}

pub fun parse_exponent(s: string, pos: int) : (string, int) {
  let start = if peek(s, pos) == "+" || peek(s, pos) == "-" { pos + 1 } else { pos }
  let sign = if peek(s, pos) == "-" { "-" } else { "" }
  let (digits_str, p2) = parse_int_digits(s, start, "")
  (sign + digits_str, p2)
}

pub fun parse_array(s: string, pos: int, items: list<Hml>) : result<(Hml, int), string> {
  let p1 = skip_noise(s, pos)
  if peek(s, p1) == "]" { Ok((HArray(items), p1 + 1)) }
  else {
    match parse_value(s, p1) {
      Ok((v, p2)) => {
        let p3 = skip_noise(s, p2)
        if peek(s, p3) == "," { parse_array(s, p3 + 1, items + [v]) }
        else if peek(s, p3) == "]" { Ok((HArray(items + [v]), p3 + 1)) }
        else { Err("expected ',' or ']' in array at position " + show(p3)) }
      },
      Err(e) => Err(e)
    }
  }
}

pub fun starts_with_at(s: string, pos: int, target: string) : bool {
  if pos + str_length(target) > str_length(s) { false }
  else { s[pos: pos + str_length(target)] == target }
}

pub fun parse_string_value(s: string, p: int) : result<(Hml, int), string> {
  if starts_with_at(s, p, "\"\"\"") {
    parse_ml_basic_string(s, p + 3, "")
  }
  else {
    match parse_basic_string(s, p + 1, "") {
      Ok((v, p2)) => Ok((HStr(v), p2)),
      Err(e) => Err(e)
    }
  }
}

pub fun parse_literal_value(s: string, p: int) : result<(Hml, int), string> {
  if starts_with_at(s, p, "\'\'\'") {
    parse_ml_literal_string(s, p + 3, "")
  }
  else {
    match parse_literal_string(s, p + 1, "") {
      Ok((v, p2)) => Ok((HStr(v), p2)),
      Err(e) => Err(e)
    }
  }
}

pub fun parse_value(s: string, pos: int) : result<(Hml, int), string> {
  let p = skip_ws(s, pos)
  if peek(s, p) == "\"" { parse_string_value(s, p) }
  else if peek(s, p) == "\'" { parse_literal_value(s, p) }
  else if starts_with_at(s, p, "true") && !is_bare_key_char(peek(s, p + 4)) {
    Ok((HBool(true), p + 4))
  }
  else if starts_with_at(s, p, "false") && !is_bare_key_char(peek(s, p + 5)) {
    Ok((HBool(false), p + 5))
  }
  else if starts_with_at(s, p, "null") && !is_bare_key_char(peek(s, p + 4)) {
    Ok((HNull, p + 4))
  }
  else if starts_with_at(s, p, "inf") && !is_bare_key_char(peek(s, p + 3)) {
    Ok((HFloat(1.0 / 0.0), p + 3))
  }
  else if starts_with_at(s, p, "-inf") && !is_bare_key_char(peek(s, p + 4)) {
    Ok((HFloat(0.0 - 1.0 / 0.0), p + 4))
  }
  else if starts_with_at(s, p, "nan") && !is_bare_key_char(peek(s, p + 3)) {
    Ok((HFloat(0.0 / 0.0), p + 3))
  }
  else if peek(s, p) == "[" { parse_array(s, p + 1, []) }
  else if peek(s, p) == "@" { parse_inline_element(s, p) }
  else if is_digit(peek(s, p)) || peek(s, p) == "+" || peek(s, p) == "-" {
    parse_number_or_duration(s, p)
  }
  else { Err("unexpected character '" + peek(s, p) + "' at position " + show(p)) }
}

pub fun parse_ml_basic_string(s: string, pos: int, acc: string) : result<(Hml, int), string> {
  // Skip leading newline
  let start = if peek(s, pos) == "\n" { pos + 1 }
              else if peek(s, pos) == "\r" && peek(s, pos + 1) == "\n" { pos + 2 }
              else { pos }
  parse_ml_basic_body(s, start, acc)
}

pub fun parse_ml_basic_escape(s: string, pos: int, acc: string) : result<(Hml, int), string> {
  if pos + 1 >= str_length(s) { Err("unterminated escape in multi-line string") }
  else {
    let next = peek(s, pos + 1)
    if next == "n" { parse_ml_basic_body(s, pos + 2, acc + "\n") }
    else if next == "t" { parse_ml_basic_body(s, pos + 2, acc + "\t") }
    else if next == "\\" { parse_ml_basic_body(s, pos + 2, acc + "\\") }
    else if next == "\"" { parse_ml_basic_body(s, pos + 2, acc + "\"") }
    else if is_newline(next) { parse_ml_basic_body(s, skip_ws_and_newlines(s, pos + 1), acc) }
    else { parse_ml_basic_body(s, pos + 2, acc + "\\" + next) }
  }
}

pub fun parse_ml_basic_body(s: string, pos: int, acc: string) : result<(Hml, int), string> {
  if pos >= str_length(s) { Err("unterminated multi-line string") }
  else if starts_with_at(s, pos, "\"\"\"") { Ok((HStr(acc), pos + 3)) }
  else if peek(s, pos) == "\\" { parse_ml_basic_escape(s, pos, acc) }
  else { parse_ml_basic_body(s, pos + 1, acc + peek(s, pos)) }
}

pub fun parse_ml_literal_string(s: string, pos: int, acc: string) : result<(Hml, int), string> {
  let start = if peek(s, pos) == "\n" { pos + 1 }
              else if peek(s, pos) == "\r" && peek(s, pos + 1) == "\n" { pos + 2 }
              else { pos }
  parse_ml_literal_body(s, start, acc)
}

pub fun parse_ml_literal_body(s: string, pos: int, acc: string) : result<(Hml, int), string> {
  if pos >= str_length(s) { Err("unterminated multi-line literal string") }
  else if starts_with_at(s, pos, "\'\'\'") { Ok((HStr(acc), pos + 3)) }
  else { parse_ml_literal_body(s, pos + 1, acc + peek(s, pos)) }
}

// ============================================================
// Element parsing
// ============================================================

pub fun parse_element_name(s: string, pos: int, acc: string) : result<(string, int), string> {
  match parse_bare_key(s, pos, "") {
    Ok((k, p2)) => {
      let name = acc + k
      if peek(s, p2) == "." { parse_element_name(s, p2 + 1, name + ".") }
      else { Ok((name, p2)) }
    },
    Err(e) => Err(e)
  }
}

pub fun parse_attributes(s: string, pos: int, attrs: list<(string, Hml)>) : result<(list<(string, Hml)>, int), string> {
  let p1 = skip_noise(s, pos)
  if peek(s, p1) == ")" { Ok((attrs, p1 + 1)) }
  else {
    match parse_key(s, p1) {
      Ok((key, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4) {
            Ok((val, p5)) => {
              let p6 = skip_noise(s, p5)
              if peek(s, p6) == "," { parse_attributes(s, p6 + 1, attrs + [(key, val)]) }
              else { parse_attributes(s, p6, attrs + [(key, val)]) }
            },
            Err(e) => Err(e)
          }
        }
        else {
          // Boolean flag (no value)
          let p4 = skip_noise(s, p3)
          if peek(s, p4) == "," { parse_attributes(s, p4 + 1, attrs + [(key, HBool(true))]) }
          else { parse_attributes(s, p4, attrs + [(key, HBool(true))]) }
        }
      },
      Err(e) => Err(e)
    }
  }
}

pub fun parse_body(s: string, pos: int, nodes: list<HmlNode>) : result<(list<HmlNode>, int), string> {
  let p1 = skip_noise(s, pos)
  if peek(s, p1) == "}" { Ok((nodes, p1 + 1)) }
  else if peek(s, p1) == "@" {
    match parse_element(s, p1) {
      Ok((elem, p2)) => parse_body(s, p2, nodes + [NElem(elem)]),
      Err(e) => Err(e)
    }
  }
  else if peek(s, p1) == "" { Err("unterminated body (missing '}')") }
  else {
    // Try to parse as property (key: value)
    match parse_key(s, p1) {
      Ok((key, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4) {
            Ok((val, p5)) => parse_body(s, p5, nodes + [NProp(key, val)]),
            Err(e) => Err(e)
          }
        }
        else { Err("expected ':' after key '" + key + "' at position " + show(p3)) }
      },
      Err(e) => Err("unexpected content in body at position " + show(p1))
    }
  }
}

pub fun parse_element(s: string, pos: int) : result<(Hml, int), string> {
  // pos should point at '@'
  let p1 = pos + 1
  match parse_element_name(s, p1, "") {
    Ok((name, p2)) => {
      let p3 = skip_ws(s, p2)
      // Parse optional attributes
      match (if peek(s, p3) == "(" {
        match parse_attributes(s, p3 + 1, []) {
          Ok((attrs, p4)) => Ok((attrs, p4)),
          Err(e) => Err(e)
        }
      } else { Ok(([], p3)) }) {
        Ok((attrs, p4)) => {
          let p5 = skip_ws(s, p4)
          // Parse optional body
          if peek(s, p5) == "{" {
            match parse_body(s, p5 + 1, []) {
              Ok((body, p6)) => Ok((HElement(name, attrs, body), p6)),
              Err(e) => Err(e)
            }
          }
          else { Ok((HElement(name, attrs, []), p5)) }
        },
        Err(e) => Err(e)
      }
    },
    Err(e) => Err(e)
  }
}

pub fun parse_inline_element(s: string, pos: int) : result<(Hml, int), string> =>
  parse_element(s, pos)

// ============================================================
// Document parsing
// ============================================================

pub fun parse_document(s: string, pos: int, nodes: list<HmlNode>) : result<list<HmlNode>, string> {
  let p1 = skip_noise(s, pos)
  if p1 >= str_length(s) { Ok(nodes) }
  else if peek(s, p1) == "@" {
    match parse_element(s, p1) {
      Ok((elem, p2)) => parse_document(s, p2, nodes + [NElem(elem)]),
      Err(e) => Err(e)
    }
  }
  else if peek(s, p1) == "#" {
    // Skip directives for now (consume to end of line)
    let p2 = skip_to_eol(s, p1)
    parse_document(s, p2, nodes)
  }
  else {
    // Try as property
    match parse_key(s, p1) {
      Ok((key, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4) {
            Ok((val, p5)) => parse_document(s, p5, nodes + [NProp(key, val)]),
            Err(e) => Err(e)
          }
        }
        else { Err("expected ':' after key '" + key + "' at position " + show(p3)) }
      },
      Err(_) => Err("unexpected content at position " + show(p1))
    }
  }
}

pub fun hml_parse(input: string) : result<list<HmlNode>, string> =>
  parse_document(input, 0, [])