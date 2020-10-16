#include <stdio.h>

int main(void) {
    int n, f;
    while (scanf("%d%d", &n, &f) != EOF) {
        int i, day, month, year, status = 0;
        while (f--) {
            int sum = 0;
            scanf("%d/%d/%d", &day, &month, &year);
            for (i = 0; i < n; i++) {
                int tmp;
                scanf("%d", &tmp);
                sum += tmp;
            }

            if (!status && sum == n) {
                status = 1;
                printf("%d/%d/%d\n", day, month, year);
            }
        }
        if (!status) puts("Pizza antes de FdI");
    }

    return 0;
}
