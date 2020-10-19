#include <stdio.h>
#include <math.h>

int main(void) {
    int n;

    while (scanf("%d", &n) != EOF) {
        int i, input[n], j, result = 0, def = 1;
        for (i = 0; i < n; i++)
            scanf("%d", &input[i]);

        scanf("%d", &j);

        for (i -= 1; i >= 0; i -= j)
            result += input[i];

        if (result != 2 && result % 2 == 0 || result == 1) def = 0;
        else {
            for (i = 3; i <= sqrt(result); i += 2)
                if (result % i == 0)
                    def = 0;
        }

        if (def) puts("You’re a coastal aircraft, Robbie, a large silver aircraft.");
        else puts("Bad boy! I’ll hit you.");
    }

    return 0;
}
