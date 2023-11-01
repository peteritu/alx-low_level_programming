#!/bin/bash

# Create a list of all .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file and add it to the static library
for file in $c_files; do
    gcc -c "$file"
    ar -rc liball.a "${file%.c}.o"
done

# Index the library
ar -s liball.a

# Clean up the object files
rm *.o

