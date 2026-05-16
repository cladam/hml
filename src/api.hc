// api.hc — Accessors and pipe-friendly navigation
import "./hml_types"

// ============================================================
// Direct accessors
// ============================================================

pub fun hml_get(nodes: list<HmlNode>, key: string) : maybe<Hml> {
  match nodes {
    [] => None,
    [NProp(k, v), ..rest] => if k == key { Some(v) } else { hml_get(rest, key) },
    [_, ..rest] => hml_get(rest, key)
  }
}

pub fun hml_elem(nodes: list<HmlNode>, name: string) : maybe<Hml> {
  match nodes {
    [] => None,
    [NElem(HElement(n, attrs, body)), ..rest] => if n == name { Some(HElement(n, attrs, body)) } else { hml_elem(rest, name) },
    [_, ..rest] => hml_elem(rest, name)
  }
}

pub fun hml_elems(nodes: list<HmlNode>, name: string) : list<Hml> {
  match nodes {
    [] => [],
    [NElem(HElement(n, attrs, body)), ..rest] => {
      if n == name { [HElement(n, attrs, body)] + hml_elems(rest, name) }
      else { hml_elems(rest, name) }
    },
    [_, ..rest] => hml_elems(rest, name)
  }
}

// ============================================================
// Value extractors
// ============================================================

pub fun hml_str(v: Hml) : maybe<string> => match v {
  HStr(s) => Some(s),
  _ => None
}

pub fun hml_int(v: Hml) : maybe<int> => match v {
  HInt(n) => Some(n),
  _ => None
}

pub fun hml_float(v: Hml) : maybe<float> => match v {
  HFloat(f) => Some(f),
  _ => None
}

pub fun hml_bool(v: Hml) : maybe<bool> => match v {
  HBool(b) => Some(b),
  _ => None
}

pub fun hml_duration(v: Hml) : maybe<(int, string)> => match v {
  HDuration(amount, unit) => Some((amount, unit)),
  _ => None
}

pub fun hml_list(v: Hml) : maybe<list<Hml>> => match v {
  HArray(items) => Some(items),
  _ => None
}

pub fun hml_body(v: Hml) : maybe<list<HmlNode>> => match v {
  HElement(_, _, body) => Some(body),
  _ => None
}

pub fun hml_attrs(v: Hml) : maybe<list<(string, Hml)>> => match v {
  HElement(_, attrs, _) => Some(attrs),
  _ => None
}

pub fun hml_attr(v: Hml, key: string) : maybe<Hml> => match v {
  HElement(_, attrs, _) => find_attr(attrs, key),
  _ => None
}

pub fun find_attr(attrs: list<(string, Hml)>, key: string) : maybe<Hml> {
  match attrs {
    [] => None,
    [(k, v), ..rest] => if k == key { Some(v) } else { find_attr(rest, key) }
  }
}

// ============================================================
// Pipe-friendly API
// ============================================================

pub fun hml_ok(r: result<list<HmlNode>, string>) : maybe<list<HmlNode>> => match r {
  Ok(nodes) => Some(nodes),
  Err(_) => None
}

pub fun at(nodes: list<HmlNode>, key: string) : maybe<Hml> =>
  hml_get(nodes, key)

pub fun elem_at(nodes: list<HmlNode>, name: string) : maybe<Hml> =>
  hml_elem(nodes, name)

pub fun as_str(v: maybe<Hml>) : maybe<string> => match v {
  Some(h) => hml_str(h),
  None => None
}

pub fun as_int(v: maybe<Hml>) : maybe<int> => match v {
  Some(h) => hml_int(h),
  None => None
}

pub fun as_bool(v: maybe<Hml>) : maybe<bool> => match v {
  Some(h) => hml_bool(h),
  None => None
}