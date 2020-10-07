#include <stdio.h>

int main(void) {
    int a, i;

    while(scanf("%d", &a), a != 0) {
        for (i = 1; i < a; i++)
            printf("%d ", i);

        printf("%d\n", i);
    }
    return 0;
}
