#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for (int &t : arr) cin >> t;
    int sum = 0;
    for (int &t : arr) sum += t;
    if (sum / x == n) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}