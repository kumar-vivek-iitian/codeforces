#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<char, int> m;
    for (int i=0; i<5; i++) {
        char c;
        cin >> c;
        m[c]++;
    }
    if (m['A'] > m['B']) cout << "A\n";
    else cout << "B\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}