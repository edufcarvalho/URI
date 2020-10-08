#include <stdio.h>

int main(void) {
    int i, a, b, c, pay[] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};

    while (scanf("%d%d", &a, &b), a != 0 && b != 0) {
        int possible = 0;

        for (c = b - a, i = 0; i < 15; i++) {
            if (c == pay[i]) {
                possible = 1;
                break;
            }
        }

        if (possible) printf("possible\n");
        else printf("impossible\n");

    }

    return 0;
}
