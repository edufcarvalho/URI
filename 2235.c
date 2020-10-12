#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == b || a == c || b == c) puts("S");
    else if ((a + b) == c) puts("S");
    else if ((b + c) == a) puts("S");
    else if ((a + c) == b) puts("S");
    else puts("N");
    
    return 0;
}
