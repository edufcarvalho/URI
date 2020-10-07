#include <stdio.h>

int main(void) {
    int a, b, i, c = 0, r = 0;
    scanf("%d", &a);
    while (scanf("%d", &b), b <= a);

    while (r < b) c++, r += a++;

    printf("%d\n", c);
    return 0;
}
