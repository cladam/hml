// example: read and parse an external HML config file
import "../src/hml"

fun main() {
  match read_file("examples/config.hml") {
    Ok(content) => {
      match hml_parse(content) {
        Ok(nodes) => {
          println("=== Config loaded ===")
          println("")

          // Access server settings
          match hml_elem(nodes, "server") {
            Some(srv) => {
              println("Server:")
              println("  port: " + show(hml_attr(srv, "port")))
              println("  public: " + show(hml_attr(srv, "public")))
              match hml_body(srv) {
                Some(body) => {
                  println("  host: " + show(at(body, "host") |> as_str))
                  println("  name: " + show(at(body, "name") |> as_str))
                  println("  timeout: " + show(hml_get(body, "timeout")))
                },
                None => println("")
              }
            },
            None => println("No server config found")
          }

          println("")

          // Access database settings
          match hml_elem(nodes, "database") {
            Some(db) => {
              println("Database:")
              println("  driver: " + show(hml_attr(db, "driver")))
              match hml_body(db) {
                Some(body) => {
                  println("  host: " + show(at(body, "host") |> as_str))
                  println("  port: " + show(at(body, "port") |> as_int))
                  println("  pool_size: " + show(at(body, "pool_size") |> as_int))
                  println("  ssl: " + show(at(body, "ssl") |> as_bool))
                },
                None => println("")
              }
            },
            None => println("No database config found")
          }

          println("")

          // Access cache settings
          match hml_elem(nodes, "cache") {
            Some(cache) => {
              println("Cache:")
              println("  driver: " + show(hml_attr(cache, "driver")))
              match hml_body(cache) {
                Some(body) => {
                  println("  host: " + show(at(body, "host") |> as_str))
                  println("  ttl: " + show(hml_get(body, "ttl")))
                },
                None => println("")
              }
            },
            None => println("No cache config found")
          }
        },
        Err(e) => println("Parse error: " + e)
      }
    },
    Err(e) => println("Could not read file: " + e)
  }
}
