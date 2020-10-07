#include <stdio.h>

int main(void) {
    int a, b, def, j1, j2, sum;
    scanf("%d%d%d%d%d", &def, &j1, &j2, &a, &b);
    
    if (!b && a || b && !a) printf("Jogador 1 ganha!\n");
    else if (b && a) printf("Jogador 2 ganha!\n");
    else if (sum = j1 + j2, def) {
        if (sum & 1) printf("Jogador 2 ganha!\n");
        else printf("Jogador 1 ganha!\n");
    } else {
        if (sum & 1) printf("Jogador 1 ganha!\n");
        else printf("Jogador 2 ganha!\n");
    }

    return 0;
}
