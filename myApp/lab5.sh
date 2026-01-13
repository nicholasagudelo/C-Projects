#!/bin/bash
# Lab 5 Shell Script

echo "$1"

for fruit in apple orange fig cherry
do
  if [ "$fruit" != "fig" ]; then
    echo "== $fruit"
  fi
done

exit 4

