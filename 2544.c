#include <stdio.h>
#include <math.h>

int main(void) {
    int a;

    while (scanf("%d", &a) != EOF) printf("%.0lf\n", log2(a));

    return 0;
} //Don't compile without '-lm' flag
