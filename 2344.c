#include <stdio.h>

int main(void) {
    int nota;
    scanf("%d", &nota);

    if (!nota) puts("E");
    else if (nota <= 35) puts("D");
    else if (nota <= 60) puts("C");
    else if (nota <= 85) puts("B");
    else puts("A");
    
    return 0;
}
