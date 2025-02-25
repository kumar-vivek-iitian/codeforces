#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int x, n; cin >> x >> n;
    int ans = 0;
    if (x & 1) {
        int m = n / 4;

        ans += ( 4*m + 1 > n ? (1 + 4*(m-1) + 1) / 2 : (1 + 4*m + 1) / 2  );
        ans += (4*m ) / 2 ;
        ans += -( 4*m + 2 > n ? (1 + 4*(m-1) + 2) / 2 : (1 + 4*m + 2) / 2  );
        ans += -( 4*m + 3 > n ? (1 + 4*(m-1) + 3) / 2 : (1 + 4*m + 3) / 2  );

    } else {

    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}