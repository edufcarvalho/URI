#include <stdio.h>

int main(void) {
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
        int i, j, grid[n][m];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                scanf("%d", &grid[i][j]);

        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++) {
                if (!grid[i][j]) {
                    int sum = 0;
                    if (i < n - 1) sum += grid[i + 1][j];
                    if (j < m - 1) sum += grid[i][j + 1];
                    if (i > 0) sum += grid[i - 1][j];
                    if (j > 0) sum += grid[i][j - 1];
                    printf("%d", grid[i][j] + sum);
                } else putchar('9');
                if (j == m - 1) putchar('\n');
            }

    }
    return 0;
}
