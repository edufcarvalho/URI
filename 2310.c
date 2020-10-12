#include <stdio.h>

int main(void) {
    int n, i;
    double try[3] = {0, 0, 0}, success[3] = {0, 0, 0};
    scanf("%d", &n);

    while (n--) {
        scanf("%*s");
        
        for (i = 0; i < 3; i++) {
            int tmp;
            scanf("%d", &tmp);
            try[i] += tmp;
        }

        for (i = 0; i < 3; i++) {
            int tmp;
            scanf("%d", &tmp);
            success[i] += tmp;
        }

    }
    printf("Pontos de Saque: %.2lf", (success[0]/try[0]) * 100.00);
    puts(" %.");
    printf("Pontos de Bloqueio: %.2lf", (success[1]/try[1]) * 100.00);
    puts(" %.");
    printf("Pontos de Ataque: %.2lf", (success[2]/try[2]) * 100.00);
    puts(" %.");
}
