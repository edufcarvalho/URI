#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        char action1[10], action2[10];
        scanf("%s %s", action1, action2);

        if (!strcmp(action1, action2)) {
            if (!strcmp(action1, "papel")) printf("Ambos venceram\n");
            else if (!strcmp(action1, "pedra")) printf("Sem ganhador\n");
            else if (!strcmp(action1, "ataque")) printf("Aniquilacao mutua\n");
        } else {
            if (!strcmp(action1, "papel") || !strcmp(action2, "ataque")) printf("Jogador 2 venceu\n");
            else if (!strcmp(action2, "papel") || !strcmp(action1, "ataque")) printf("Jogador 1 venceu\n");
        }
    }

    return 0;
}
