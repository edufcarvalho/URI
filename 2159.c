#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double a = n/log(n);
    printf("%.1lf %.1lf\n", a, a*1.25506);

    return 0;
} //Compilation just work with the '-lm' flag
