#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();

    while (n--) {
        char c;
        float sec = 0;
        while (c = getchar(), c != '\n') sec += 0.01;
        printf("%.2f\n", sec);
    }

    return 0;
}
