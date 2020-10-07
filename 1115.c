#include <stdio.h>

int main(void) {
    int a, b;

    while (scanf("%d%d", &a, &b), a != 0 && b != 0) {
        if (a > 0) {
            if (b > 0) printf("primeiro\n");
            else printf("quarto\n");
        } else {
            if (b > 0) printf("segundo\n");
            else printf("terceiro\n");
        }
    }
    return 0;
}
