#include <stdio.h>

int main(void) {
    int n;

    while (scanf("%d", &n) != EOF) {
        int i, j;
        unsigned long long int input[n], counter[] = {0, 0};

        for (i = 0; i < n; i++)
            scanf("%llu", &input[i]);

        for (i = 0, j = n-1; i <= j;) {
            if (counter[0] + input[i] <= counter[1] + input[j]) {
                counter[0] += input[i++];
            } else {
                counter[1] += input[j--];
            }
        }

        printf("%llu\n", counter[0] > counter[1] ? counter[0] - counter[1] : counter[1] - counter[0]);
    }

    return 0;
}
