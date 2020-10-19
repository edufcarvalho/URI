#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    int n, w;
    cin >> n >> w;
    vector <int> notas;
    
    while (n--) {
        int tmp;
        cin >> tmp;
        notas.push_back(tmp);
    }

    sort(notas.rbegin(), notas.rend());

    cout << (w + count(notas.begin() + w, notas.end(), notas[w - 1])) << '\n';
    return 0;
}
