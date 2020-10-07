#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        int a, b;
        char choice, input[2][100];
    
        scanf("%s %c%*s %s %*s", input[0], &choice, input[1]);
        scanf("%d%d", &a, &b);

        if ((a + b) % 2 != 0) {
            if (choice == 'I') printf("%s\n", input[0]);
            else printf("%s\n", input[1]);
        } else {
            if (choice == 'P') printf("%s\n", input[0]);
            else printf("%s\n", input[1]);
        }
    }

    return 0;
}
