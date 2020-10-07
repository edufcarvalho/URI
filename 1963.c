#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%lf%lf", &a, &b);

    printf("%.2lf%\n", b/a * 100 - 100);

    return 0;
}
