#include<bits/stdc++.h>
#define int long long
using namespace std;

bool canSeat(int n, int m, int k, int x) {
    int ekrowmekitnabaithsakta = (m / (x + 1)) * (x); // thora aur baith sakta hai
    if (ekrowmekitnabaithsakta == 0) {
        ekrowmekitnabaithsakta = m % x;
    } else {
        int unocc = m % (x + 1);
        if (unocc > 0) {
            ekrowmekitnabaithsakta += unocc;
        }
    }
    return ekrowmekitnabaithsakta * n >= k;
}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    int lo = 1;
    int hi = m;
    int ans = m;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (canSeat(n, m, k, mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}