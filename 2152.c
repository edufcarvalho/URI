#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        int a, b, door;
        scanf("%d%d%d", &a, &b, &door);
        printf("%.2d:%.2d - A porta ", a, b);
        if (door) printf("abriu!\n");
        else printf("fechou!\n");
    }

    return 0;
}
