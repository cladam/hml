# hml

An HML (Hica Markup Language) parser library written in [hica](https://github.com/cladam/hica).

HML is a structured configuration and document language that combines the
semantic strength of XML (elements with identity/metadata) with the readability
of TOML/YAML. See [HML-Specification](https://www.hica.dev/docs/HML-specification/) for the full v0.3 spec.

## Features

- Full HML v0.3 compliance
- Dotted keys with automatic merging (`database.host: "x"`)
- Namespaced element names (`@k8s.deployment`)
- `#include` directive with nested and circular detection
- `#namespace` directive for URI bindings
- `#text` directive for text content mode (mixed text + inline elements)
- Merge rule validation (dotted keys vs explicit elements)
- Date-time, duration, hex/octal/binary integer support
- Pretty-printing and compact display

## Installation

### 1. Add the package

```sh
hica add hml
hica fetch
```

This records the dependency in `hica.hml` and downloads the package.

### 2. Import

```hica
import "hml"
```

## Quick Example

```hml
// config.hml
@server(port: 8080, public) {
    host: "localhost"
    name: "api"
    timeout: 30s
}

@database(driver: "postgres") {
    host: "db.internal"
    port: 5432
    pool_size: 10
}
```

```hica
import "src/hml"

fun main() {
  match read_file("config.hml") {
    Ok(content) => {
      match hml_parse(content) {
        Ok(nodes) => {
          match hml_elem(nodes, "server") {
            Some(srv) => {
              println("port: " + show(hml_attr(srv, "port")))
              match hml_body(srv) {
                Some(body) => println("host: " + show(at(body, "host") |> as_str)),
                None => ()
              }
            },
            None => ()
          }
        },
        Err(e) => println("Parse error: " + e)
      }
    },
    Err(e) => println("File error: " + e)
  }
}
```

## API

### Parsing

| Function | Signature | Description |
|----------|-----------|-------------|
| `hml_parse` | `string -> result<list<HmlNode>, string>` | Parse an HML document |
| `hml_parse_file` | `string -> result<list<HmlNode>, string>` | Parse a file with `#include` support |
| `hml_parse_file_content` | `(string, string) -> result<list<HmlNode>, string>` | Parse content with a base path for includes |

### Element Access

| Function | Description |
|----------|-------------|
| `hml_elem(nodes, name)` | Find first element by name |
| `hml_elems(nodes, name)` | Collect all elements with given name |
| `hml_get(nodes, key)` | Find property value by key |
| `hml_body(elem)` | Get element body (child nodes) |
| `hml_attrs(elem)` | Get element attribute list |
| `hml_attr(elem, key)` | Get specific attribute value |

### Value Extraction

| Function | Description |
|----------|-------------|
| `hml_str(v)` | Extract string from `Hml` value |
| `hml_int(v)` | Extract integer |
| `hml_bool(v)` | Extract boolean |
| `hml_float(v)` | Extract float |
| `hml_duration(v)` | Extract `(amount, unit)` tuple |
| `hml_datetime(v)` | Extract datetime string |
| `hml_list(v)` | Extract array items |

### Namespace Access

| Function | Description |
|----------|-------------|
| `hml_namespaces(nodes)` | Get all `(prefix, uri)` bindings |
| `hml_namespace(nodes, prefix)` | Look up URI for a namespace prefix |

### Pipe-Friendly Helpers

| Function | Description |
|----------|-------------|
| `at(nodes, key)` | Alias for `hml_get` |
| `elem_at(nodes, name)` | Alias for `hml_elem` |
| `as_str(maybe_val)` | Pipe-friendly string extractor |
| `as_int(maybe_val)` | Pipe-friendly int extractor |
| `as_bool(maybe_val)` | Pipe-friendly bool extractor |
| `as_datetime(maybe_val)` | Pipe-friendly datetime extractor |
| `hml_ok(result)` | Convert `result` to `maybe` |

### Display

| Function | Description |
|----------|-------------|
| `hml_show(v)` | Compact single-line display |
| `hml_pretty(nodes, indent)` | Pretty-print with indentation |

## Types

```hica
type Hml {
  HStr(value: string),
  HInt(value: int),
  HFloat(value: float),
  HBool(value: bool),
  HDuration(amount: int, unit: string),
  HDatetime(value: string),
  HNull,
  HArray(items: list<Hml>),
  HElement(name: string, attrs: list<(string, Hml)>, body: list<HmlNode>)
}

type HmlNode {
  NProp(key: string, value: Hml),
  NElem(element: Hml),
  NText(content: string),
  NComment(text: string),
  NNamespace(ns_prefix: string, uri: string)
}
```

## Running Tests

```sh
hica test tests/test_values.hc
hica test tests/test_elements.hc
hica test tests/test_document.hc
hica test tests/test_api.hc
hica test tests/test_errors.hc
hica test tests/test_include.hc
hica test tests/test_text.hc
```

## Examples

See the [examples/](examples/) directory:

- `basic.hc`: Parse HML from a string literal
- `read_config.hc`: Read and parse an external `.hml` file
- `nested.hc`: Navigate deeply nested elements
- `repeated.hc`: Work with repeated elements (implicit arrays)
- `include.hc`: Compose configs from multiple files with `#include`

## License

MIT
