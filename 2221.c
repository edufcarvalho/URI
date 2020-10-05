#include <stdio.h>

void battle(int a[], int b) {
    int d, g;
    d = (a[0] + a[1])/2;
    g = (a[3] + a[4])/2;
    if (a[2]%2 == 0) d += b;
    if (a[5]%2 == 0) g += b;   
    if (d > g) printf("Dabriel\n");
    if (d < g) printf("Guarte\n");
    if (d == g) printf("Empate\n");
}

int main(void) {
    int i, b, j, t, result, status[6];
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &b);

        for (j = 0; j < 6; j++)
            scanf("%d", &status[j]);

        battle(status, b);
    }

    return 0;
}