#include <stdio.h>

int main(void) {
    int i, a, b, tA, tB, counter = 0;
    float cA, cB;
    scanf("%d", &i);

    while (i--) {
        scanf("%d%d%f%f", &a, &b, &cA, &cB);
        counter = 0;
        while (a <= b) {
            tA = a * (cA/100);
            tB = b * (cB/100);
            a += tA;
            b += tB;
            counter++;
            if (counter > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (counter <= 100) printf("%d anos.\n", counter);
    }
    return 0;
}
