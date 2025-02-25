#include<bits/stdc++.h>
#define int long long
using namespace std;

int iceil(int x, int y) {
    return (x + y - 1) / y;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    for (int i=n-1; i>0; i--) {
        if (a[i-1] > a[i]) { 
            // Simple logic lagao
            // split a[i-1]
            int splits = ceil(a[i-1] * 1.0 / a[i]);
            ans += splits - 1;
            a[i-1] = a[i-1] / splits;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}
