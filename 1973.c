#include <stdio.h>

int main(void) {
    int i, a;
    scanf("%d", &a);
    int star[a], sheep[a];
    unsigned long long int viagens = 0, total = 0;

    for (i = 0; i < a; star[i++] = 1) {
        scanf("%d", &sheep[i]);
        total += sheep[i];
    }

    for (i = 0; 1;) {
        if (i == 0 && sheep[i] % 2 == 0) {
            if (star[i]) star[i] = 0, viagens++;
            if (sheep[i] > 0) sheep[i]--, total--;
            break;
        } else if (i == a - 1 && sheep[i] % 2 == 1) {
            if (star[i]) star[i] = 0, viagens++;
            if (sheep[i] > 0) sheep[i]--, total--;
            break;
        } else if (sheep[i] % 2 == 1) {
            if (sheep[i] > 0) sheep[i]--, total--;
            if (star[i]) star[i++] = 0, viagens++;
        } else if(sheep[i] % 2 == 0) {
            if (star[i]) star[i] = 0, viagens++;
            if (sheep[i] > 0) sheep[i--]--, total--;
        }
    }

    printf("%llu %llu\n", viagens, total) ;
    return 0;
}
