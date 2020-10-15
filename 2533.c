#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int t = 0, r = 0;
        while (n--) {
            float a, b;
            scanf("%f%f", &a, &b);
            t += (a * b);
            r += b;
        }
        printf("%.4lf\n", t / (r * 100.0));
    }
    return 0;
}
