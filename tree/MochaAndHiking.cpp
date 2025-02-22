#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> T(n+1);
    for (int i=1; i<=n; i++) {
        cin >> T[i];
    }
    if (T[1] == 1) {
        cout << n + 1 << " ";
        for (int i=1; i<=n; i++) cout << i << " ";
    }

    else if (T[n] == 0) {
        for (int i=1; i<=n; i++) {
            cout << i << " ";
        }
        cout << n + 1;
    }

    else {
        bool possible = 0;
        int i;
        for (i=2; i<=n; i++) {
            if (T[i-1] == 0 && T[i] == 1) {
                possible = 1;
                break;
            }
        }

        if (possible) {
            for (int j=1; j<i; j++) cout << j << " ";
            cout << n + 1 << " ";
            for (int j=i; j<=n; j++) cout << j << " ";
        } else {
            cout << -1;
        }
    }
    cout << "\n";
}

int32_t main() {
    int t; cin >> t; while(t--) solve();
}