#include <stdio.h>
#include <math.h>

int main(void) {
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int r, g, b;
        char input[4];
        scanf("%s%d%d%d", input, &r, &g, &b);
        printf("Caso #%d: ", i);

        if (input[0] == 'e') printf("%.0lf\n", floor(r * 0.30 + g * 0.59 + b * 0.11));
        else if (input[1] == 'e') printf("%d\n", ((r + g + b)/3));
        else {
            int tmp;
            if (r < g) tmp = r, r = g, g = tmp;
            if (g < b) tmp = g, g = b, b = tmp;
            if (r < g) tmp = r, r = g, g = tmp;

            if (input[1] == 'i') printf("%d\n", b);
            else printf("%d\n", r);
        }
    }

    return 0;
}
