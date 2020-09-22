#include <stdio.h>
#include <string.h>

int main(void) {
    int i, a, cifra;
    char cript[50];

    scanf("%d", &a);

    while (a--) {
        scanf("%s", &cript);
        scanf("%d", &cifra);

        for (i = 0; i < strlen(cript); i++) {
            cript[i] -= cifra;
            if (cript[i] < 65) cript[i] += 26;
        }

        printf("%s\n", cript);
    }
    return 0;
}