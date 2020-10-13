#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} coordinate;

int main(void) {
    int a, b;

    while (scanf("%d%d", &a, &b) != EOF) {
        int i, j;
        coordinate pokemon, ash;
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                int tmp;
                scanf("%d", &tmp);
                if (tmp == 1) ash.x = i, ash.y = j;
                else if (tmp == 2) pokemon.x = i, pokemon. y = j;
            }
        }
        printf("%d\n", abs(ash.x - pokemon.x) + abs(ash.y - pokemon.y));
    }
    return 0;
}
