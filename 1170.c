#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    while (a--) {
        int d;
        float b;
        scanf("%f", &b);
        for (d = 0; b > 1; d++, b /= 2);
        printf("%d dias\n", d);
    }

    return 0;
}
