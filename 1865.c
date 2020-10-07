#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    getchar();

    while (a--) {
        int n;
        char name[10];

        scanf("%s %d", name, &n);

        if (name[0] == 'H') printf("N\n");
        else if (name[0] == 'S') printf("N\n");
        else {
            if (name[1] == 'o') printf("N\n");
            else printf("Y\n");
        }
    }

    return 0;
}
