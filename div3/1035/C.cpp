#include<bits/stdc++.h>
#define int long long
using namespace std;

int bit_length(int x) {
    return 64 - __builtin_clzll(x);
}

void solve() {
    int k, n, l, r; cin >> n >> l >> r >> k; 
    if (n & 1) {
        cout << l << "\n";
    } else {
        if (n == 2 || bit_length(l) == bit_length(r)) cout << -1 << "\n";
        else {
            if (n - k <= 1) {
                cout << (1LL << bit_length(l)) << "\n";
            } else {
                cout << l << "\n";
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}