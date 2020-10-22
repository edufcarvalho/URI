#include <stdio.h>

int main(void) {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    puts(n >= a + b ? "Farei hoje!" : "Deixa para amanha!");
    return 0;
}
