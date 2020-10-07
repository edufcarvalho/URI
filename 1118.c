#include <stdio.h>

int main(void) {
    int c;
    float a, b;
    
    while (scanf("%f", &a)) {
        if (a >= 0 && a <= 10) {
            while (scanf("%f", &b)) {
                if (b >= 0 && b <= 10) {
                    printf("media = %.2f\n", (a + b)/2);

                    do {
                        printf("novo calculo (1-sim 2-nao)\n");
                        scanf("%d", &c);
                        if (c == 2) return 0;
                    } while (c < 0 || c > 1);
                    
                    break;
                } else {
                    printf("nota invalida\n");
                }
            }
        } else {
            printf("nota invalida\n");
        }
    }
}
