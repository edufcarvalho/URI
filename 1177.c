#include <stdio.h>

int main(void) {
    int i, a, j = 0;
    scanf("%d", &a);

    for (i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, j++);
        if (a == j) j = 0;
    }

    return 0;
}