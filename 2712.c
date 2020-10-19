#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char input[100];
    int n, a;
    scanf("%d", &n);

    while (n--) {
        scanf("%s", input);
        int i, condition = 1, size = strlen(input) - 1;

        if (input[3] != '-' || size != 7) {
            puts("FAILURE");
            continue;
        }

        for (i = 0; i < 3; i++) {
            if (toupper(input[i]) != input[i] || input[i] >= '0' && input[i] <= '9') {
                puts("FAILURE");
                condition = 0;
                break;
            }
        }

        if (!condition) continue;

        for (i = 4; i < size; i++) {
            if (input[i] < '0' || input[i] > '9') {
                puts("FAILURE");
                condition = 0;
                break;
            }
        }

        if (condition) {
            switch (input[size]) {
                case '1': case '2':
                    puts("MONDAY"); break;
                case '3': case '4':
                    puts("TUESDAY"); break;
                case '5': case '6':
                    puts("WEDNESDAY"); break;
                case '7': case '8':
                    puts("THURSDAY"); break;
                case '9': case '0':
                    puts("FRIDAY"); break;
            }
        }
    }

    return 0;
}
