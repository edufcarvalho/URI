#include <stdio.h>
#include <string.h>

int main(void) {
    int i;
    char buffer[501];
    fgets(buffer, 501, stdin);

    if (strlen(buffer) > 81) printf("NO\n");
    else printf("YES\n");

    return 0;
}
