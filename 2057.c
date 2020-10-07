#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%d%d%d", &a, &b, &c);

    d = a + b + c;

    if (d < 0) printf("%d\n", d + 24);
    else if (d > 24) printf("%d\n", d - 24);
    else printf("%d\n", d);

    return 0;
}
