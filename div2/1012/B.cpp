#include<bits/stdc++.h>
using namespace std;

bool cond1(vector<vector<int>> &grid, int i, int j) {
    int k = 0;
    for (k = 0; k < j; k++) {
        if (grid[i][k] == 0) return false;
    }
    return true;
}

bool cond2(vector<vector<int>> &grid, int i, int j) {
    int k = 0;
    for (k = 0; k < i; k++) {
        if (grid[k][j] == 0) return false;
    }
    return true;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> finalGrid(n, vector<int>(m));
    for (int i = 0 ; i < n; i++) {
        string s; cin >> s;
        for (int j = 0 ; j < m; j++) {
            finalGrid[i][j] = s[j] - '0';
        }
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m; j++) {
            if (finalGrid[i][j]) {
                if (i == 0 || j == 0) continue;
                bool cond = false;
                cond = cond1(finalGrid, i, j) || cond2(finalGrid, i, j);
                if (cond) continue;
                else {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}