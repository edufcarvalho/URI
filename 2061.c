#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);

    while (b--) {
        char c;

        getchar();
        scanf("%c%*s", &c);
        

        if (c == 'f') a++;
        else a--;
    }

    printf("%d\n", a);
    return 0;
}
