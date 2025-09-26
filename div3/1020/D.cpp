#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 1;
int n, m;
int A[N], B[N];
int pre[N], suf[N];

void solve() {
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<m; i++) cin >> B[i];

    for (int i=0; i<m; i++) pre[i] = INT_MAX, suf[i] = INT_MAX;
    for (int i=0, cnt=0; i<n && cnt < m; i++) if (A[i] >= B[cnt]) pre[cnt++] = i;

    if (pre[m-1] != INT_MAX) {
        cout << 0 << "\n";
        return;
    }

    int ans = INT_MAX;
    for (int i=n-1, cnt=m-1; i>=0 && cnt >= 0 ; i--) if (A[i] >= B[cnt]) suf[cnt--] = i;
    for (int i=1; i<m-1; i++) if (suf[i + 1] != INT_MAX && pre[i - 1] < suf[i + 1]) ans = min(ans, B[i]);
    if (pre[m-1] == INT_MAX && pre[m - 2] != INT_MAX) ans = min(ans, B[m-1]);
    if (suf[0] == INT_MAX && suf[1] != INT_MAX) ans = min(ans, B[0]);
    cout << (ans == INT_MAX ? -1 : ans) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) {
        solve();
    }
}