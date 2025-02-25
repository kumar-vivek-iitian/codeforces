#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> V;
    if ( n == 1 ) {
        cout << x << "\n";
        return;
    }
    int y = 0;
    if ( x % 2 == 0 ) {
        for (int i=0; i<n-1; i++) cout << 0 << " ";
        cout << x << "\n";
    } else {
        vector<int> V;
        int maxP = 0;
        for (int i=0; i<31; i++) {
            if ((1 << i) & x) {
                maxP = maxP | (1 << i);
            } else {
                break;
            }
        }
        int j = 0;
        vector<int> oh;
        for (int i=0; i<=maxP && i<n-1; i++, j++) oh.push_back(i);
        int c = j - 1;
        if (j < n - 1) for (int i = j; i < n - 1; i++) oh.push_back(j - 1);
        int nah = oh.back();
        int y = 0;
        for (auto zz : oh) {
            y = y | zz;
            cout << zz << " ";
        }
        if ((nah + 1 | y)  == x) cout << nah + 1 << "\n";
        else cout << x << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}