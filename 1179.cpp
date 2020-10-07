#include <stdio.h>
#include <vector>

using namespace std;

int main(void) {
    int i, j, tmp;
    vector <int> even, odd;

    for (i = 0; i < 15; i++) {
        scanf("%d", &tmp);
        if (tmp % 2 == 0) even.push_back(tmp);
        else odd.push_back(tmp);

        if (odd.size() == 5) {
            for (j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, odd[j]);
            }
            odd.clear();
        }

        if (even.size() == 5) {
            for (j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, even[j]);
            }
            even.clear();
        }
    }

    for (j = 0; j < odd.size(); j++) {
        printf("impar[%d] = %d\n", j, odd[j]);
    }

    for (j = 0; j < even.size(); j++) {
        printf("par[%d] = %d\n", j, even[j]);
    }

    return 0;
}
