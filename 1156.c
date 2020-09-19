#include <stdio.h>

int main(void) {
    float a = 1.0, b = 1.0;
    double t = 1;

    while (b *= 2, (a += 2) <= 39) t += a/b;

    printf("%.2lf\n", t);
    return 0;
} //This can be cheat just printing "6.00\n"