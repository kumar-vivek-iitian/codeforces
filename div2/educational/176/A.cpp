#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int ans = 0;
    while (n) {
        if (n & 1) {
            if (n <= k) {
                n = 0;
                ans++;
            } else {
                n -= k;
                ans++;
            }
        } else {
            if (n <= k) {
                n = 0;
                ans++;
            } else {
                ans += n / (k - 1);
                n = n % (k - 1);
            }
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}