#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> arr(n + 1);
    for (int i=1; i<=n; i++) cin >> arr[i];
    vector<long long> pre(n + 1);
    vector<long long> suff(n + 2);
    pre[0] = 0;
    for (int i=1; i<=n; i++) {
        if (arr[i] > 0) {
            pre[i] = pre[i - 1] + arr[i];
        } else {
            pre[i] = pre[i - 1];
        }
    }
    suff[n + 1] = 0;
    for (int i = n; i > 0; i--) {
        if (arr[i] < 0) {
            suff[i] = suff[i + 1] - arr[i];
        } else {
            suff[i] = suff[i + 1];
        }
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, pre[i] + suff[i]);
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}