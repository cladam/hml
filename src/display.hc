// display.hc — HML display and pretty-printing
import "./hml_types"

// ============================================================
// Compact display
// ============================================================

pub fun hml_show(v: Hml) : string => match v {
  HStr(s) => "\"" + s + "\"",
  HInt(n) => show(n),
  HFloat(f) => show(f),
  HBool(b) => if b { "true" } else { "false" },
  HDuration(amount, unit) => show(amount) + unit,
  HDatetime(s) => s,
  HNull => "null",
  HArray(items) => "[" + join(map(items, (i) => hml_show(i)), ", ") + "]",
  HElement(name, attrs, body) => show_element(name, attrs, body)
}

pub fun show_element(name: string, attrs: list<(string, Hml)>, body: list<HmlNode>) : string {
  let attr_str = if length(attrs) == 0 { "" }
                 else { "(" + join(map(attrs, (a) => show_attr(a)), ", ") + ")" }
  let body_str = if length(body) == 0 { "" }
                 else { " \{ ... \}" }
  "@" + name + attr_str + body_str
}

pub fun show_attr(entry: (string, Hml)) : string => match entry {
  (k, HBool(true)) => k,
  (k, v) => k + ": " + hml_show(v)
}

// ============================================================
// Pretty-printing
// ============================================================

pub fun make_indent(n: int) : string =>
  if n <= 0 { "" } else { "    " + make_indent(n - 1) }

pub fun hml_pretty(nodes: list<HmlNode>, indent: int) : string =>
  join(map(nodes, (node) => pretty_node(node, indent)), "\n")

pub fun pretty_node(node: HmlNode, indent: int) : string {
  let pad = make_indent(indent)
  match node {
    NProp(key, val) => pad + key + ": " + hml_show(val),
    NElem(HElement(name, attrs, body)) => {
      let attr_str = if length(attrs) == 0 { "" }
                     else { "(" + join(map(attrs, (a) => show_attr(a)), ", ") + ")" }
      if length(body) == 0 { pad + "@" + name + attr_str }
      else {
        let header = pad + "@" + name + attr_str + " \{"
        let content = hml_pretty(body, indent + 1)
        let footer = pad + "\}"
        join([header, content, footer], "\n")
      }
    },
    NElem(_) => pad + "// unknown element",
    NText(content) => pad + content,
    NComment(text) => pad + "// " + text,
    NNamespace(pfx, uri) => pad + "#namespace " + pfx + ": \"" + uri + "\""
  }
}