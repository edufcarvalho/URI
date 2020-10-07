#include <stdio.h>

int main(void) {
    int s, a = 0, g = 0, d = 0;

    while (scanf("%d", &s), s != 4) {
        if (s == 1) a++;
        else if (s == 2) g++;
        else if (s == 3) d++;
    }

    printf("MUITO OBRIGADO\n"
    "Alcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);
    return 0;
}
