#!/bin/bash
# sends a JSON POST request to a URL passed as the first argument,
curl -sX POST "$1" -H 'Content-Type: application/json' -d "$(cat "$2")"
