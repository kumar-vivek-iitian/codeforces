#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int ans = accumulate(a.begin(), a.end(), 0);
    while (a.size() > 1) {
        vector<int> b(a.size()-1);
        for (int j=1; j<a.size(); j++)
            b[j-1] = a[j] - a[j-1];
        ans = max(ans, abs(a.back() - a.front()));
        a = b;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}