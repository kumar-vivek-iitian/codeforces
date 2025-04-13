#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> B(n*(n-1)/2);
    for (int &b : B) cin >> b;
    map<int, int> M;
    for (int &b : B) M[b]++;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}