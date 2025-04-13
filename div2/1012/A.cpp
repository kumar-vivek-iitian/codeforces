#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, a; cin >> x >> y >> a;
    a = a % (x + y);
    if (a + 0.5 < x) cout << "NO\n";
    else cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}