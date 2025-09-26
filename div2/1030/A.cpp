#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int k; cin >> k;
    if (k == 0) {
        for (int i=0; i<n; i++) cout << 0;    
        cout << "\n";
    } else if (k == n) {
        for (int i=0; i<n; i++) cout << 1;
        cout << "\n";
    }
    else {
        vector<int> arr(n, 0);
        arr.front() = 1;
        k--;
        int i = 2;
        while(k--) {
            arr[n - i] = 1;
            i++;
        }
        for (int x : arr) cout << x;
        cout << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}