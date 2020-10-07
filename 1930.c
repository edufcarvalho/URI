#include <stdio.h>

int main(void) {
    int i, r = -3;

    for (i = 0; i < 4; i++) {
        int tmp;
        scanf("%d", &tmp);
        r += tmp;
    }

    printf("%d\n", r);
    return 0;
}