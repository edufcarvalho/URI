#include <stdio.h>

int main(void) {
    int m, d, days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    while (scanf("%d%d", &m, &d) != EOF) {
        int total = 0;
        if (m == 12) {
            if (d > 25) printf("Ja passou!\n");
            else if (d == 25) printf("E natal!\n");
            else if (d == 24) printf("E vespera de natal!\n");
            else printf("Faltam %d dias para o natal!\n", 25 - d);
        } else {
            for (m -= 1; m < 12; m++) total += days[m];
            printf("Faltam %d dias para o natal!\n", total - d);
        }
    }

    return 0;
}
