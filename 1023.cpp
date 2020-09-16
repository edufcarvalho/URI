//This solution isn't correct yet (currently working)

/*This program can be turned into a C program if you
remove the <algorithm> library, and andapt the sort 
method to be used without std::sort()*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <algorithm>

using namespace std;

typedef struct {
    int people;
    int consumption;
} water;

bool compare(water a, water b) {
    return a.consumption < b.consumption;
}

int main(void) {
    int s = 0, city = 1, d = 1;
    while (scanf("%d", &s)) {
        if (city > 1 && s > 0) printf("\n");
        if (s == 0) break;
        int j = 0, i = 0;
        water total;
        total.consumption = 0; total.people = 0;

        if (s > 0) {
            water people[s + 1];
            while ((j++) < s) {
                bool find = false;
                int cons = 0, persons = 0;

                scanf("%d%d", &persons, &cons);

                total.consumption += cons; total.people += persons;
                cons /= persons;

                //Can be turned into a binary search, for better performance
                for (int x = 0; x < i; x++) {
                    if (cons == people[x].consumption) {
                        people[x].people += persons;
                        find = true;
                        i++;
                        d++;
                    }
                }

                if (find == false) {
                    people[i].people = persons;
                    people[i].consumption = cons;
                    i++;
                } else {
                    find = false;
                }
            }

            sort(people, people + s, compare);
            printf("Cidade# %d:\n", city++);

            for (i = 0; i < s - d; i++) {
                printf("%d-%d ", people[i].people, people[i].consumption);
            }
            printf("%d-%d\n", people[i].people, people[i].consumption);
            printf("Consumo medio: %.2lf m3.\n", floor(100.0 * (float)total.consumption/total.people) / 100.0);
        }
    }
    return 0;
}