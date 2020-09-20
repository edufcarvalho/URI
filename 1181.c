#include <stdio.h>

int main(void) {
    int i, j, l;
    double c = 0, a;
    char b;

    scanf("%d %c", &l, &b);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &a);
            if (i == l) c+= a;
        }
    }

    if (b == 'S') {
        printf("%.1lf\n", c);
    } else {
        printf("%.1lf\n", c / 12);
    }

    return 0;
}