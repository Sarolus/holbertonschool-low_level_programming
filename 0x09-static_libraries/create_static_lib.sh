#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
rm -Rf *.o
rm -Rf *.c
