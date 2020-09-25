#include <stdio.h>
#include <string.h>

int main(void) {
    int a, i, j, size, fit;
    char start[1001], end[1001];
    scanf("%d", &a);

    while (a--) {
        scanf("%s%s", start, end);
        size = strlen(start), fit = 1;
        for (i = size - strlen(end), j = 0; i < size; i++) {
            if (start[i] != end[j++]) {
                fit = 0;
                break;
            }
        }

        if (fit) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}