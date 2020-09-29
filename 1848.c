#include <stdio.h>
#include <string.h>

int main(void) {
    int i = 0, j = 0;
    char action[10];
    
    while (j < 3, fgets(action, 9, stdin)) {
        if (action[0] == 'c') {
            printf("%d\n", i);
            i = 0;
            j++;
            continue;
        }

        if (action[2] == '*') i += 1;
        if (action[1] == '*') i += 2;
        if (action[0] == '*') i += 4;
    }
    return 0;
}