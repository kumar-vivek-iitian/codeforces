#include<bits/stdc++.h>
using namespace std;

int findMin(int x, int n, int m) {
    while (n != 0 && m != 0) {
        if (x & 1) {
            n--;
            x = x / 2;
        } else {
            m--;
            x = x / 2;
        }
    }
    while (m--) {
        x = (x + 1) / 2;
    }
    while (n--) {
        x = x / 2;
    }
    return x;
}

int findMax(int x, int n, int m) {
    while (n != 0 && m != 0) {
        if (x & 1) {
            m--;
            x = (x + 1) / 2;
        } else {
            n--;
            x = x / 2;
        }
    }
    while (n--) {
        x = x / 2;
    }
    while (m--) {
        x = (x + 1) / 2;
    }
    return x;
}

void solve() {
    int x, n, m; cin >> x >> n >> m;
    n = min(n, 31);
    m = min(m, 31);
    int min = findMin(x, n, m);
    int max = findMax(x, n, m);
    cout << min << " " << max << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}