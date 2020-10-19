#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) {
    string joia;
    ios::sync_with_stdio(false);
    set <string> joias;

    while (cin >> joia)
        joias.insert(joia);

    cout << joias.size() << '\n';
    return 0;
}
