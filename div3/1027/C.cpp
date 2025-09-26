#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int ans = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n - 1 && arr[i] + 1 >= arr[j + 1]) j++;
        ans++;
        i = j;
        i++;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}