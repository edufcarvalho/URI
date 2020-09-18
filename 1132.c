#include <stdio.h>

int main(void) {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    if (a > b) c = a, a = b, b = c, c = 0;

    for (; a <= b; a++)
        if (a % 13 != 0) c += a;

    printf("%d\n", c);
    return 0;
}