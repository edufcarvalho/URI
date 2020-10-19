#include <stdio.h>

int main(void) {
    int food[3], choice[3], total = 0;
    scanf("%d%d%d", &food[0], &food[1], &food[2]);
    scanf("%d%d%d", &choice[0], &choice[1], &choice[2]);

    for (int i = 0; i < 3; i++) {
        int tmp = food[i] - choice[i];
        if (tmp < 0) total += (tmp * -1);
    }

    printf("%d\n", total);
    return 0;
}
