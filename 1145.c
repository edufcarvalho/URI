#include <stdio.h>

int main(void) {
    int a, b, i = 0, l = 1;
    scanf("%d%d", &a, &b);
    
    while (l < b) {
        int i = a - 1;
        
        while(i--)
            printf("%d ", l++);
        
        printf("%d\n", l++);
    }
    return 0;
}
