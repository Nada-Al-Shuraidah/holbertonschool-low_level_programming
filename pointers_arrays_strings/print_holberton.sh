#!/bin/bash

word="holberton"
indent=0

for (( i=0; i<${#word}; i++ )); do
    printf "%*s%s\n" $((indent*3)) "" "${word:i:1}"
    ((indent++))
done
