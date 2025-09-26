#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k; cin >> n >> j >> k;
    j--;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int element = arr[j];
    int bigger = 0;
    int smaller = 0;
    int same = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > element) bigger++;
        else if (arr[i] < element) smaller++;
        else same++;
    }
    if (bigger) {
        int remove = bigger + smaller - 1;
        int check = remove + same - 1;
        if (n - check > k) cout << "NO\n";
        else cout << "YES\n";
    } else {
        int check = same + smaller - 1;
        if (n - check > k) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}