#include<bits/stdc++.h>
using namespace std;

void solve() { 
    int n; cin >> n;
    vector<int> A(n);
    vector<int> B(n-2);
    for (auto &x : B) cin >> x;
    for (int i=2; i<B.size(); i++) {
        if (B[i-2] == 1 && B[i-1] == 0 && B[i] == 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int32_t main() {
    int t; cin >> t;
    while(t--) solve();
}