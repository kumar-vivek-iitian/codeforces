#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int m = (n + 1) / 2;
    for (int i = 2; i <= m; i++) {
        cout << i << " ";
    }
    cout << n << " ";
    for (int i = m + 1; i < n; i++) {
        cout << i << " ";
    }
    cout << 1 << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}