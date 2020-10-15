#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int counter = 0;
        for (int i = 0; i < n; i++) {
            int vote;
            scanf("%d", &vote);
            if (vote) counter++;
        }

        if (counter >= 2*(n/3.0)) puts("impeachment");
        else puts("acusacao arquivada");
    }

    return 0;
}
