#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int i, a = 0, occurrences[26], max, size;
    char freq[1001];
    scanf("%d", &a);

    getchar();
    while (a--) {
        fgets(freq, 1001, stdin);

        max = 0, size = strlen(freq);

        for (i = 0; i < 26; i++) occurrences[i] = 0;

        for (i = 0; i < size; i++) {
            int idx = tolower(freq[i]) - 97;
            if (idx >= 0) {
                occurrences[idx]++;
                if (occurrences[idx] > max) max = occurrences[idx];
            }
        }

        for (i = 0; i < 26; i++)
            if (occurrences[i] == max) printf("%c", i + 97);

        printf("\n");
    }

    return 0;
}