#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int a, b;
    ios::sync_with_stdio(false);
    while (cin >> a >> b) {
        vector <int> notas;
        while (a--) {
            int tmp;
            cin >> tmp;
            notas.push_back(tmp);
        }

        sort(notas.rbegin(), notas.rend());
        while (b--) {
            int i;
            cin >> i;
            cout << notas[i - 1] << "\n";
        }
    }

    return 0;
}
