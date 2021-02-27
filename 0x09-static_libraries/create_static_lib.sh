#!/bin/bash
gcc -c *.o | ar rc liball.a *.c
rm -Rf *.o
rm -Rf *.c
