#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> V(n); 
    for (int i=0; i<n; i++) cin >> V[i];
    int count1 = 0, pos = 0;
    for (int i=0; i<n; i++) {
        count1 = count(V[i].begin(), V[i].end(), '1');
        if (count1 > 0) {
            pos = i;
            break;
        }
    }
    if ((pos+1 < V.size()) && count(V[pos+1].begin(), V[pos+1].end(), '1') != count1) {
        cout << "TRIANGLE\n";
    } else {
        cout << "SQUARE\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}