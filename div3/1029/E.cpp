#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> A(n), B(n);
    for (int &x : A) cin >> x;
    for (int &x : B) cin >> x;
    int ans = 0;
    if (A.back() == B.back()) {
        cout << n << "\n";
        return;
    }
    set<int> S;
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] == A[i + 1] || B[i] == B[i + 1] || A[i] == B[i] || S.find(A[i]) != S.end() || S.find(B[i]) != S.end()) {
            ans = i + 1;
            break;
        }
        S.insert(B[i + 1]);
        S.insert(A[i + 1]);
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}