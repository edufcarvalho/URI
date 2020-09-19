#include <stdio.h>

int main(void) {
    int i, current = 0, next = 0;
    scanf("%d", &i);
    
    if (i >= 1) {
        printf("%d ", 0);
        next++;
    }

    while ((i--) > 2) {
        printf("%d ", current + next);
        current += next;
        next = current - next;
    }

    printf("%d\n", current + next);
    return 0;
}