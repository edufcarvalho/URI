#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    scanf("%s", input);
    int i, counter = 0, size = strlen(input);

    for (i = 0; i < size; i++) {
        printf("%c", input[i]);
        if (input[i] == '1') counter++;
    }

    if (counter & 1) printf("1\n");
    else printf("0\n");

    return 0;
}
