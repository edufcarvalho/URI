#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    while (a--) {
        int y;
        scanf("%d", &y);

        if (y >= 2015) printf("%d A.C.\n", y - 2014);
        else printf("%d D.C.\n", 2015 - y);
    }

    return 0;
}
