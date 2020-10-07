#include <stdio.h>

int main(void) {
    int n, fatorial = 1;
    scanf("%d", &n) ;

    while (n > 1) fatorial *= n--;

    printf("%d\n", fatorial);
    return 0;
}
