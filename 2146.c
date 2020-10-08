#include <stdio.h>

int main(void) {
    int key;
    
    while (scanf("%d", &key) != EOF) printf("%d\n", key - 1);

    return 0;
}
