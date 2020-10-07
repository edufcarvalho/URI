#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a * c > b) printf("N\n");
    else printf("S\n");

    return 0;
}
