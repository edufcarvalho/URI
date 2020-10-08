#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    int i, j, matrix[a][b];

    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 1, a -= 1, b -= 1; i < a; i++) {
        for (j = 1; j < b; j++) {
            if (matrix[i][j] == 42) {
                int total = matrix[i][j + 1] + matrix[i + 1][j - 1] + matrix[i + 1][j] + matrix[i + 1][j - 1] + matrix[i + 1][j + 1] + matrix[i - 1][j] + matrix[i - 1][j + 1] + matrix[i - 1][j - 1];
                if (total == 56) {
                    printf("%d %d\n", i + 1, j + 1);
                    return 0;
                }
            }
        }
    }

    printf("0 0\n");
    return 0;
} // Sometimes this solution gets runtime error (submit again)
