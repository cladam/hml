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
content = content.replace('noinline ', '')
content = content.replace('pub fun ', 'fun ')

# 2. Add noinline pragmas to ALL parser functions to prevent aggressive Koka unrolling
content = content.replace('fun hc_', 'noinline fun hc_')

# 3. Restore public visibility for the three main API entry points
content = content.replace('noinline fun hc_hml_parse(', 'pub noinline fun hc_hml_parse(')
content = content.replace('noinline fun hc_hml_parse_file_content(', 'pub noinline fun hc_hml_parse_file_content(')
content = content.replace('noinline fun hc_hml_parse_file(', 'pub noinline fun hc_hml_parse_file(')

with open('src/parser.kk', 'w') as f:
    f.write(content)
"

echo "Cleaning build artifacts..."
hica clean

echo "Optimized src/parser.kk generated successfully!"
