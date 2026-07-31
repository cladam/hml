#!/bin/bash
# build.sh — HML developer script to generate and optimize Koka files
set -e

echo "Generating Koka files from Hica source..."
hica build src/main.hc --generate

echo "Optimizing generated src/parser.kk..."
python3 -c "
with open('src/parser.kk', 'r') as f:
    content = f.read()

# 1. Reset first to ensure idempotency and cleanliness
content = content.replace('noinline fun hc_parse_value(', 'fun hc_parse_value(')
content = content.replace('noinline fun hc_parse_body(', 'fun hc_parse_body(')
content = content.replace('noinline fun hc_parse_element(', 'fun hc_parse_element(')
content = content.replace('noinline noinline fun hc_parse_value(', 'fun hc_parse_value(')
content = content.replace('noinline noinline fun hc_parse_body(', 'fun hc_parse_body(')
content = content.replace('noinline noinline fun hc_parse_element(', 'fun hc_parse_element(')
content = content.replace('pub fun ', 'fun ')

# 2. Add noinline pragmas to major recursive entrypoints
content = content.replace('fun hc_parse_value(', 'noinline fun hc_parse_value(')
content = content.replace('fun hc_parse_body(', 'noinline fun hc_parse_body(')
content = content.replace('fun hc_parse_element(', 'noinline fun hc_parse_element(')

# 3. Encapsulate parser internals (remove pub from helper functions)
content = content.replace('pub fun ', 'fun ') # Ensure no pub functions are left
content = content.replace('fun hc_hml_parse(', 'pub fun hc_hml_parse(')
content = content.replace('fun hc_hml_parse_file_content(', 'pub fun hc_hml_parse_file_content(')
content = content.replace('fun hc_hml_parse_file(', 'pub fun hc_hml_parse_file(')

with open('src/parser.kk', 'w') as f:
    f.write(content)
"

echo "Cleaning build artifacts..."
hica clean

echo "Optimized src/parser.kk generated successfully!"
