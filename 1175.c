#include <stdio.h>

int main(void) {
    int i, n[20];

    for (i = 19; i >= 0; i--) scanf("%d", &n[i]);

    for (i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, n[i]);

    return 0;
}
