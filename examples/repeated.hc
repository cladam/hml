// example: work with repeated elements (implicit arrays)
import "../src/hml"

fun main() {
  match read_file("examples/cluster.hml") {
    Ok(content) => {
      match hml_parse(content) {
        Ok(nodes) => {
          println("=== Cluster Nodes ===")
          println("")

          match hml_elem(nodes, "cluster") {
            Some(cluster) => {
              println("Region: " + show(hml_attr(cluster, "region")))
              println("Version: " + show(hml_attr(cluster, "version")))
              println("")

              match hml_body(cluster) {
                Some(body) => {
                  let all_nodes = hml_elems(body, "node")
                  println("Total nodes: " + show(length(all_nodes)))
                  println("")

                  // List each node
                  foreach(all_nodes, (n) => {
                    let id = show(hml_attr(n, "id"))
                    let role = show(hml_attr(n, "role"))
                    match hml_body(n) {
                      Some(nbody) => {
                        let host = show(at(nbody, "host") |> as_str)
                        let status = show(at(nbody, "status") |> as_str)
                        println("  " + id + " (" + role + ") " + host + " [" + status + "]")
                      },
                      None => println("  " + id + " (" + role + ")")
                    }
                  })
                },
                None => println("")
              }
            },
            None => println("No cluster found")
          }
        },
        Err(e) => println("Parse error: " + e)
      }
    },
    Err(e) => println("Could not read file: " + e)
  }
}
