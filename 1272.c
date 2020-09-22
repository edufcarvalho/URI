#include <stdio.h>

int main (void) {
    int a, i;
    char cript[52];
    scanf("%d", &a);

    getchar();
    while (a--) {
        fgets(cript, 52, stdin);

        if (cript[0] != ' ') printf("%c", cript[0]);

        for (i = 0; cript[i] != '\n'; i++)
            if (cript[i - 1] == ' ' && cript[i] >= 97 && cript[i] <= 122)
                printf("%c", cript[i]);
        printf("\n");
    }
    return 0;
}