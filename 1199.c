#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, num;
    char input[80], result[80];
    while (fgets(input, 80, stdin), num = atoi(input), num >= 0) {
        int i = 0;

        if (num < 0) return 0;

        if (input[0] == '0' && input[1] == 'x') {
            printf("%d\n", strtol(input, NULL, 16));
        } else {
            while (num != 0) {
                int resto = num % 16;

                if (resto < 10) result[i++] = 48 + resto;
                else result[i++] = 55 + resto;

                num /= 16;
            }
            result[i] = '\0';
        
            printf("0x");
            for (i -= 1; i >= 0; i--) printf("%c", result[i]);
            printf("\n");
        }
    }

    return 0;
}