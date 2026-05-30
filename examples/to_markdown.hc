// example: render an HML prose document to Markdown
import "../src/hml"

// Mutually recursive: nodes_to_md and elem_to_md call each other.

fun elem_to_md(name: string, attrs: list<(string, Hml)>, inner: list<HmlNode>) : string {
  if name == "em" {
    "*" + nodes_to_md(inner) + "*"
  } else if name == "strong" {
    "**" + nodes_to_md(inner) + "**"
  } else if name == "link" {
    let label = nodes_to_md(inner)
    let href = match as_str(hml_attr(HElement(name, attrs, inner), "href")) {
      Some(s) => s,
      None => ""
    }
    "[" + label + "](" + href + ")"
  } else if name == "p" {
    "\n\n" + nodes_to_md(inner) + "\n"
  } else {
    nodes_to_md(inner)
  }
}

fun nodes_to_md(nodes: list<HmlNode>) : string {
  match nodes {
    [] => "",
    [NText(t), NText(t2), ..rest] => t + "\n" + nodes_to_md([NText(t2)] + rest),
    [NText(t), ..rest] => t + nodes_to_md(rest),
    [NElem(HElement(name, attrs, inner)), ..rest] => elem_to_md(name, attrs, inner) + nodes_to_md(rest),
    [NProp(_, _), ..rest] => nodes_to_md(rest),
    [NComment(_), ..rest] => nodes_to_md(rest),
    [NNamespace(_, _), ..rest] => nodes_to_md(rest)
  }
}

fun prose_to_md(body: list<HmlNode>) : string {
  match hml_elem(body, "body") {
    None => "",
    Some(text_elem) => match hml_body(text_elem) {
      None => "",
      Some(nodes) => nodes_to_md(nodes)
    }
  }
}

fun article_to_md(body: list<HmlNode>) : string {
  let title = match at(body, "title") |> as_str {
    Some(s) => "# " + s,
    None => ""
  }
  let author = match at(body, "author") |> as_str {
    Some(s) => "*By " + s + "*",
    None => ""
  }
  title + "\n" + author + "\n\n" + prose_to_md(body)
}

fun main() {
  match read_file("examples/prose.hml") {
    Err(e) => println("Error: " + e),
    Ok(content) => {
      match hml_parse(content) {
        Err(e) => println("Parse error: " + e),
        Ok(doc) => {
          match hml_elem(doc, "article") {
            None => println("no article element"),
            Some(article) => {
              match hml_body(article) {
                None => println("no body"),
                Some(body) => println(article_to_md(body))
              }
            }
          }
        }
      }
    }
  }
}
