#!/bin/bash
# creates a dynamic library
gcc *.c -c -fPIC
gcc -shared *.o -o liball.so
