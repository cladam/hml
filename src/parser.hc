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

pub fun hml_is_digit(c: string) : bool =>
  c != "" && contains("0123456789", c)

pub fun hml_is_alpha(c: string) : bool =>
  c != "" && contains("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", c)

pub fun is_bare_key_char(c: string) : bool =>
  hml_is_alpha(c) || hml_is_digit(c) || c == "-" || c == "_"

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
// Radix integer helpers
// ============================================================

pub fun is_octal_char(c: string) : bool =>
  c != "" && contains("01234567", c)

pub fun is_binary_char(c: string) : bool =>
  c == "0" || c == "1"

pub fun parse_hex_int_digits(s: string, pos: int, acc: int) : (int, int, int) {
  // returns (value, pos, count)
  if pos >= str_length(s) || !is_hex_char(peek(s, pos)) {
    if peek(s, pos) == "_" && pos + 1 < str_length(s) && is_hex_char(peek(s, pos + 1)) {
      parse_hex_int_digits(s, pos + 1, acc)
    }
    else { (acc, pos, 0) }
  }
  else {
    let (val, p2, cnt) = parse_hex_int_digits(s, pos + 1, acc * 16 + hex_digit_val(peek(s, pos)))
    (val, p2, cnt + 1)
  }
}

pub fun parse_hex_int(s: string, pos: int, sign: string) : result<(Hml, int), string> {
  let (val, p2, cnt) = parse_hex_int_digits(s, pos, 0)
  if cnt == 0 { Err("expected hex digits after 0x at position " + show(pos)) }
  else {
    let result = if sign == "-" { 0 - val } else { val }
    Ok((HInt(result), p2))
  }
}

pub fun parse_octal_int_digits(s: string, pos: int, acc: int) : (int, int, int) {
  if pos >= str_length(s) || !is_octal_char(peek(s, pos)) {
    if peek(s, pos) == "_" && pos + 1 < str_length(s) && is_octal_char(peek(s, pos + 1)) {
      parse_octal_int_digits(s, pos + 1, acc)
    }
    else { (acc, pos, 0) }
  }
  else {
    let digit = hex_digit_val(peek(s, pos))
    let (val, p2, cnt) = parse_octal_int_digits(s, pos + 1, acc * 8 + digit)
    (val, p2, cnt + 1)
  }
}

pub fun parse_octal_int(s: string, pos: int, sign: string) : result<(Hml, int), string> {
  let (val, p2, cnt) = parse_octal_int_digits(s, pos, 0)
  if cnt == 0 { Err("expected octal digits after 0o at position " + show(pos)) }
  else {
    let result = if sign == "-" { 0 - val } else { val }
    Ok((HInt(result), p2))
  }
}

pub fun parse_binary_int_digits(s: string, pos: int, acc: int) : (int, int, int) {
  if pos >= str_length(s) || !is_binary_char(peek(s, pos)) {
    if peek(s, pos) == "_" && pos + 1 < str_length(s) && is_binary_char(peek(s, pos + 1)) {
      parse_binary_int_digits(s, pos + 1, acc)
    }
    else { (acc, pos, 0) }
  }
  else {
    let digit = if peek(s, pos) == "1" { 1 } else { 0 }
    let (val, p2, cnt) = parse_binary_int_digits(s, pos + 1, acc * 2 + digit)
    (val, p2, cnt + 1)
  }
}

