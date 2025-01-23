#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r; cin >> l >> r;
    int ans = r - l;
    if (l == 1 && r == 1) ans = 1;
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
