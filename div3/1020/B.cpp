#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n, -1);

    arr[n - 1] = x;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) continue;

        if (ans == x) ans++;   

        arr[i] = ans;
        ans++;
    }

    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    if (n == x) {
        arr.back() = x - 1;
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
}
