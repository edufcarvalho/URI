#include <stdio.h>

int main(void) {
    int i, j, tmp, even[5], odd[5], idxEven = 0, idxOdd = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &tmp);
        if (tmp % 2 == 0) even[idxEven++] = tmp;
        else odd[idxOdd++] = tmp;

        if (idxOdd == 5) {
            for (j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, odd[j]);
            }
            idxOdd = 0;
        }

        if (idxEven == 5) {
            for (j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, even[j]);
            }
            idxEven = 0;
        }
    }

    for (j = 0; j < idxOdd; j++) {
        printf("impar[%d] = %d\n", j, odd[j]);
    }

    for (j = 0; j < idxEven; j++) {
        printf("par[%d] = %d\n", j, even[j]);
    }

    return 0;
}