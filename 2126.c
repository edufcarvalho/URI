#include <stdio.h>
#include <string.h>

int main(void) {
    int c = 1;
    char a[50], b[30];

    while (scanf("%s%s", b, a) != EOF) {
        int start, occ = 0, i, j, d, size2 = strlen(b), size1 = strlen(a) - size2 + 1;

        for (i = 0; i < size1; i++) {
            if (a[i] == b[0]) {
                int contains = 1, tmp = i;

                for (j = 0, d = i; j < size2; j++, d++) {
                    if (a[d] != b[j]) {
                        contains = 0;
                        break;
                    }
                }

                if (contains) {
                    occ++;
                    start = tmp;
                }
            }
        }

        printf("Caso #%d:\n", c++);
        if (occ > 0) {
            printf("Qtd.Subsequencias: %d\n", occ);
            printf("Pos: %d\n\n", start + 1);
        } else printf("Nao existe subsequencia\n\n");
    }

    return 0;
}
