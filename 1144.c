#include <stdio.h>

int main(void) {
    unsigned int a, i = 0, l = 0;
    scanf("%d", &a);

    while (l++, (i++) < a) {
        int b = l*l, c = b*l;
        printf("%d ", l);
        printf("%d ", b);
        printf("%d\n", c);
        printf("%d ", l);
        printf("%d ", b + 1);
        printf("%d\n", c + 1);
    }
    return 0;
}
