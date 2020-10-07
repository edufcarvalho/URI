#include <stdio.h>

int main(void) {
    int jump, n, cur, prev, win = 1;

    scanf("%d%d", &jump, &n);

    scanf("%d", &prev);
    while ((n--) > 1) {
        scanf("%d", &cur);

        if (prev - cur > jump || cur - prev > jump) {
            printf("GAME OVER\n");
            win = 0;
        }

        prev = cur;
    }

    if (win) printf("YOU WIN\n");
    return 0;
}
