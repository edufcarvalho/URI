#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((b >= c && b >= a)) printf("%d\n", (c + a) * 2);
    else if (c >= a && (a + b) <= c) printf("%d\n", (a * 4) + (b * 2));
    else if (a >= c && (c + b) <= a) printf("%d\n", (c * 4) + (b * 2));
    else printf("%d\n", (c + a) * 2);

    return 0;
}
