#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> E[n+1];
    vector<int> S(n+1);
    for(int i=0; i<m; i++) {
        int u, v, w; cin >> u >> v >> w;
        E[u].push_back({w, v});
    }
    for(int i=1; i<n+1; i++) cin >> S[i];
    int cost = 0;
    vector<int> vis(n+1);
    priority_queue<pair<int, int>> pq;
    pq.push({0, 1});
    
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}