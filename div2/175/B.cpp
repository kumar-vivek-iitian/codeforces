#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, x, k; cin >> n >> x >> k;
    string s; cin >> s;
    int l = -1;
    int onzero = 0;

    for (int i=0, start=0; i<n; i++) {
        if (s[i] == 'L') start -= 1;
        else start += 1;
        if (start == 0) {
            l = i + 1;
            break;
        }
    }

    for (int i=0, j=x; i<n; i++) {
        if (s[i] == 'L') j--;
        else j++;
        if (j == 0) {
            k--;
            onzero = true;
            break;
        }
        k--;
    }
    if (!onzero) {
        cout << 0 << "\n";
        return;
    }
    int ans = 1;
    int p = l;
    if (p != -1) ans += k / p;
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}