#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int arr[26] = {0};
    for (char x : s) arr[x - 'a']++;
    int odd = 0;
    for (int x : arr) if (x & 1) odd ++;
    if (odd > k + 1) cout << "NO\n";
    else cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}