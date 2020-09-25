#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    while ((a--) > 1) {
        printf("Ho ");
    }

    printf("Ho!\n");
    return 0;
}