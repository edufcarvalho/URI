#include <stdio.h>

int main(void) {
    int i = 0;
    float a[100];
    
    while(scanf("%f", &a[i++]), i < 100);

    for (i = 0; i < 100; i++) if (a[i] <= 10) printf("A[%d] = %.2f\n", i, a[i]);

    return 0;
}
