#include <stdio.h>

int main(void) {
    int i = 0, a;
    char result[1000];
    scanf("%d", &a);
    while (a != 0) {
        int resto = a % 16;
        if (resto < 10)
            result[i++] = 48 + resto;
        else
            result[i++] = 55 + resto;
        a /= 16;
    }
    result[i] = '\0';

    for (i -= 1; i >= 0; i--) printf("%c", result[i]);
    printf("\n");

    return 0;
}