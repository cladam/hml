// example: parse an HML document with prose (text-mode) content
import "../src/hml"

fun print_inline_elem(name: string, attrs: list<(string, Hml)>, inner: list<HmlNode>) {
  let label = join(hml_texts(inner), "")
  if name == "link" {
    let href = match as_str(hml_attr(HElement(name, attrs, inner), "href")) {
      Some(s) => s,
      None => ""
    }
    println("  inline: @link label=\"" + label + "\" href=\"" + href + "\"")
  } else {
    println("  inline: @" + name + "{" + label + "}")
  }
}

fun print_body_node(node: HmlNode) {
  match node {
    NText(t) => println("  text:   \"" + t + "\""),
    NElem(HElement(name, attrs, inner)) => print_inline_elem(name, attrs, inner),
    NProp(k, _) => println("  prop:   " + k),
    NComment(t) => println("  //      " + t),
    NNamespace(pfx, _) => println("  #namespace " + pfx)
  }
}

fun main() {
  match read_file("examples/prose.hml") {
    Err(e) => println("Error reading file: " + e),
    Ok(content) => {
      match hml_parse(content) {
        Err(e) => println("Parse error: " + e),
        Ok(doc) => {
          match hml_elem(doc, "article") {
            None => println("no article element"),
            Some(article) => {
              match hml_body(article) {
                None => println("no body"),
                Some(body) => {
                  let title = match at(body, "title") |> as_str {
                    Some(s) => s,
                    None => "(no title)"
                  }
                  let author = match at(body, "author") |> as_str {
                    Some(s) => s,
                    None => "(no author)"
                  }
                  println("Title:  " + title)
                  println("Author: " + author)
                  println("")
                  match hml_elem(body, "body") {
                    None => println("no @body text element"),
                    Some(text_elem) => {
                      match hml_body(text_elem) {
                        None => println("empty text body"),
                        Some(text_nodes) => {
                          println("All nodes in @body:")
                          foreach(text_nodes, print_body_node)
                          println("")
                          println("Plain text lines:")
                          foreach(hml_texts(text_nodes), (t) => println("  " + t))
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
