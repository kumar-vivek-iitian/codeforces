#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    int mark = n;
    bool ans = true;
    for (int i = n; i >= 1; i -= 2) {
        arr[i] = mark--;
    }
    for (int i = n - 1; i >= 1; i -= 2) {
        arr[i] = mark--;
        if (arr[i] == i) {
            ans = false;
            break;
        }
    }
    if (ans) {
        for (int i = 1; i <= n; i++) cout << arr[i] << " ";
    } else {
        cout << -1;
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}