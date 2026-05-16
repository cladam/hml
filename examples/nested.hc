// example: navigate deeply nested elements
import "../src/hml"

fun show_container(c: Hml) {
  println("  - " + show(hml_attr(c, "name")) + " image=" + show(hml_attr(c, "image")))
  match hml_body(c) {
    Some(cbody) => {
      let probes = hml_elems(cbody, "probe")
      foreach(probes, (p) => {
        println("    probe(" + show(hml_attr(p, "type")) + ")")
      })
    },
    None => println("")
  }
}

fun main() {
  match read_file("examples/deployment.hml") {
    Ok(content) => {
      match hml_parse(content) {
        Ok(nodes) => {
          println("=== Deployment ===")
          println("")

          match hml_elem(nodes, "k8s.deployment") {
            Some(deploy) => {
              println("Deployment: " + show(hml_attr(deploy, "name")))
              println("Namespace: " + show(hml_attr(deploy, "namespace")))

              match hml_body(deploy) {
                Some(body) => {
                  match at(body, "replicas") |> as_int {
                    Some(r) => println("Replicas: " + show(r)),
                    None => println("")
                  }

                  println("")

                  let containers = hml_elems(body, "k8s.container")
                  println("Containers (" + show(length(containers)) + "):")
                  foreach(containers, (c) => show_container(c))
                },
                None => println("")
              }
            },
            None => println("No deployment found")
          }
        },
        Err(e) => println("Parse error: " + e)
      }
    },
    Err(e) => println("Could not read file: " + e)
  }
}
