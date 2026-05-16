// example: parse a simple HML config
import "../src/hml"

fun main() {
  let input = "@server(port: 8080, public) \{\n    host: \"localhost\"\n    name: \"api\"\n    timeout: 30s\n\}"
  match hml_parse(input) {
    Ok(nodes) => {
      println("Parsed OK:")
      println(hml_pretty(nodes, 0))
      println("")
      // Access properties via API
      match hml_elem(nodes, "server") {
        Some(srv) => {
          println("port attr: " + show(hml_attr(srv, "port")))
          match hml_body(srv) {
            Some(body) => {
              println("host: " + show(at(body, "host") |> as_str))
              println("name: " + show(at(body, "name") |> as_str))
            },
            None => println("no body")
          }
        },
        None => println("no server element")
      }
    },
    Err(e) => println("Parse error: " + e)
  }
}
