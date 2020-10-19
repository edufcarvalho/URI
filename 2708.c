#include <stdio.h>

int main(void) {
    char input[7];
    int jeeps = 0, people = 0;
    while (scanf("%s", input), input[0] != 'A') {
        int tmp;
        scanf("%d", &tmp);
        if (input[0] == 'S') people += tmp, jeeps++;
        else people -= tmp, jeeps--;
    }
    printf("%d\n%d\n", people, jeeps);
}
