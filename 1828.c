#include <stdio.h>
#include <string.h>

int main(void) {
    int s, i;
    char raj[100], sheldon[100], *a = "papel", 
    *b = "pedra", *c = "Spock", *d = "lagarto", *e = "tesoura";

    scanf("%d", &s);

    for (i = 0; i < s; i++) {
        scanf("%s%s", sheldon, raj);
        if (!strcmp(raj, sheldon)) printf("Caso #%d: De novo!\n", i + 1);
        else if (!strcmp(raj, e) && !strcmp(sheldon, a)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, a) && !strcmp(sheldon, b)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, b) && !strcmp(sheldon, d)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, d) && !strcmp(sheldon, c)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, c) && !strcmp(sheldon, e)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, e) && !strcmp(sheldon, d)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, d) && !strcmp(sheldon, a)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, a) && !strcmp(sheldon, c)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, c) && !strcmp(sheldon, b)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (!strcmp(raj, b) && !strcmp(sheldon, e)) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else printf("Caso #%d: Bazinga!\n", i + 1);
    }

    return 0;
}