#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    while (a--) {
        int b;
        scanf("%d", &b);
        if (b % 2 != 0) printf("1\n");
        else printf("0\n");
    }

    return 0;
}
