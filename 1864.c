#include <stdio.h>

int main(void) {
    int i, a;
    char *sentence = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d", &a);
    for (i = 0; i < a; i++) printf("%c", sentence[i]);
    printf("\n");
    return 0;
}
