#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b) {
        if (a == b + 1 && (a & 1)) cout << y << "\n";
        else cout << -1 << "\n";
    } else {
        int cost = 0;
        while (a != b) {
            if (a & 1) cost += x;
            else cost += min(x, y);
            a++;
        }
        cout << cost << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}