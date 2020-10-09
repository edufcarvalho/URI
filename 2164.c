#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d\n", &n);
    double x = sqrt(5);
    printf("%.1lf\n", (pow(1 + x, n) - pow(1 - x, n))/(pow(2, n) * x));
    return 0;
} //Don't compile without '-lm' flag
