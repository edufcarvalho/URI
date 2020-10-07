#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j, a, b;
    char str[11];

    while (scanf("%d%d", &a, &b), a != 0 && b != 0) {
        int counter[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
        for (i = a; i <= b; i++) {
            sprintf(str, "%d", i);
            int size = strlen(str);
            
            for (j = 0; j < size; j++) 
                counter[str[j] - '0']++;
        }
        
        for (i = 0; i < 9; i++)
            printf("%d ", counter[i]);

        printf("%d\n", counter[9]);
    }

    return 0;
}
