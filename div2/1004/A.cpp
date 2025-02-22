#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    set<int> A, B;
    for (int i=0; i<n; i++) {
        int t; cin >> t;
        A.insert(t);
    }
    for (int i=0; i<n; i++) {
        int t; cin >> t;
        B.insert(t);
    }
    if (A.size() + B.size() > 3) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}