#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            arr[i][j] = j;
        }
    }
    int oprs = 0;
    vector<pair<int, pair<int, int>>> ans;
    for (int col = 1; col <= n; col++) {
        int cnt = col;
        for (int row = 1; row <= n; row++) {
            if (arr[row][col] == cnt) {
                cnt++;
                continue;
            }
            if (cnt > n && arr[row][col] == cnt - n) {
                cnt++;
                continue;
            }
            if (col == min(cnt, n)) continue;
            swap(arr[row][col], arr[row][min(cnt, n)]);
            ans.push_back({row, {col, min(cnt, n)}});
            cnt++;
            oprs++;
        }
    }
    cout << "RESULT: __ " << "\n";
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << oprs << "\n";
    for (auto opr : ans) {
        cout << opr.first << " " << opr.second.first << " " << opr.second.second << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}