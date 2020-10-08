#include <stdio.h>

int main(void) {
    int n;
    double r = 0;
    scanf("%d", &n);

    while (n--) {
        r += 6.0;
        r = 1.0/r;
    }

    printf("%.10lf\n", r + 3);
    return 0;
}
