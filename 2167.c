#include <stdio.h>

int main(void) {
    int i, n, cur, prev, def = 1;
    scanf("%d%d", &n, &cur);
    
    for (i = 0; i < n - 1; i++) {
        prev = cur;
        scanf("%d", &cur);
        if (def && cur < prev) {
            printf("%d\n", i + 2);
            def = 0;
        }
    }

    if (def) printf("0\n");

    return 0;
}
