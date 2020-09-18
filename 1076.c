#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("1 x %d = %d\n2 x %d = %d\n3 x %d = %d\n4 x %d = %d\n5 x %d = %d\n"
    "6 x %d = %d\n7 x %d = %d\n8 x %d = %d\n9 x %d = %d\n10 x %d = %d\n", a, a, a, 
    a * 2, a, a * 3, a, a * 4, a, a * 5, a, a * 6, a, a * 7, a, a * 8, a, a * 9, a, a * 10);

    return 0;
}