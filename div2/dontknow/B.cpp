#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    vector<int> N(n);
    for (auto &x : N) cin >> x;
    for (auto &x : N) mp[x]++;
    int l = 0, r = 0;
    int maxi = 0;
    for (int i=0; i<n; i++) {
        if (mp[N[i]] == 1) {
            int von = 1;
            int j = i + 1;
            while(mp[N[j]]==1 && j < n) von++, j++;
            if (von > maxi) {
                l = i;
                r = j;
                maxi = von;
            }
            i = j;
        }
    }
    if (maxi == 0) cout << 0 << "\n";
    else cout << l + 1<< " " << r << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}