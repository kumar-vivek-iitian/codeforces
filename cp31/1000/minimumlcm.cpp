#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if (n % 2 == 0) cout << n/2 << " " << n/2 << "\n";
    else {
        int a = 1;
        for (int i=2; i*i<=n; i++) {
            if (n % i == 0) {
                a = max(a, n/i);
                break;
            }
        }
        cout << a << " " << n - a << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}