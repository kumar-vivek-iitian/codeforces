#include<bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

pair<int, int> bfs(vector<vector<pair<int,int>>> &adj, int n) {
    vector<int> visited(n + 1, 0);
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {INT_MAX, INT_MIN}});
    visited[0] = true;
    int mini = INT_MAX;
    int maxa = INT_MIN;
    while (!q.empty()) {
        auto top = q.front().first; q.pop();
        for (auto node : adj[top]) {
            q.push({node.first, {min(q.front().second.first, node.second), max(q.front().second.second, node.first)}});
            visited[node.first] = true;
        }
    }
}

void solve() {
    int n,m; cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n + 1);
    for(int i=0; i<m; i++) {
        int u,v,w; cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    auto [mini, maxa]=  dijkstra(1, n, adj);
    cout << mini + maxa << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
