#include <stdio.h>

int main(void) {
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF) 
        printf("%d\n", a * 2 * b);

    return 0;
}