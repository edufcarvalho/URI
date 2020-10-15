#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n, c = 1;

    while (scanf("%d", &n) != EOF) {
        int i, j, s = 1;
        vector <int> array;
        array.push_back(0);

        for(i = 0; i <= n; i++)
            for (j = 0; j < i; j++, s++)
                array.push_back(i);
        
        if (s == 1) printf("Caso %d: %d numero\n", c++, 1);
        else printf("Caso %d: %d numeros\n", c++, s);

        printf("%d", array[0]);

        for (i = 1; i < s; i++) printf(" %d", array[i]);

        printf("\n\n");
    }

    return 0;
}
