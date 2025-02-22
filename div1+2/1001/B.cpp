#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        bool possible = true;
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) {
            if (a[i] <= 2 * max(n-i-1, i)) {
                possible = false;
                break;
            }
        }
        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
}