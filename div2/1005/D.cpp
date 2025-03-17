#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q; 
    vector<int> weight(n);
    for (int i=0; i<n; i++) cin >> weight[i];
    vector<int> copy(weight);
    for (int i=copy.size()-2; i>=0; i--) {
        copy[i] = copy[i] ^ copy[i+1];
    }
    for (int i=0; i<q; i++) {
        int query; cin >> query;
    }   
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}