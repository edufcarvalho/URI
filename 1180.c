#include <stdio.h>
#include <limits.h>

int main(void) {
    int i, a, tmp, min = INT_MAX, j;
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%d", &tmp);
        if (tmp < min) min = tmp, j = i;
    }

    printf("Menor valor: %d\nPosicao: %d\n", min, j);
}