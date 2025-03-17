#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int odd = 0, even = 0;
    for (int i=0; i<n; i++) {
        int temp; cin >> temp;
        if (temp&1) odd++;
        else even++;
    }
    if (odd&1) cout << "NO\n";
    else cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}