#!/bin/bash
# that takes in a URL and displays all
curl -sI OPTIONS "$1" | grep 'Allow' | cut -d " " -f 2-
