#!/bin/bash
echo -e '#include <stdio.h>\n#include <stdlib.h>\nvoid gm(int n1, int n2, int n3, int n4, int n5, int bonus) { printf("--> Please make me win!\\n");}' > /tmp/inject.c
gcc -shared -fPIC -o /tmp/inject.so /tmp/inject.c
LD_PRELOAD=/tmp/inject.so ./gm 9 8 10 24 75 9
