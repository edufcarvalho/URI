#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b, i, j, tmp, counter, past = 0;

    bool status, stair = true;
    scanf("%d%d", &a, &b);

    for (i = 0; i < a; i++) {
        counter = 0;
        status = true;
        for (j = 0; j < b; j++) {
            scanf("%d", &tmp);

            if (tmp == 0 && status) counter++;
            else status = false;
        }

        if (past && counter < past) stair = false;
        if (past == j && counter != j) stair = false;
        
        past = counter;
    }

    if (stair) printf("S\n");
    else printf("N\n");

    return 0;
}
