#include <stdio.h>

int main(void) {
    int a, b, d, c = 0, g = 0, i = 0, e = 0;

    while(c++, scanf("%d%d", &a, &b)) {
        if (a > b) i++;
        else if (a < b) g++;
        else e++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &d);
        if (d == 2) break;
        else continue;
    }
    
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", c, i, g, e);
    
    if (i > g) printf("Inter venceu mais\n");
    else if (i < g) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}