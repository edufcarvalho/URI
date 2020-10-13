#include <stdio.h>

int main(void) {
    char alphabet[26];
    int a, i;
    while (scanf("%s", alphabet) != EOF) {
        scanf("%d", &a);
        while (a--) {
            scanf("%d", &i);
            putchar(alphabet[i - 1]);
        }
        printf("\n");
    }
    return 0;
}
