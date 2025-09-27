#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans;
        for (ans = 1; ans < 100; ans++) {
            if (n % ans != 0) break;
        }
        cout << ans - 1 << "\n";
    }
}
