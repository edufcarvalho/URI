#include <stdio.h>

int len(unsigned long long value, int l) {
    return (value > 9 ? len(value/10, l+1) : l);
}

int main(void) {
    int a, n, i, j, s, k = 4;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &a);
        unsigned long long int matrix[a][a];
        int max[a + 1], sizes[a][a];
        for (i = 0; i < a; max[i++] = 0);

        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                scanf("%llu", &matrix[i][j]);
                matrix[i][j] *= matrix[i][j];
                sizes[i][j] = len(matrix[i][j], 0);
                if (sizes[i][j] > max[j]) max[j] = sizes[i][j];
            }
        }

        if (k == 4) printf("Quadrado da matriz #%d:\n", k++);
        else printf("\nQuadrado da matriz #%d:\n", k++);

        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                for (s = max[j]; s > sizes[i][j]; s--) printf(" ");
                printf("%llu", matrix[i][j]);
                if (j < a - 1) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}