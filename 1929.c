#include <stdio.h>

int main(void) {
    int i, j, stick[4];

    scanf("%d%d%d%d", &stick[0], &stick[1], &stick[2], &stick[3]);

    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 4; j++) {
            if (stick[j] < stick[i]) {
                int tmp = stick[i];
                stick[i] = stick[j];
                stick[j] = tmp;
            }
        }

    if (stick[2] < stick[0] + stick[1] || stick[3] < stick[1] + stick[2]) printf("S\n");
    else printf("N\n");

    return 0;
}