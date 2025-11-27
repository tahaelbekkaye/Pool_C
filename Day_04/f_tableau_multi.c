#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

void f_tableau_multi(int n) {
    for (int i = 0; i <= 10; ++i) {
        printf("%d x %2d = %d\n", n, i, n * i);
    }
}

int parse_int(const char *s, int *out) {
    if (!s || !*s) return 0;
    errno = 0;
    long val = strtol(s, NULL, 10);
    if (errno != 0) return 0;
    if (val < INT_MIN || val > INT_MAX) return 0;
    *out = (int)val;
    return 1;
}