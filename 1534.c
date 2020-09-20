#include <stdio.h>

int main(void) {
    int s, i, j;

    while (scanf("%d", &s) == 1) {
        for (i = 0; i < s; i++) {
            for (j = 0; j < s; j++) {
                if (i + j == s - 1) printf("2");
                else if (i == j) printf("1");
                else printf("3");
            }
            printf("\n");
        }
    }

    return 0;
}