#!/bin/bash

echo "Всего аргументов: $#" 

sum=0
for i in "$@"; do
    sum=$((sum + i))
done
echo "Среднее арифметическое: $((sum / $#))"