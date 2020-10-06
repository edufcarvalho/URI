#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    getchar();
    while (a--) {
        int i, leds = 0;
        char num[1001];
        fgets(num, 1000, stdin);

        for (i = 0; num[i] != '\n'; i++) {
            switch (num[i]) {
                case '1':
                    leds += 2; break;
                case '2': case '3': case '5':
                    leds += 5; break;
                case '4':
                    leds += 4; break;
                case '6': case '9': case '0':
                    leds += 6; break;
                case '7':
                    leds += 3; break;
                case '8':
                    leds += 7; break;
                default:
                    continue;
            }  
        }

        printf("%d leds\n", leds);
    }

    return 0;
}