#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        int i, a, shots = 0;
        scanf("%d", &a);
        int height[a];
        char jump[a];

        for (i = 0; i <= a; i++) scanf("%d", &height[i]);
        for (i = 0; i <= a; i++) scanf("%c", &jump[i]);

        for (i = 0; i <= a; i++) {
            if (height[i] > 2 && jump[i] == 'J') shots++;
            else if(height[i] < 3 && jump[i] == 'S') shots++;
        }

        printf("%d\n", shots);
    }
    return 0;
}