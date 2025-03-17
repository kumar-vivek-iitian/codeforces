#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int arr[255] = {0};
    long long ans = 0;
    for (int i=0; i<n; i++) {
        if (!arr[s[i]]) {
            ans += (n - i);
            arr[s[i]] = 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}