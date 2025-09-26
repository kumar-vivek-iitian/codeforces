#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> parent(n + 1);
    vector<int> depth(n + 1);
    function<void(int, int, int)> dfs = [&](int s, int p, int d) {
        parent[s] = p;
        depth[s] = d;
        for (int x : adj[s]) {
            if (x != p) {
                dfs(x, s, d + 1);
            }
        }
    };
    dfs(1, 0, 0);
    vector<vector<int>> dp(n + 1, vector<int>(20));
    for (int i = 1; i <= n; i++) dp[i][0] = parent[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = dp[dp[i][j - 1]][j - 1];
        }
    }
    function<int(int, int)> findLca = [&](int u, int v) -> int {
        if (depth[u] > depth[v]) swap(u, v);
        int k = depth[v] - depth[u];
        if (u == v) return u;
        for (int i = 0; i < 20; i++) if ((k >> i) & 1) v = dp[v][i];
        for (int i = 19; i >= 0; i--) if (dp[u][i] != dp[v][i]) u = dp[u][i], v = dp[v][i];
        return dp[u][0];
    };
    while (q--) {
        int u, v; cin >> u >> v;
        cout << depth[u] + depth[v] - 2 * depth[findLca(u, v)] << "\n";
    }
}