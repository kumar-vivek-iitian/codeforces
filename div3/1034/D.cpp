#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt_one = 0;
    for (int i = 0 ; i < n; i++) cnt_one += (s[i] == '1');
    cout << (cnt_one <= k || n < 2 * k ? "Alice" : "Bob") << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}