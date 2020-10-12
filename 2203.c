#include <stdio.h>
#include <math.h>

int main(void) {
    int x[2], y[2], v, r[2];
    //Fiddlesticks coordinates: (x[0], y[0]), invader coordinates: (x[1], y[1])
    while(scanf("%d%d%d%d%d%d%d", &x[0], &y[0], &x[1], &y[1], &v, &r[0], &r[1]) != EOF) {
        double d = sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));
        if (d + (v * 1.5) <= r[0] + r[1]) puts("Y");
        else puts("N");
    }

    return 0;
}
