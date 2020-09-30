#include <stdio.h>

int main(void) {
    unsigned long long int a, b, fatA, fatB;

    while (scanf("%llu%llu", &a, &b) != EOF) {
        for (fatA = 1; a > 1; a--) fatA *= a;
        for (fatB = 1; b > 1; b--) fatB *= b;
        printf("%llu\n", fatA + fatB);
    }

    return 0;
}