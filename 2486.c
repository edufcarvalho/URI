#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    while (scanf("%d", &n), n) {
        int counter = 0;
        while (n--) {
            int r;
            char eat[50];
            scanf("%d", &r);
            getchar();
            gets(eat);

            if (!strcmp(eat, "suco de laranja")) counter += r * 120;
            else if (!strcmp(eat, "morango fresco") || !strcmp(eat, "mamao")) counter += r * 85;
            else if (!strcmp(eat, "goiaba vermelha")) counter += r * 70;
            else if (!strcmp(eat, "manga")) counter += r * 56;
            else if (!strcmp(eat, "laranja")) counter += r * 50;
            else counter += r * 34;
        }
        if (counter >= 110 && counter <= 130) printf("%d mg\n", counter);
        else if (counter < 110) printf("Mais %d mg\n", 110 - counter);
        else if (counter > 130) printf("Menos %d mg\n", counter - 130);
    }
    return 0;
}
