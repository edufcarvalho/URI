#include <stdio.h>

int main(void) {
    int a;

    while (scanf("%d", &a), a != 2002)
        printf("Senha Invalida\n");

    printf("Acesso Permitido\n");
    return 0;
}
