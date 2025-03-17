#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i=0; i<n; i++) {
        string s; cin >> s;
        for (int j=0; j<m; j++) {
            arr[i][j] = s[j] - '0';
        }
    }
    int countX = 0;
    int countY = 0;
    for (int i=0; i<n; i++) {
        int xorr = 0;
        for (int j=0; j<m; j++) {
            xorr = xorr ^ arr[i][j];
        }
        if (xorr) countX += 1;
    }
    for (int j=0; j<m; j++) {
        int xorr = 0;
        for (int i=0; i<n; i++) {
            xorr = xorr ^ arr[i][j];
        }
        if (xorr) countY += 1;
    }
    cout << max(countX, countY) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}