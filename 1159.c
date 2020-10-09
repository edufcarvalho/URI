#include <stdio.h>

int main(void) {
    int a, b;

    while (scanf("%d", &a), a) {
        if (a % 2 != 0) a++;
        printf("%d\n", a * 5 + 20);
    }
    return 0;
}
