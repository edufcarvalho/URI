#include <stdio.h>

int main(void) {
    int i, n, count[] = {0, 0, 0, 0};
    scanf("%d", &n);

    while (n--) {
        int a;
        scanf("%d", &a);
        for (i = 2; i < 6; i++)
            if (a % i == 0) count[i - 2]++;
    }

    for (i = 0; i < 4; i++) printf("%d Multiplo(s) de %d\n", count[i], i + 2);
    return 0;
}
