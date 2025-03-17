#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> P(n), R(n);
    for (int &i : P) cin >> i;
    for (int &i : R) cin >> i;

    map<int, int> maxY;
    for (int i=0; i<n; i++) {
        for (int j=P[i]-R[i]; j<=P[i]+R[i]; j++) {
            maxY[j] = max(maxY[j], (int)floor(sqrt((R[i]*R[i] - ((j-P[i])*(j-P[i]))))));
        }
    }
    long long ans = 0;
    for (auto [_, y] : maxY) {
        ans += 2 * y + 1;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}