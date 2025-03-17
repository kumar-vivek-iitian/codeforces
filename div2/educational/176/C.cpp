#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> arr(m);
    for (int i=0; i<m; i++) cin >> arr[i];

    vector<int> ans(n + 1);

    for (int i=0; i<m; i++) {
        ans[arr[i]]++;
    }

    for (int i=ans.size() - 2; i >= 0; i--) {
        ans[i] += ans[i + 1];
    }

    long long answer = 0;
    for (int i = 1; i <= n - 1; i++) {
        answer += ans[i] * ans[n-i] - min(ans[i], ans[n-i]);
    }
    cout << answer << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}