#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    while (a--) {
        int result = 0, i = 0, x;
        scanf("%d", &x);

        while (i++ < x - 1)
            if (x % i == 0)
                result += i;

        if (result == x) printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
    }
    return 0;
}
