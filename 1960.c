#include <stdio.h>

int main(void) {
    int i = 0, a;
    scanf("%d",&a);
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char characters[15][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    while (a > 0) {
        if (a >= numbers[i]) {
            printf("%s", characters[i]);
            a -= numbers[i];
        } else i++;
    }

    printf("\n");
	return 0;
}
