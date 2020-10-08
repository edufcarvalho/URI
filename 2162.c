#include <stdio.h>

int main(void) {
    int n, cur, prev, def = 0, r = 1;
    scanf("%d", &n);

    scanf("%d%d", &prev, &cur);
    if (prev > cur) def = 1;
    else if (prev == cur) r = 0;
    n -= 2;

    while (n--) {
        prev = cur;
        scanf("%d", &cur);

        if (def) {
            if (prev >= cur) r = 0;
            def = 0;
        } else {
            if (prev <= cur) r = 0;
            def = 1;
        }
    }

    printf("%d\n", r);

    return 0;
}
