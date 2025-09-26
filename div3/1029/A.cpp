#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int firstIdx = -1;
    int secondIdx = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] == 1) {
            firstIdx = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 1) {
            secondIdx = i;
            break;
        }
    }
    if (firstIdx == -1) {
        cout << "YES\n";
        return;
    }
    int cnt = secondIdx - firstIdx + 1;
    if (cnt <= x) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}