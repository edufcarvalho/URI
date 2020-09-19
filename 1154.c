#include <stdio.h>

int main(void) {
    int a;
    float m = 0, t = 0;

    while (scanf("%d", &a), a > 0) m++, t += a;

    printf("%.2f\n", t / m);
    return 0;
}