#!/bin/bash
gcc -Wall -pedantic - Weerror -Wextra -c *.c ar -rc liball.a *.o
ranlib liball.a
