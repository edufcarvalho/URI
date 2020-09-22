#include <stdio.h>
#include <string.h>

char *strrev(char *str) {
    int p1, p2;
    char tmp;
    
    for (p1 = 0, p2 = strlen(str) - 1; p2 > p1; p1++, p2--) {
        tmp = str[p1];
        str[p1] = str[p2];
        str[p2] = tmp;
    }

    return str;
}

int main(void) {
    int s;
    char cript[1001];
    scanf("%d", &s);
    
    getchar();
    while (s--) {
        gets(cript);

        int i;
        for (i = 0; i < strlen(cript); i++)
            if (cript[i] >= 65 && cript[i] <= 90 || cript[i] >= 97 && cript[i] <= 122)
                cript[i] += 3;

        char *rev = cript;
        rev = strrev(rev);
        
        int size = strlen(rev);
        
        for (i = size/2; i < size; i++)
            rev[i] -= 1;

        printf("%s\n", rev);
    }
    return 0;
}