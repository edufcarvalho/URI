#include <stdio.h>

int main(void) {
    int a, b, i = 1;
    unsigned long long int fibo[60] = {0, 1};

    scanf("%d", &a);

    while (a--) {
        scanf("%d", &b);
        if (b <= i) printf("Fib(%d) = %llu\n", b, fibo[b]);

        else {
            while (i - 1 < b) {
                fibo[i + 1] = (fibo[i] + fibo[i - 1]);
                i++;
            }
            printf("Fib(%d) = %llu\n", b, fibo[b]);
        }
    }

    return 0;
}
