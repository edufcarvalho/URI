#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {
    int a, b, i = 1;
    uint64_t fibo[60] = {0, 1};

    scanf("%d", &a);

    while (a--) {
        scanf("%d", &b);
        if (b <= i) printf("Fib(%d) = %" PRIu64 "\n", b, fibo[b]);

        else {
            while (i - 1 < b) {
                fibo[i + 1] = (fibo[i] + fibo[i - 1]);
                i++;
            }
            printf("Fib(%d) = %" PRIu64 "\n", b, fibo[b]);
        }
    }

    return 0;
}