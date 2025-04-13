#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e9 + 1;

int dx[] = {0, 0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0, 0,1,-1,1,-1};
int distance(set<pair<int, int>> &S, int x0, int y0, int x1, int y1) {
    queue<pair<int, int>> q;
    map<pair<int, int>, int> dist;
    set<pair<int, int>> vis;
    q.push({x0, y0});
    vis.insert({x0,y0});
    dist[{x0,y0}] = 0;
    dist[{x1,y1}] = INT_MAX;
    while(!q.empty()) {
        auto t = q.front();
        int x = t.first;
        int y = t.second;
        q.pop();
        int nx, ny;
        for (int i=0; i<8; i++) {
            nx = x + dx[i];
            ny = y + dy[i];
            if (vis.find({nx,ny}) != vis.end()) continue;
            if (S.find({nx, ny}) != S.end()) {
                q.push({nx, ny});
                vis.insert({nx, ny});
                dist[{nx, ny}] = dist[{x,y}] + 1; 
            }
        }
    }
    if (dist[{x1, y1}] == INT_MAX) return -1;
    else return dist[{x1,y1}];
}

void solve() {
    int x0,y0,x1,y1; cin >> x0 >> y0 >> x1 >> y1;
    int n; cin >> n;
    set<pair<int,int>> Set;
    for (int i=0; i<n; i++) {
        int r, a, b; cin >> r >> a >> b;
        for (int j=a; j<=b; j++) {
            Set.insert({r, j});
        }
    }
    cout << distance(Set, x0, y0, x1, y1) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}