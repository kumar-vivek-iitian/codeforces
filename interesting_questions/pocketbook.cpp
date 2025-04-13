#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;

void solve() {
    int n, m; cin >> n >> m; 
    string s[n];
    for (int i=0; i<n; i++) cin >> s[i];
    set<int> stringSet[m];
    int ans = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            stringSet[j].insert(s[i][j]);
        }
    }
    for (int i=0; i<m; i++) {
        ans = (ans * stringSet[i].size()) % mod;
    }
    cout << ans % mod << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}