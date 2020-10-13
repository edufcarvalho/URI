#include <stdio.h>

int main(void) {
    unsigned long long int a;

    while (scanf("%llu", &a), a != -1) {
        if (a) a--;
        printf("%llu\n", a);
    }

    return 0;
}
