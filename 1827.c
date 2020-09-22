#include <stdio.h>

int main(void) {
    int i, j, a, d, mid, frontier, area;

    while(scanf("%d", &a) != EOF) {
        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                mid = a/2, frontier = a/3, d = 0, area = a - frontier;
                if (j == i) d = 2;
                else if (j == a - i - 1) d = 3;
                if (i >= frontier && j >= frontier && i < area && j < area) d = 1;
                if (j == mid && i == mid) d = 4;
                printf("%d", d);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}