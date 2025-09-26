#include<bits/stdc++.h>
using namespace std;

bool check(int num, int idx, int n) {
    int lo = 0, hi = 1e9;
    while (lo <= hi) {
        int a = (lo + hi) / 2;
        int b = (num - a * (n - idx + 1)) / idx;
        if (num - a * (n - idx + 1) - b * idx == 0) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    bool possible = true;
    int a = arr[1] / 1;
    for (int i=2; i<=n; i++) {
        if (arr[i] - (a * i) != 0) {
            possible = false; 
            break;
        }
    }
    a = (arr[1] / (n));
    if (!possible) {
        for (int i=1; i<=n; i++) {
            if (arr[i] - (a * (n - i + 1)) != 0) {
                possible = false;
                break;
            }
            if (i + 1 == n + 1) possible = true;
        }
    }

    int c = arr[1];
    int d = arr[2];
    int b = (2 * c - d) / (n + 1);
    a = c - n * b;
    if (a >= 0 && b >= 0) {
        for (int i=1; i<=n; i++) {
            if (arr[i] - (a * i) - (b * (n - i + 1)) != 0) break; 
            if (i + 1 == n + 1) {
                possible = true;
            }
        }
    }
    if (possible) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}