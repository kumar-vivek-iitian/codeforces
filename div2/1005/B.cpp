#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n+1);
    map<int, int> M;
    for (int i=1; i<=n; i++) cin >> arr[i];
    for (int i=1; i<=n; i++) M[arr[i]]++;
    int l = 0, r = 0;
    for (int i=1; i<=n; i++) {
        if (M[arr[i]] == 1) {
            int tl = i, tr = i;
            while(i <= n && M[arr[i]] == 1) i++;
            tr = i - 1;
            if ((tr - tl  > r - l) || l == 0) {
                l = tl;
                r = tr;
            }
        }
    }
    if (l == 0) cout << l << "\n";
    else cout << l << " " << r << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}