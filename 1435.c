#include <stdio.h>

int main(void) {
    int i, j, n, a, l;
    while (scanf("%d",&n), n) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n ; j++) {
                if (j < i) a = j;
                else a = i;

                if (l = n - i + 1, l < a) a = l;
                if (l = n - j + 1, l < a) a = l;

                printf("%3d", a);
                if (j < n) printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
