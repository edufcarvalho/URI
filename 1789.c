#include <stdio.h>

int main(void) {
    int a, b, tmp;

    while (scanf("%d", &a)) {
        tmp = -1;
        while (a--) {
            scanf("%d", &b);
            if (b > tmp) tmp = b;
        }

        if (tmp >= 20) printf("3\n");
        else if (tmp >= 10) printf("2\n");
        else if (tmp < 10) printf("1\n");
    }
    return 0;
}