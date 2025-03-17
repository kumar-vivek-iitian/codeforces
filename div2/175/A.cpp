#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 0;
    ans += (n/15) + 1;
    if (n >= 1) {
    ans += ((n-1)/15) + 1;
    }
    if (n >= 2) {
    ans += ((n-2)/15) + 1;
    }
    cout << ans << "\n";
}


int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}