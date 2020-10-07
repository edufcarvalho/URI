#include <stdio.h>

int main(void) {
    int i = 0, n[10];
    scanf("%d", &n[0]);

    while ((i++) < 9) n[i] = n[i - 1] * 2;

    for (i = 0; i < 10; i++) printf("N[%d] = %d\n", i, n[i]);

    return 0;
}
