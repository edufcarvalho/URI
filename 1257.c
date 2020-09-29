#include <stdio.h>

int main(void) {
    char c;
    int i, j, n, a, r;
    scanf("%d", &a);

    while (a--) {
        r = 0;
        scanf("%d", &n);
        getchar();
        for (j = 0; j < n; j++) {
            i = 0;
            while (c = getchar(), c != '\n') {
                r += (c - 'A') + (i++) + j;
            }
        }
        printf("%d\n", r);
    }
    return 0;
}