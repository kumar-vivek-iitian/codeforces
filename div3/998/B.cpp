#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n, m; cin >> n >> m;

    vector<vector<int>> V(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cin >> V[i][j];
    }
    
    for(auto &x : V) sort(x.begin(), x.end());

    vector<pair<int,int>> permutation(n);
    for(int i=0; i<n; i++)
        permutation[i] = {V[i][0], i};

    sort(permutation.begin(), permutation.end());

    bool check = true;
    int top = -1;
    for (int i=0; i<m && check; i++) {
        for (auto &x : permutation) {
            if (V[x.second][i] > top) {
                top = V[x.second][i];
            } else {
                check = false;
                break;
            }
        }
    }

    if (check) {
        for (auto &x : permutation) cout << x.second + 1 << " ";
        cout << "\n";
    } else {
        cout << "-1\n";
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}
