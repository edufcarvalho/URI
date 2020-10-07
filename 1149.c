#include <stdio.h>

int main(void) {
    int a, n, i, b = 0;
    scanf("%d", &a);
    while(scanf("%d", &n), n <= 0);

    for (i = 0; i <= n-1; i++) b += a + i;

    printf("%d\n", b);
    return 0;
}
