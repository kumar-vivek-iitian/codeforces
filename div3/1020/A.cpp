#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    int one = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '1') one++;
    }
    for (int i=0; i<n; i++) {
        if (s[i] == '0') {
            ans += one + 1;
        } else {
            ans += one - 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t; cin >> t; while (t--) solve();
}