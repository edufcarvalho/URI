#include <stdio.h>

int main(void) {
    int i, j, a, b, max = 0, winner;
    scanf("%d %d", &a, &b);

    int points[a];

    for (i = 0; i < a; points[i++] = 0);

    for (i = 0; i < b; i++)
        for (j = 0; j < a; j++) {
            int tmp;
            scanf("%d", &tmp);
            points[j] += tmp;
            if (points[j] >= max) max = points[j], winner = j;
        }

    printf("%d\n", winner + 1);

    return 0;
}