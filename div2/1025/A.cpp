#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int mini = *min_element(arr.begin(), arr.end());
    int maxa = *max_element(arr.begin(), arr.end());
    if (mini == maxa) {
        cout << "YES\n";
        return;
    }
    for (int i=0; i<n-1; i++) {
        if (arr[i] == arr[i + 1] && arr[i] == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}