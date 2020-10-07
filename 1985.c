#include <stdio.h>

int main(void) {
    int n;
    double total = 0;
    scanf("%d", &n);

    while (n--) {
        int a, b;
        scanf("%d%d", &a, &b);

        switch (a) {
            case 1001:
                total += 1.5 * b; break;
            case 1002:
                total += 2.5 * b; break;
            case 1003:
                total += 3.5 * b; break;
            case 1004:
                total += 4.5 * b; break;
            case 1005:
                total += 5.5 * b; break;
        }
    }

    printf("%.2lf\n", total);
    return 0;
}
