#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    iota(arr.begin(), arr.end(), 0);
    for (int i = 3; i <= n; i += 2) {
        if (arr[i] == i) {
            for (int j = i + i; j <= n; j += i) {
                swap(arr[j], arr[i]);
            }
        }
    }
    for (int i = 4; i <= n; i += 2) {
        if (arr[i] == i) {
            swap(arr[i], arr[2]);
        }
    }
    for (int i = 1; i <= n; i++) cout << arr[i] << " \n"[i == n];
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}