pub fun parse_binary_int(s: string, pos: int, sign: string) : result<(Hml, int), string> {
  let (val, p2, cnt) = parse_binary_int_digits(s, pos, 0)
  if cnt == 0 { Err("expected binary digits after 0b at position " + show(pos)) }
  else {
    let result = if sign == "-" { 0 - val } else { val }
    Ok((HInt(result), p2))
  }
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
  else if next == "b" { parse_basic_string(s, pos + 2, acc + char_to_string(chr(8))) }
  else if next == "f" { parse_basic_string(s, pos + 2, acc + char_to_string(chr(12))) }
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

pub fun parse_key_path(s: string, pos: int) : result<(list<string>, int), string> {
  match parse_key(s, pos) {
    Ok((key, p2)) => {
      if peek(s, p2) == "." {
        match parse_key_path(s, p2 + 1) {
          Ok((rest, p3)) => Ok(([key] + rest, p3)),
          Err(e) => Err(e)
        }
      }
      else { Ok(([key], p2)) }
    },
    Err(e) => Err(e)
  }
}

pub fun wrap_dotted_value(segments: list<string>, val: Hml) : HmlNode {
  match segments {
    [k] => NProp(k, val),
    [k, ..rest] => NElem(HElement(k, [], [wrap_dotted_value(rest, val)])),
    _ => NProp("", val)
  }
}

// ============================================================
// Value parsing
// ============================================================

pub fun parse_int_digits(s: string, pos: int, acc: string) : (string, int) {
  if pos >= str_length(s) { (acc, pos) }
  else if hml_is_digit(peek(s, pos)) { parse_int_digits(s, pos + 1, acc + peek(s, pos)) }
  else if peek(s, pos) == "_" && pos + 1 < str_length(s) && hml_is_digit(peek(s, pos + 1)) {
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

// ============================================================
// Date-time parsing (RFC 3339)
// ============================================================

pub fun validated_datetime(dt_str: string, pos: int) : result<(Hml, int), string> {
  Ok((HDatetime(dt_str), pos))
}

pub fun finish_time_frac(s: string, pos: int, time_str: string) : result<(Hml, int), string> {
  let (f, p2) = parse_int_digits(s, pos, "")
  validated_datetime(time_str + "." + f, p2)
}

pub fun try_parse_time(s: string, pos: int, hour: string) : result<(Hml, int), string> {
  // pos is at ':' after HH. Match :MM:SS [.frac]
  if pos + 6 > str_length(s) { Err("incomplete time") }
  else if !hml_is_digit(peek(s, pos+1)) || !hml_is_digit(peek(s, pos+2)) || peek(s, pos+3) != ":" || !hml_is_digit(peek(s, pos+4)) || !hml_is_digit(peek(s, pos+5)) {
    Err("invalid time format")
  }
  else {
    let time_str = hour + ":" + peek(s, pos+1) + peek(s, pos+2) + ":" + peek(s, pos+4) + peek(s, pos+5)
    if peek(s, pos + 6) == "." { finish_time_frac(s, pos + 7, time_str) }
    else { validated_datetime(time_str, pos + 6) }
  }
}

pub fun try_parse_tz_offset(s: string, pos: int, dt_prefix: string) : result<(Hml, int), string> {
  let sign = peek(s, pos)
  if pos + 6 > str_length(s) { Err("incomplete timezone offset") }
  else if !hml_is_digit(peek(s, pos+1)) || !hml_is_digit(peek(s, pos+2)) || peek(s, pos+3) != ":" || !hml_is_digit(peek(s, pos+4)) || !hml_is_digit(peek(s, pos+5)) {
    Err("invalid timezone offset format")
  }
  else {
    validated_datetime(dt_prefix + sign + peek(s, pos+1) + peek(s, pos+2) + ":" + peek(s, pos+4) + peek(s, pos+5), pos + 6)
  }
}

pub fun parse_datetime_offset(s: string, pos: int, date_str: string, time_str: string) : result<(Hml, int), string> {
  if peek(s, pos) == "Z" || peek(s, pos) == "z" {
    validated_datetime(date_str + "T" + time_str + "Z", pos + 1)
  }
  else if peek(s, pos) == "+" || peek(s, pos) == "-" {
    try_parse_tz_offset(s, pos, date_str + "T" + time_str)
  }
  else { validated_datetime(date_str + "T" + time_str, pos) }
}

pub fun finish_datetime_frac(s: string, pos: int, date_str: string, time_str: string) : result<(Hml, int), string> {
  let (f, p2) = parse_int_digits(s, pos, "")
  parse_datetime_offset(s, p2, date_str, time_str + "." + f)
}

pub fun finish_datetime(s: string, pos: int, date_str: string, time_str: string) : result<(Hml, int), string> {
  if peek(s, pos) == "." { finish_datetime_frac(s, pos + 1, date_str, time_str) }
  else { parse_datetime_offset(s, pos, date_str, time_str) }
}

pub fun try_parse_datetime_time(s: string, pos: int, date_str: string) : result<(Hml, int), string> {
  // pos is right after T. Parse HH:MM:SS [.frac] [offset]
  if pos + 8 > str_length(s) { Err("incomplete time in datetime") }
  else if !hml_is_digit(peek(s, pos)) || !hml_is_digit(peek(s, pos+1)) || peek(s, pos+2) != ":" || !hml_is_digit(peek(s, pos+3)) || !hml_is_digit(peek(s, pos+4)) || peek(s, pos+5) != ":" || !hml_is_digit(peek(s, pos+6)) || !hml_is_digit(peek(s, pos+7)) {
    Err("invalid time format in datetime")
  }
  else {
    let time_str = peek(s, pos) + peek(s, pos+1) + ":" + peek(s, pos+3) + peek(s, pos+4) + ":" + peek(s, pos+6) + peek(s, pos+7)
    finish_datetime(s, pos + 8, date_str, time_str)
  }
}

pub fun try_parse_date(s: string, pos: int, year: string) : result<(Hml, int), string> {
  // pos is at '-' after YYYY. Match -MM-DD [T time [offset]]
  if pos + 6 > str_length(s) { Err("incomplete date") }
  else if !hml_is_digit(peek(s, pos+1)) || !hml_is_digit(peek(s, pos+2)) || peek(s, pos+3) != "-" || !hml_is_digit(peek(s, pos+4)) || !hml_is_digit(peek(s, pos+5)) {
    Err("invalid date format")
  }
  else {
    let date_str = year + "-" + peek(s, pos+1) + peek(s, pos+2) + "-" + peek(s, pos+4) + peek(s, pos+5)
    if peek(s, pos + 6) == "T" || peek(s, pos + 6) == "t" {
      try_parse_datetime_time(s, pos + 7, date_str)
    }
    else { validated_datetime(date_str, pos + 6) }
  }
}

// ============================================================
// Number / duration / datetime dispatch
// ============================================================

pub fun parse_number_or_duration(s: string, pos: int) : result<(Hml, int), string> {
  let sign_pos = if peek(s, pos) == "+" || peek(s, pos) == "-" { pos + 1 } else { pos }
  let sign_str = if peek(s, pos) == "-" { "-" } else { "" }
  // Check for 0x, 0o, 0b prefixes
  if peek(s, sign_pos) == "0" && peek(s, sign_pos + 1) == "x" {
    parse_hex_int(s, sign_pos + 2, sign_str)
  }
  else if peek(s, sign_pos) == "0" && peek(s, sign_pos + 1) == "o" {
    parse_octal_int(s, sign_pos + 2, sign_str)
  }
  else if peek(s, sign_pos) == "0" && peek(s, sign_pos + 1) == "b" {
    parse_binary_int(s, sign_pos + 2, sign_str)
  }
  else {
    let (digits_str, p2) = parse_int_digits(s, sign_pos, "")
    if str_length(digits_str) == 0 { Err("expected number at position " + show(pos)) }
    // Date: YYYY-MM-DD...
    else if sign_str == "" && str_length(digits_str) == 4 && peek(s, p2) == "-" && hml_is_digit(peek(s, p2 + 1)) {
      try_parse_date(s, p2, digits_str)
    }
    // Time: HH:MM:SS...
    else if sign_str == "" && str_length(digits_str) == 2 && peek(s, p2) == ":" && hml_is_digit(peek(s, p2 + 1)) {
      try_parse_time(s, p2, digits_str)
    }
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

pub fun parse_array(s: string, pos: int, items: list<Hml>, text_elems: list<string>) : result<(Hml, int), string> {
  let p1 = skip_noise(s, pos)
  if peek(s, p1) == "]" { Ok((HArray(items), p1 + 1)) }
  else {
    match parse_value(s, p1, text_elems) {
      Ok((v, p2)) => {
        let p3 = skip_noise(s, p2)
        if peek(s, p3) == "," { parse_array(s, p3 + 1, items + [v], text_elems) }
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

pub fun parse_value(s: string, pos: int, text_elems: list<string>) : result<(Hml, int), string> {
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
  else if peek(s, p) == "[" { parse_array(s, p + 1, [], text_elems) }
  else if peek(s, p) == "@" { parse_inline_element(s, p, text_elems) }
  else if hml_is_digit(peek(s, p)) || peek(s, p) == "+" || peek(s, p) == "-" {
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
    else if next == "r" { parse_ml_basic_body(s, pos + 2, acc + "\r") }
    else if next == "b" { parse_ml_basic_body(s, pos + 2, acc + char_to_string(chr(8))) }
    else if next == "f" { parse_ml_basic_body(s, pos + 2, acc + char_to_string(chr(12))) }
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

pub fun parse_attributes(s: string, pos: int, attrs: list<(string, Hml)>, text_elems: list<string>) : result<(list<(string, Hml)>, int), string> {
  let p1 = skip_noise(s, pos)
  if peek(s, p1) == ")" { Ok((attrs, p1 + 1)) }
  else {
    match parse_key(s, p1) {
      Ok((key, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4, text_elems) {
            Ok((val, p5)) => {
              let p6 = skip_noise(s, p5)
              if peek(s, p6) == "," { parse_attributes(s, p6 + 1, attrs + [(key, val)], text_elems) }
              else { parse_attributes(s, p6, attrs + [(key, val)], text_elems) }
            },
            Err(e) => Err(e)
          }
        }
        else {
          // Boolean flag (no value)
          let p4 = skip_noise(s, p3)
          if peek(s, p4) == "," { parse_attributes(s, p4 + 1, attrs + [(key, HBool(true))], text_elems) }
          else { parse_attributes(s, p4, attrs + [(key, HBool(true))], text_elems) }
        }
      },
      Err(e) => Err(e)
    }
  }
}

// ============================================================
// Body node merging (for dotted keys)
// ============================================================

pub fun is_elem_named(node: HmlNode, name: string) : bool {
  match node {
    NElem(HElement(n, _, _)) => n == name,
    _ => false
  }
}

pub fun has_elem_named(nodes: list<HmlNode>, name: string) : bool {
  match nodes {
    [] => false,
    [first, ..rest] => if is_elem_named(first, name) { true } else { has_elem_named(rest, name) }
  }
}

pub fun add_if_missing(items: list<string>, item: string) : list<string> =>
  if list_contains(items, item) { items } else { items + [item] }

pub fun first_segment(segments: list<string>) : string {
  match segments {
    [s, ..] => s,
    _ => ""
  }
}

pub fun hml_elem_name(v: Hml) : string {
  match v {
    HElement(n, _, _) => n,
    _ => ""
  }
}

pub fun merge_two_elems(existing: HmlNode, new_body: list<HmlNode>) : HmlNode {
  match existing {
    NElem(HElement(n, a, b)) => NElem(HElement(n, a, merge_body(b + new_body))),
    _ => existing
  }
}

pub fun try_merge_elem(nodes: list<HmlNode>, name: string, attrs: list<(string, Hml)>, body: list<HmlNode>, checked: list<HmlNode>) : list<HmlNode> {
  match nodes {
    [] => checked + [NElem(HElement(name, attrs, body))],
    [first, ..rest] => {
      if is_elem_named(first, name) {
        checked + [merge_two_elems(first, body)] + rest
      }
      else { try_merge_elem(rest, name, attrs, body, checked + [first]) }
    }
  }
}

pub fun insert_or_merge(acc: list<HmlNode>, node: HmlNode) : list<HmlNode> {
  match node {
    NElem(HElement(name, attrs, body)) => try_merge_elem(acc, name, attrs, body, []),
    _ => acc + [node]
  }
}

pub fun merge_body_acc(remaining: list<HmlNode>, acc: list<HmlNode>) : list<HmlNode> {
  match remaining {
    [] => acc,
    [node, ..rest] => merge_body_acc(rest, insert_or_merge(acc, node))
  }
}

pub fun merge_body(nodes: list<HmlNode>) : list<HmlNode> =>
  merge_body_acc(nodes, [])

pub fun parse_body(s: string, pos: int, nodes: list<HmlNode>, text_elems: list<string>, dotted_names: list<string>) : result<(list<HmlNode>, int), string> {
  let p1 = skip_noise(s, pos)
  if peek(s, p1) == "}" { Ok((nodes, p1 + 1)) }
  else if peek(s, p1) == "@" {
    match parse_element(s, p1, text_elems) {
      Ok((elem, p2)) => {
        let ename = hml_elem_name(elem)
        if list_contains(dotted_names, ename) {
          Err("merge rule: cannot mix explicit @" + ename + " with dotted key '" + ename + ".*'")
        }
        else { parse_body(s, p2, nodes + [NElem(elem)], text_elems, dotted_names) }
      },
      Err(e) => Err(e)
    }
  }
  else if peek(s, p1) == "" { Err("unterminated body (missing '}')") }
  else {
    match parse_key_path(s, p1) {
      Ok((segments, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4, text_elems) {
            Ok((val, p5)) => {
              let new_node = wrap_dotted_value(segments, val)
              let root = first_segment(segments)
              if length(segments) > 1 && has_elem_named(nodes, root) && !list_contains(dotted_names, root) {
                Err("merge rule: cannot mix dotted key '" + root + ".*' with explicit @" + root)
              }
              else if length(segments) > 1 { parse_body(s, p5, insert_or_merge(nodes, new_node), text_elems, add_if_missing(dotted_names, root)) }
              else { parse_body(s, p5, nodes + [new_node], text_elems, dotted_names) }
            },
            Err(e) => Err(e)
          }
        }
        else { Err("expected ':' after key at position " + show(p3)) }
      },
      Err(_) => Err("unexpected content in body at position " + show(p1))
    }
  }
}

pub fun is_text_elem(name: string, text_elems: list<string>) : bool {
  match text_elems {
    [] => false,
    [x, ..rest] => if x == name { true } else { is_text_elem(name, rest) }
  }
}

pub fun collect_text_run(s: string, pos: int, acc: string, text_elems: list<string>) : (list<HmlNode>, int) {
  if pos >= str_length(s) { (if acc == "" { [] } else { [NText(acc)] }, pos) }
  else if peek(s, pos) == "}" { (if acc == "" { [] } else { [NText(acc)] }, pos) }
  else if peek(s, pos) == "\n" { (if acc == "" { [] } else { [NText(acc)] }, pos + 1) }
  else if peek(s, pos) == "@" {
    match try_inline_element(s, pos, text_elems) {
      Some((elem, p2)) => {
        let text_nodes = if acc == "" { [] } else { [NText(acc)] }
        let (rest_nodes, p3) = collect_text_run(s, p2, "", text_elems)
        (text_nodes + [NElem(elem)] + rest_nodes, p3)
      },
      None => collect_text_run(s, pos + 1, acc + "@", text_elems)
    }
  }
  else { collect_text_run(s, pos + 1, acc + peek(s, pos), text_elems) }
}

pub fun try_inline_element(s: string, pos: int, text_elems: list<string>) : maybe<(Hml, int)> {
  // Inline elements always have text body. No whitespace skip before '{'.
  let p1 = pos + 1
  match parse_element_name(s, p1, "") {
    Ok((name, p2)) => {
      if peek(s, p2) == "(" {
        match parse_attributes(s, p2 + 1, [], text_elems) {
          Ok((attrs, p3)) => {
            if peek(s, p3) == "{" {
              match parse_text_body(s, p3 + 1, [], text_elems) {
                Ok((body, p4)) => Some((HElement(name, attrs, body), p4)),
                Err(_) => None
              }
            }
            else { Some((HElement(name, attrs, []), p3)) }
          },
          Err(_) => None
        }
      }
      else if peek(s, p2) == "{" {
        match parse_text_body(s, p2 + 1, [], text_elems) {
          Ok((body, p3)) => Some((HElement(name, [], body), p3)),
          Err(_) => None
        }
      }
      else { Some((HElement(name, [], []), p2)) }
    },
    Err(_) => None
  }
}

pub fun try_text_property(s: string, pos: int, text_elems: list<string>) : maybe<(HmlNode, int)> {
  match parse_bare_key(s, pos, "") {
    Ok((key, p2)) => {
      let p3 = skip_ws(s, p2)
      if peek(s, p3) == ":" {
        let p4 = skip_ws(s, p3 + 1)
        match parse_value(s, p4, text_elems) {
          Ok((val, p5)) => Some((NProp(key, val), p5)),
          Err(_) => None
        }
      }
      else { None }
    },
    Err(_) => None
  }
}

pub fun parse_text_body(s: string, pos: int, nodes: list<HmlNode>, text_elems: list<string>) : result<(list<HmlNode>, int), string> {
  let p1 = skip_ws(s, pos)
  if p1 >= str_length(s) { Err("unterminated text body (missing '}')") }
  else if peek(s, p1) == "}" { Ok((nodes, p1 + 1)) }
  else if is_newline(peek(s, p1)) { parse_text_body(s, p1 + 1, nodes, text_elems) }
  else if p1 + 1 < str_length(s) && peek(s, p1) == "/" && peek(s, p1 + 1) == "/" {
    let p2 = skip_to_eol(s, p1 + 2)
    parse_text_body(s, p2, nodes, text_elems)
  }
  else if peek(s, p1) == "@" {
    match parse_element(s, p1, text_elems) {
      Ok((elem, p2)) => parse_text_body(s, p2, nodes + [NElem(elem)], text_elems),
      Err(e) => Err(e)
    }
  }
  else {
    match try_text_property(s, p1, text_elems) {
      Some((prop, p2)) => parse_text_body(s, p2, nodes + [prop], text_elems),
      None => {
        let (text_nodes, p2) = collect_text_run(s, p1, "", text_elems)
        parse_text_body(s, p2, nodes + text_nodes, text_elems)
      }
    }
  }
}

pub fun parse_element(s: string, pos: int, text_elems: list<string>) : result<(Hml, int), string> {
  // pos should point at '@'
  let p1 = pos + 1
  match parse_element_name(s, p1, "") {
    Ok((name, p2)) => {
      let p3 = skip_ws(s, p2)
      // Parse optional attributes
      match (if peek(s, p3) == "(" {
        match parse_attributes(s, p3 + 1, [], text_elems) {
          Ok((attrs, p4)) => Ok((attrs, p4)),
          Err(e) => Err(e)
        }
      } else { Ok(([], p3)) }) {
        Ok((attrs, p4)) => {
          let p5 = skip_ws(s, p4)
          // Parse optional body
          if peek(s, p5) == "{" {
            if is_text_elem(name, text_elems) {
              match parse_text_body(s, p5 + 1, [], text_elems) {
                Ok((body, p6)) => Ok((HElement(name, attrs, body), p6)),
                Err(e) => Err(e)
              }
            }
            else {
              match parse_body(s, p5 + 1, [], text_elems, []) {
                Ok((body, p6)) => Ok((HElement(name, attrs, body), p6)),
                Err(e) => Err(e)
              }
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

pub fun parse_inline_element(s: string, pos: int, text_elems: list<string>) : result<(Hml, int), string> =>
  parse_element(s, pos, text_elems)

pub fun parse_text_names(s: string, pos: int, names: list<string>) : (list<string>, int) {
  let p1 = skip_ws(s, pos)
  if p1 >= str_length(s) || is_newline(peek(s, p1)) { (names, p1) }
  else if peek(s, p1) == "," { parse_text_names(s, p1 + 1, names) }
  else {
    match parse_bare_key(s, p1, "") {
      Ok((name, p2)) => parse_text_names(s, p2, names + [name]),
      Err(_) => (names, p1)
    }
  }
}

pub fun parse_text_directive(s: string, pos: int) : maybe<(list<string>, int)> {
  // pos is at '#'. Check for #text: name1, name2
  if !starts_with_at(s, pos, "#text") { None }
  else {
    let p1 = skip_ws(s, pos + 5)
    if peek(s, p1) == ":" {
      let (names, p2) = parse_text_names(s, p1 + 1, [])
      Some((names, p2))
    }
    else { None }
  }
}

// ============================================================
// Document parsing
// ============================================================

pub fun default_text_elems() : list<string> => ["body", "p", "text"]

pub fun parse_document(s: string, pos: int, nodes: list<HmlNode>, text_elems: list<string>, dotted_names: list<string>) : result<list<HmlNode>, string> {
  let p1 = skip_noise(s, pos)
  if p1 >= str_length(s) { Ok(nodes) }
  else if peek(s, p1) == "@" {
    match parse_element(s, p1, text_elems) {
      Ok((elem, p2)) => {
        let ename = hml_elem_name(elem)
        if list_contains(dotted_names, ename) {
          Err("merge rule: cannot mix explicit @" + ename + " with dotted key '" + ename + ".*'")
        }
        else { parse_document(s, p2, nodes + [NElem(elem)], text_elems, dotted_names) }
      },
      Err(e) => Err(e)
    }
  }
  else if peek(s, p1) == "#" {
    match parse_namespace_directive(s, p1) {
      Some((pfx, uri, p2)) => parse_document(s, p2, nodes + [NNamespace(pfx, uri)], text_elems, dotted_names),
      None => {
        match parse_text_directive(s, p1) {
          Some((names, p2)) => parse_document(s, p2, nodes, text_elems + names, dotted_names),
          None => {
            let p2 = skip_to_eol(s, p1)
            parse_document(s, p2, nodes, text_elems, dotted_names)
          }
        }
      }
    }
  }
  else {
    match parse_key_path(s, p1) {
      Ok((segments, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4, text_elems) {
            Ok((val, p5)) => {
              let new_node = wrap_dotted_value(segments, val)
              let root = first_segment(segments)
              if length(segments) > 1 && has_elem_named(nodes, root) && !list_contains(dotted_names, root) {
                Err("merge rule: cannot mix dotted key '" + root + ".*' with explicit @" + root)
              }
              else if length(segments) > 1 { parse_document(s, p5, insert_or_merge(nodes, new_node), text_elems, add_if_missing(dotted_names, root)) }
              else { parse_document(s, p5, nodes + [new_node], text_elems, dotted_names) }
            },
            Err(e) => Err(e)
          }
        }
        else { Err("expected ':' after key at position " + show(p3)) }
      },
      Err(_) => Err("unexpected content at position " + show(p1))
    }
  }
}

pub fun hml_parse(input: string) : result<list<HmlNode>, string> =>
  parse_document(input, 0, [], default_text_elems(), [])

// ============================================================
// File-based parsing with #include support
// ============================================================

pub fun find_last_slash(s: string, pos: int, last_end: int) : int {
  if pos >= str_length(s) { last_end }
  else if peek(s, pos) == "/" { find_last_slash(s, pos + 1, pos + 1) }
  else { find_last_slash(s, pos + 1, last_end) }
}

pub fun dir_of_path(path: string) : string =>
  path[0: find_last_slash(path, 0, 0)]

pub fun resolve_include_path(base_dir: string, rel: string) : string =>
  base_dir + rel

pub fun list_contains(items: list<string>, target: string) : bool {
  match items {
    [] => false,
    [x, ..rest] => if x == target { true } else { list_contains(rest, target) }
  }
}

pub fun parse_include_path(s: string, pos: int) : maybe<(string, int)> {
  // pos is at '#'. Check for #include "path"
  if !starts_with_at(s, pos, "#include") { None }
  else {
    let p1 = skip_ws(s, pos + 8)
    if peek(s, p1) == "\"" {
      match parse_basic_string(s, p1 + 1, "") {
        Ok((path, p2)) => Some((path, p2)),
        Err(_) => None
      }
    }
    else { None }
  }
}

pub fun parse_namespace_directive(s: string, pos: int) : maybe<(string, string, int)> {
  // pos is at '#'. Check for #namespace prefix: "uri"
  if !starts_with_at(s, pos, "#namespace") { None }
  else {
    let p1 = skip_ws(s, pos + 10)
    match parse_bare_key(s, p1, "") {
      Ok((pfx, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          if peek(s, p4) == "\"" {
            match parse_basic_string(s, p4 + 1, "") {
              Ok((uri, p5)) => Some((pfx, uri, p5)),
              Err(_) => None
            }
          }
          else { None }
        }
        else { None }
      },
      Err(_) => None
    }
  }
}

pub fun include_file_nodes(s: string, p2: int, content: string, full_path: string, nodes: list<HmlNode>, base_dir: string, seen: list<string>, text_elems: list<string>, dotted_names: list<string>) : result<list<HmlNode>, string> {
  let inc_base = dir_of_path(full_path)
  match parse_file_doc(content, 0, [], inc_base, seen + [full_path], text_elems, []) {
    Ok(inc_nodes) => parse_file_doc(s, skip_to_eol(s, p2), nodes + inc_nodes, base_dir, seen, text_elems, dotted_names),
    Err(e) => Err(e)
  }
}

pub fun parse_file_doc(s: string, pos: int, nodes: list<HmlNode>, base_dir: string, seen: list<string>, text_elems: list<string>, dotted_names: list<string>) : result<list<HmlNode>, string> {
  let p1 = skip_noise(s, pos)
  if p1 >= str_length(s) { Ok(nodes) }
  else if peek(s, p1) == "@" {
    match parse_element(s, p1, text_elems) {
      Ok((elem, p2)) => {
        let ename = hml_elem_name(elem)
        if list_contains(dotted_names, ename) {
          Err("merge rule: cannot mix explicit @" + ename + " with dotted key '" + ename + ".*'")
        }
        else { parse_file_doc(s, p2, nodes + [NElem(elem)], base_dir, seen, text_elems, dotted_names) }
      },
      Err(e) => Err(e)
    }
  }
  else if peek(s, p1) == "#" {
    match parse_include_path(s, p1) {
      Some((path, p2)) => {
        let full_path = resolve_include_path(base_dir, path)
        if list_contains(seen, full_path) { Err("circular include: " + full_path) }
        else {
          match read_file(full_path) {
            Ok(content) => include_file_nodes(s, p2, content, full_path, nodes, base_dir, seen, text_elems, dotted_names),
            Err(_) => Err("cannot read included file: " + full_path)
          }
        }
      },
      None => {
        match parse_namespace_directive(s, p1) {
          Some((pfx, uri, p2)) => parse_file_doc(s, p2, nodes + [NNamespace(pfx, uri)], base_dir, seen, text_elems, dotted_names),
          None => {
            match parse_text_directive(s, p1) {
              Some((names, p2)) => parse_file_doc(s, p2, nodes, base_dir, seen, text_elems + names, dotted_names),
              None => parse_file_doc(s, skip_to_eol(s, p1), nodes, base_dir, seen, text_elems, dotted_names)
            }
          }
        }
      }
    }
  }
  else {
    match parse_key_path(s, p1) {
      Ok((segments, p2)) => {
        let p3 = skip_ws(s, p2)
        if peek(s, p3) == ":" {
          let p4 = skip_ws(s, p3 + 1)
          match parse_value(s, p4, text_elems) {
            Ok((val, p5)) => {
              let new_node = wrap_dotted_value(segments, val)
              let root = first_segment(segments)
              if length(segments) > 1 && has_elem_named(nodes, root) && !list_contains(dotted_names, root) {
                Err("merge rule: cannot mix dotted key '" + root + ".*' with explicit @" + root)
              }
              else if length(segments) > 1 { parse_file_doc(s, p5, insert_or_merge(nodes, new_node), base_dir, seen, text_elems, add_if_missing(dotted_names, root)) }
              else { parse_file_doc(s, p5, nodes + [new_node], base_dir, seen, text_elems, dotted_names) }
            },
            Err(e) => Err(e)
          }
        }
        else { Err("expected ':' after key at position " + show(p3)) }
      },
      Err(_) => Err("unexpected content at position " + show(p1))
    }
  }
}

pub fun hml_parse_file_content(content: string, path: string) : result<list<HmlNode>, string> {
  let base = dir_of_path(path)
  parse_file_doc(content, 0, [], base, [path], default_text_elems(), [])
}

pub fun hml_parse_file(path: string) : result<list<HmlNode>, string> {
  match read_file(path) {
    Ok(content) => hml_parse_file_content(content, path),
    Err(_) => Err("cannot read file: " + path)
  }
}