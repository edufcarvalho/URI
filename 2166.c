#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double r = 0;

    while (n--) {
        r += 2.0;
        r = 1.0/r;
    }

    printf("%.10lf\n", r + 1);
    return 0;
}
