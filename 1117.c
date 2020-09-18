#include <stdio.h>

int main(void) {
    float a, b;
    
    while (scanf("%f", &a)) {
        if (a >= 0 && a <= 10) {
            while (scanf("%f", &b)) {
                if (b >= 0 && b <= 10) {
                    printf("media = %.2f\n", (a + b)/2);
                    return 0;
                } else {
                    printf("nota invalida\n");
                }
            }
        } else {
            printf("nota invalida\n");
        }
    }
}