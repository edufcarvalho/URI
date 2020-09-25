#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    int idx, i, j, a, alpha[28];
    bool cheated;
    char diet[28], breakfast[28], lunch[28], result[28];
    scanf("%d", &a);

    getchar();
    while (a--) {
        cheated = false;
        fgets(diet, 28, stdin);
        fgets(breakfast, 28, stdin);
        fgets(lunch, 28, stdin);

        for (i = 0; i < 26; alpha[i++] = 0);

        for (i = 0; diet[i] != '\n'; i++) {
            idx = diet[i] - 65;
            alpha[idx]++;
        }
        
        for (i = 0; breakfast[i] != '\n'; i++) {
            idx = breakfast[i] - 65;
            alpha[idx] += 2;
        }

        for (i = 0; lunch[i] != '\n'; i++) {
            idx = lunch[i] - 65;
            alpha[idx] += 2;
        }

        for (i = 0, j = 0; i < 26; i++) {
            if (alpha[i] > 3 || alpha[i] == 2) {
                cheated = true;
                break;
            } else if (alpha[i] == 1) {
                result[j++] = (char) i + 65;
            }
        }
        result[j] = '\0';

        if (cheated) printf("CHEATER\n");
        else printf("%s\n", result);
    }
    return 0;
}