#include <stdio.h>

int main(void) {
    int i, a, v[3] = {0, 0, 0};
    scanf("%d", &a);

    for (i = 0; i < a + 1; i++) {
        if (i < a) scanf("%d", &v[i % 3]);
        else v[i % 3] = 0;
        if (i > 0) printf("%d\n", v[0] + v[1] + v[2]);
    }

    return 0;
}
