#include <stdio.h>
#include <string.h>

int main(void) {
    char input[50];
    scanf("%s", input);

    for (int i = strlen(input) - 1; i >= 0; i--) printf("%c", input[i]);
    printf("\n");

    return 0;
}
