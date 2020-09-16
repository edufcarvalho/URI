#include <stdio.h>
#include <string.h>

char *strrev(char *str) {
    char *p1, *p2;

    if (!str || !*str)
        return str;
        
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; p1++, p2--) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
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

        char* rev = cript;
        rev = strrev(rev);
        
        int size = strlen(rev);

        for (i = size/2; i < size; i++)
            rev[i] -= 1;

        printf("%s\n", rev);
    }
    return 0;
}