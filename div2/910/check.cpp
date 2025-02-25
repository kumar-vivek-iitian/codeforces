#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for (int i = n - 1; i > 0; i--) {
        if (a[i - 1] > a[i]) {
            int splits = (a[i - 1] + a[i] - 1) / a[i];  // Equivalent to ceil(a[i-1] / a[i])
            ans += splits - 1;
            a[i - 1] = a[i - 1] / splits; // Reduce a[i-1] to the appropriate split value
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
}

