#include <stdio.h>

int main(void) {
    int a, i = 0, l = 0;
    scanf("%d", &a);

    while (l++, (i++) < a) {
        printf("%d ", l);
        printf("%d ", l*l);
        printf("%d\n", l*l*l);
    }
    return 0;
}
