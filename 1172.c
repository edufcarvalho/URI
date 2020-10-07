#include <stdio.h>

int main(void) {
    int i = -1, x[10];

    while ((i++) < 9) {
        scanf("%d", &x[i]);
        if (x[i] < 1) x[i] = 1;
    }

    for (i = 0; i < 10; i++) printf("X[%d] = %d\n", i, x[i]);

    return 0;
}
