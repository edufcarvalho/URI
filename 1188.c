#include <stdio.h>

int main(void) {
    int i, j;
    double c = 0, a;
    char b;

    scanf("%c", &b);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++) {
            scanf("%lf", &a);
            if (j < i && j + i > 11) c += a;
        }

    if (b == 'S') {
        printf("%.1lf\n", c);
    } else {
        printf("%.1lf\n", c / 30);
    }

    return 0;
}
