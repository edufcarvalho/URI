#include <stdio.h>

int main(void) {
    int a;

    while(scanf("%d", &a), a) {
        while (a--) {
            int b;
            scanf("%d", &b);
            if (b % 2 != 0) printf("%d\n", b * 2 - 1);
            else printf("%d\n", b * 2 - 2);
        }
    }
    return 0;
}
