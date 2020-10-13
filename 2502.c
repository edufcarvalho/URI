#include <stdio.h>
#include <ctype.h>

int main(void) {
    int i, a, b;
    
    while (scanf("%d%d", &a, &b) != EOF) {
        char alphabet[255];
        for (i = 0; i < 255; i++) alphabet[i] = '|';
        char c, cript[a + 1], decript[a + 1];
        getchar();
        fgets(cript, a + 1, stdin);
        getchar();
        fgets(decript, a + 1, stdin);
        getchar();

        for (i = 0; i <= a; i++) {
            alphabet[cript[i]] = decript[i];
            alphabet[decript[i]] = cript[i];
            alphabet[tolower(cript[i])] = tolower(decript[i]);
            alphabet[tolower(decript[i])] = tolower(cript[i]);
        }

        while (b--) {
            while (c = getchar(), c != '\n') {
                if (alphabet[c] != '|') putchar(alphabet[c]);
                else putchar(c);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
