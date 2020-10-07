#include <stdio.h>

int main(void) {
    long double a;
    char input[117];

    scanf("%LF", &a);
    sprintf(input,"%LF", a);

    if (input[0] != '-') printf("+");
    printf("%.4LE\n", a);
    return 0;
}
