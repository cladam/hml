// example: use #include to compose config from multiple files
import "../src/hml"

fun main() {
  match hml_parse_file("examples/app.hml") {
    Ok(nodes) => {
      println("=== Composed config loaded ===")
      println("")

      // Top-level properties from app.hml
      match at(nodes, "app_name") |> as_str {
        Some(name) => println("App: " + name),
        None => println("")
      }
      match at(nodes, "environment") |> as_str {
        Some(env) => println("Environment: " + env),
        None => println("")
      }

      println("")

      // Included from config.hml
      match hml_elem(nodes, "server") {
        Some(srv) => {
          println("Server (from config.hml):")
          println("  port: " + show(hml_attr(srv, "port")))
        },
        None => println("No server found")
      }

      match hml_elem(nodes, "database") {
        Some(db) => {
          println("Database (from config.hml):")
          println("  driver: " + show(hml_attr(db, "driver")))
        },
        None => println("No database found")
      }

      println("")

      // Included from cluster.hml
      match hml_elem(nodes, "cluster") {
        Some(cl) => {
          println("Cluster (from cluster.hml):")
          println("  region: " + show(hml_attr(cl, "region")))
        },
        None => println("No cluster found")
      }
    },
    Err(e) => println("Error: " + e)
  }
}
