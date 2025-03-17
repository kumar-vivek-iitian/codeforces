#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> V(n);
    for (int i=0; i<n; i++) cin >> V[i];
    vector<int> C(V);
    sort(V.rbegin(), V.rend());
    int ans = 0;
    for (int i=0; i<k; i++) ans += V[i];
    ans += V[k];
    if (k == 1) {
        ans = V[0];
        if (ans == C[0] || ans == C.back()) ans = V[0] + V[1];
        else ans += max(C.front(), C.back());
    }
    // So the special case is k = 1.
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}