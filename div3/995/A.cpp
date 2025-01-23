#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];

    int ans = 0;
    for (int i=0; i<n; i++) {
        int check = i < (n - 1) ? b[i + 1] : 0;
        if (check < a[i]) ans += a[i] - check;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}
