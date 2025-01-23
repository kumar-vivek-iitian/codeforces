#include<bits/stdc++.h>
using namespace std;

int checkThis(vector<int> V, int a3) {
    V[2] = a3;
    int cnt = 0;
    for(int i=2; i<V.size(); i++) {
        if ((V[i-1] + V[i-2]) == V[i]) cnt++;
    }
    return cnt;
}

void solve() {
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    vector<int> V = {a1, a2, 0, a4, a5};
    int ans = 0;
    ans = max(checkThis(V, a1+a2), ans);
    ans = max(checkThis(V, a4 - a2), ans);
    ans = max(checkThis(V, a5 - a4), ans);
    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
