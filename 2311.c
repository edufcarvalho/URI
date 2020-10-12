#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);

    while (n--) {
        float dif, total = 0, min = 10, max = 0;
        char name[50];
        scanf("%s", name);
        scanf("%f", &dif);

        for (i = 0; i < 7; i++) {
            float tmp;
            scanf("%f", &tmp);
            total += tmp;
            if (tmp > max) max = tmp;
            if (tmp < min) min = tmp;
        }

        printf("%s %.2f\n", name, (total - min - max) * dif);
    }
    return 0;
}
