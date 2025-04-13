#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int two = 2;
    int zero = 3;
    int one = 1;
    int three = 1;
    int five = 1;
    bool solution = false;
    int i = 1;
    int ans = 0;
    for (; i<=n; i++) {
        int t; cin >> t;
        if (t == 1) one--;
        if (t == 2) two--;
        if (t == 3) three--;
        if (t == 5) five--;
        if (t == 0) zero--;
        if (one <= 0 && two <= 0 && three <= 0 && zero <= 0 && five <= 0 && !ans) {
            solution = true;
            ans = i;
        }
    }
    if (solution) cout << ans << "\n";
    else
    cout << 0 << "\n";

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}