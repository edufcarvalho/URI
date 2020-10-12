#include <stdio.h>

int main(void) {
    float a, b, c, tmp;
    scanf("%f%f%f", &a, &b, &c);

    if (a < b) tmp = a, a = b, b = tmp;
    if (b < c) tmp = b, b = c, c = tmp;
    if (a < b) tmp = a, a = b, b = tmp;

    if (a >= b + c) puts("Invalido");
    
    else {
        printf("Valido-");
        a *= a, b *= b, c *= c;
        if (a == b && a == c) puts("Equilatero");
        else if (a == b || b == c || c == a) puts("Isoceles");
        else puts("Escaleno");
        printf("Retangulo: ");
        if (a == (b + c)) puts("S");
        else puts("N");
    }

    return 0;
}
