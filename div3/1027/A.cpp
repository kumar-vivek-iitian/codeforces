#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int a = stoi(s);
    int b = sqrt(a);
    if (b * b == a) {
        cout << 0 << " " << b << "\n";
    } else {
        cout << -1 << "\n";
    }
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}