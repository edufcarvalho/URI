#include <stdio.h>

int main(void) {
    int n, win;
    double max = 0;
    scanf("%d", &n);

    while (n--) {
        int input;
        double score;

        scanf("%d%lf", &input, &score);

        if (score > max) win = input, max = score;
    }

    if (max >= 8) printf("%d\n", win);
    else printf("Minimum note not reached\n");

    return 0;
}
