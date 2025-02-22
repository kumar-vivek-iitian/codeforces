#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int>(5));
    for (int i=0; i<n; i++) {
        for (int j=0; j<5; j++) cin >> arr[i][j];
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
}
