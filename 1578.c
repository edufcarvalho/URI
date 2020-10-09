#include <stdio.h>

int len (unsigned long long value) {
    int length = 0;
    
    while (value > 9) {
        length++;
        value /= 10;
    }
	return length;
}

int main(void) {
    int a, n, k = 4;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &a);
        unsigned long long int matrix[a][a];
        int i, j, s, max[a + 1], spaces;

        for (i = 0; i < a; max[i++] = 0);

        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                scanf("%llu", &matrix[i][j]);
                matrix[i][j] *= matrix[i][j];
                int size = len(matrix[i][j]);
                if (size > max[j]) max[j] = size;
            }
        }

        if (k == 4) printf("Quadrado da matriz #%d:\n", k++);
        else printf("\nQuadrado da matriz #%d:\n", k++);

        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                spaces = max[j] - len(matrix[i][j]);
                for (s = 0; s < spaces; s++) printf(" ");
                printf("%llu", matrix[i][j]);
                if (j < a - 1) printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}
