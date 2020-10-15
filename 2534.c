#include <stdio.h>

void sort(int notas[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++)  {
            if (notas[i] < notas[j]) {
                int tmp = notas[i];
                notas[i] = notas[j];
                notas[j] = tmp;
            }
        }
    }
}

int main(void) {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        int notas[a], i;
        for (i = 0; i < a; i++)
            scanf("%d", &notas[i]);

        sort(notas, a);
        while (b--) {
            scanf("%d", &i);
            printf("%d\n", notas[i - 1]);
        }
    }
    return 0;
}
