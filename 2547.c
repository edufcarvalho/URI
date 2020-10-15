#include <stdio.h>

int main(void) {
    int n, min, max;
    while (scanf("%d%d%d", &n, &min, &max) != EOF) {
        int counter = 0;
        while (n--) {
            int height;
            scanf("%d", &height);
            if (height >= min && height <= max) counter++;
        }
        printf("%d\n", counter);
    }
    return 0;
}
