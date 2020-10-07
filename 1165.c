#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    while (a--) {
        int div = 1, i = 0, x;
        scanf("%d", &x);

        while (i++ < x - 1) {
            if (x % i == 0) div++;
            if (div > 2) break;
        }

        if (div == 2) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
    }
    return 0;
}
