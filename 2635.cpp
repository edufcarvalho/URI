#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int i, n, t;
    ios::sync_with_stdio(false);
    cin >> n;
    string arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    cin >> t;
    while (t--) {
        int maxSize = 0, count = 0;
        string search;
        cin >> search;
        for (i = 0; i < n; i++) {
            if (arr[i].find(search) == 0) {
                int size = arr[i].size();
                count++;
                if (size > maxSize) maxSize = size;
            }
        }
        if (count) cout << count << ' ' << maxSize << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}
