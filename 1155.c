#include <stdio.h>

int main(void) {
    int a = 0;
    double t = 0;

    while ((a++) < 100) t += 1.0/a;

    printf("%.2lf\n", t);
    return 0;
} //This can be cheat just printing "5.19\n"