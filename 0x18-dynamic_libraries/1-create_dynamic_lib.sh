#!/bin/bash
gcc -c -fPIC *.c
gss -shared -o liball.so *.o
