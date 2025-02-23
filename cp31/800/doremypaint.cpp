#include<bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int> M;
        for (int i=0; i<n; i++) {
            int t; cin >> t;
            M[t]++;
        }
        if (M.size() == 1) cout << "YES\n";
        else if (M.size() > 2) cout << "NO\n";
        else {
            auto it = M.begin();
            int m1 = it->second; it++;
            int m2 = it->second;
            if (m1 == m2 || m1 == m2 + 1 || m2 == m1 + 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

