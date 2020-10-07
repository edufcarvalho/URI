#include <stdio.h>

int main(void) {
    int a;
    char buffer[50];

    scanf("%d", &a);

    while (a--) fgets(buffer, 50, stdin);

    printf("Ciencia da Computacao\n");

    return 0;
}
