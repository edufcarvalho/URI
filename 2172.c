#include <stdio.h>

int main(void) {
    unsigned int a, b;

    while (scanf("%u%u", &a, &b), a && b) printf("%llu\n", a * b);

    return 0;
}