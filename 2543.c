#include <stdio.h>

int main(void) {
    int n, university;
    while (scanf("%d%d", &n, &university) != EOF) {
        int counter = 0;
        while (n--) {
            int a, identifier; 
            scanf("%d%d", &identifier, &a);
            if (!a && identifier == university) counter++;
        }
        printf("%d\n", counter);
    }
    return 0;
}
