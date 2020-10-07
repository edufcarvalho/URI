#include <stdio.h>

int main(void) {
    int i, l, a;
    unsigned long long int rice, total;

    scanf("%d", &a);
    while (a--) {
        scanf("%d", &l);
        rice = 1, total = 0;

        for (i = 0; i < l; i++) {
            total += rice;
            rice *= 2;
        }

        printf("%llu kg\n", total/12000);
    }

    return 0;
}
