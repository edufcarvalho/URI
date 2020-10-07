#include <stdio.h>

int main(void) {
    int i, a, c, r = 0;
    scanf("%d", &a);

    for (i = 0; i < 5; i++) {
        scanf("%d", &c);
        if (c == a) r++;
    }

    printf("%d\n", r);
}
