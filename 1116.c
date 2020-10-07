#include <stdio.h>

int main(void) {
    int s;
    scanf("%d", &s);

    while (s--) {
        float a, b;
        scanf("%f%f", &a, &b);
        if (b == 0) printf("divisao impossivel\n");
        else printf("%.1f\n", a / b);
    }

    return 0;
}
