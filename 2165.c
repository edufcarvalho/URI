#include <stdio.h>
#include <string.h>

int main(void) {
    char input[500];

    fgets(input, 500, stdin);

    if (strlen(input) > 141) printf("MUTE\n");
    else printf("TWEET\n");

    return 0;
}
