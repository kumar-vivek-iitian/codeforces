#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr;
    int x; cin >> x;
    arr.push_back(x);
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        if (arr.back() != x) arr.push_back(x);
    }
    bool possible = false;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[i]) {
                cout << "YES\n";
                cout << 2 << "\n";
                cout << arr[i] << " " << arr[j] << "\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}