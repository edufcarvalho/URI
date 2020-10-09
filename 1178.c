#include <stdio.h>

int main(void) {
    int i;
    double a;
    scanf("%lf", &a);

    for (i = 0; i < 100; i++, a /= 2)
        printf("N[%d] = %.4lf\n", i, a);

    return 0;
}
