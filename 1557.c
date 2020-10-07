#include <stdio.h>

int main(void) {
    int i, j, n;
    while (scanf("%d",&n), n > 0) {
        int ref = 1, print = 1;

        for (i = 0; i < n; i++) {
            print = ref;
            ref *= 2;
            for (j = 0; j < n ; j++) {
                if (n < 3) printf("%d", print);
                else if (n < 5) printf("%2d", print);
                else if (n < 6) printf("%3d", print);
                else if (n < 8) printf("%4d", print);
                else if (n < 10) printf("%5d", print);
                else if (n < 11) printf("%6d", print);
                else if (n < 13) printf("%7d", print);
                else if (n < 15) printf("%8d", print);
                else printf("%9d", print);
                print *= 2;
                if (j < n - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
