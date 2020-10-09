#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;

    while (scanf("%d", &a), a) {
        scanf("%d%d", &b, &c);
        printf("%.0lf\n", floor(sqrt(a*b*100/c)));
    }
    return 0;
}
