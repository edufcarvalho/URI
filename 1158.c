#include <stdio.h>

int main(void) {
    int s, a, b;

    scanf("%d", &s);

    while (s--) {
        int t = 0;
        scanf("%d%d", &a, &b);
        if (a % 2 == 0) a++;

        while (b--) {
            t += a, a += 2;
        }
        printf("%d\n", t);
    }

    return 0;
}
