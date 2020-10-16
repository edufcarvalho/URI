#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    getchar();

    while (a--) {
        scanf("%*[^\n]%*c");
        puts("I am Toorg!");
    }

    return 0;
}
