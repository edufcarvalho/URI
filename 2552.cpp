#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n, m;
    ios::sync_with_stdio(false);
    while (cin >> n >> m) {
        vector<vector<int>> grid(n + 2, vector<int> (m + 2, 0));
        int i, j;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= m; j++)
                cin >> grid[i][j];

        for (i = 1; i <= n; i++)
            for (j = 1; j <= m; j++) {
                if (grid[i][j]) cout << '9';
                else cout << grid[i][j] + grid[i - 1][j] + grid[i + 1][j] + grid[i][j + 1] + grid[i][j - 1];
                if (j == m) cout << '\n';
            }
    }
    return 0;
}
