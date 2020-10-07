#include <stdio.h>

int main(void) {
    int a, i = 0, l = 0;
    scanf("%d", &a);

    while (l++, (i++) < a) {
        printf("%d ", l++);
        printf("%d ", l++);
        printf("%d ", l++);
        printf("PUM\n");
    }
    return 0;
}
