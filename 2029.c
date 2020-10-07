#include <stdio.h>

int main(void) {
    double v, r, a;

    while (scanf("%lf%lf", &v, &r) != EOF) {
        r /= 2;
        a = 3.14 * r * r;
        printf("ALTURA = %.2lf\n", v / a);
        printf("AREA = %.2lf\n", a);
    }

    return 0;
}
