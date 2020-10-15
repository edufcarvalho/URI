#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int day;
        double max = 0;
        for (day = 1; day <= n; day++) {
            double a, b, media;
            scanf("%lf%lf", &a, &b);
            media = b/a;
            if (media > max) {
                printf("%d\n", day);
                max = media;
            }
        }
    }
    return 0;
}
