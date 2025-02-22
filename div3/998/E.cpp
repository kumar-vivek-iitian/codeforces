#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m1, m2; cin >> n >> m1 >> m2;    
    vector<pair<int, int>> g1(m1, pair<int,int>()), g2(m2, pair<int, int>());
    for (int i=0; i<m1; i++) {
        int u,v; cin >> u >> v;
        g1.push_back({u,v});
    }
    for (int i=0; i<m2; i++) {
        int u,v; cin >> u >> v;
        g1.push_back({u,v});
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}