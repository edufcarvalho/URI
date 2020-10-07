#include <stdio.h>

int main(void) {
    int i, j, n, a;
    while (scanf("%d",&n), n > 0) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n ; j++) {
                if (i >= j) a = i - j + 1;
                else a = j - i + 1;

                printf("%3d", a);
                if (j < n) printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
