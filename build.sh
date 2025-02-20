#!/bin/bash


gcc -o converter main.c convert.c -lm


if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    ./converter  
else
    echo "Compilation failed!"
fi
