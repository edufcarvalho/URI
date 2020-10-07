#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int i, s;
    char matring[4][84];

    for (i = 0; i < 4; i++) fgets(matring[i], 83, stdin);
    int size = strlen(matring[0]) - 2;

    char key1[] = {matring[0][0], matring[1][0], matring[2][0], matring[3][0], '\0'},
    key2[] = {matring[0][s], matring[1][s], matring[2][s], matring[3][s], '\0'};
    int key[2] = {atoi(key1), atoi(key2)};

    for (i = 1; i < s; i++) {
        char value[] = {matring[0][i], matring[1][i], matring[2][i], matring[3][i], '\0'};
        int v = atoi(value);
        printf("%c", ((key[0] * v) + key[1])%257);
    }
    printf("\n");

    return 0;
}
