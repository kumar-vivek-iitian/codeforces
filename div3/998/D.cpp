#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &x : V) cin >> x;
    for (int i=0; i<n-1; i++) {
            int mini = min(V[i], V[i+1]);
            V[i] = V[i] - mini;
            V[i+1] = V[i+1] - mini;
    }
    bool isSorted = true;
    for(int i=0; i<n-1; i++) {
        if (V[i] > V[i+1]) {
            isSorted = false;
            break;
        }
    }
    if (isSorted) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
