#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int a, b; cin >> a >> b;
    int ans = 0;

    while (n * m > 1) {
        // Four possible areas after a cut:
        // Keep top, keep bottom, keep left, keep right
        int top = a * m;
        int bottom = (n - a + 1) * m;
        int left = b * n;
        int right = (m - b + 1) * n;

        vector<int> areas = {top, bottom, left, right};
        int max_idx = max_element(areas.begin(), areas.end()) - areas.begin();

        // Apply the corresponding cut
        if (max_idx == 0) {
            // Keep top
            n = a;
        } else if (max_idx == 1) {
            // Keep bottom
            n = n - a + 1;
            a = 1;
        } else if (max_idx == 2) {
            // Keep left
            m = b;
        } else {
            // Keep right
            m = m - b + 1;
            b = 1;
        }
        // Fouad moves to center (to simulate "try to stay far from edge")
        a = (n + 1) / 2;
        b = (m + 1) / 2;

        ans++;
    }

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
}
