#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d", &a, &b);
    if (a > b) c = a, a = b, b = c;
    
    for (a += 1; a < b; a++) {
        c = a % 5;
        if (c == 2 || c == 3) printf("%d\n", a);
    }
    return 0;
}