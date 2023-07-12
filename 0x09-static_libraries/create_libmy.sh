#!/bin/bash
# create_libmy.sh

# Create object files from all .c files in the current directory
for file in *.c; do
    gcc -c "$file"
done

# Create a static library called libmy.a from all the .o files
ar -rc libmy.a *.o

# Clean up the object files
rm *.o
