#include <stdio.h>

int main(void) {
    int i, j, n;
    scanf("%d", &n);
    int matrix[n + 1][n + 1];

    for (i = 0; i <= n; i++)
        for (j = 0; j <= n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int occ = matrix[i][j] + matrix[i + 1][j] + matrix[i][j + 1] + matrix[i + 1][j + 1];
            if (occ >= 2) printf("S");
            else printf("U");
        }
        printf("\n");
    }

    return 0;
}
