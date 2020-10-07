#include <stdio.h>

int main(void) {
    int h, m;
    while (scanf("%d:%d", &h, &m) != EOF) {
        int a =  h * 60 + m - 420;
        if (a <= 0) printf("Atraso maximo: 0\n");
        else printf("Atraso maximo: %d\n", a);
    }
}
