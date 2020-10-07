#include <stdio.h>

int main(void) {
    int n, c = 1;

    while (scanf("%d", &n) != EOF) {
        int i, j, s = 1, array[n * n + 1];
        array[0] = 0;

        for(i = 0; i <= n; i++)
            for (j = 0; j < i; j++)
                array[s++] = i;
            
        if (s == 1) printf("Caso %d: %d numero\n", c++, 1);
        else printf("Caso %d: %d numeros\n", c++, s);

        printf("%d", array[0]);

        for (i = 1; i < s; i++) printf(" %d", array[i]);

        printf("\n\n");
    }

    return 0;
}
