#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    int i = n - 1;
    if (s[i] == '1') {
        while (i >= 0 && s[i] == '1') i--;
        ans++;
    }
    while(i >= 0) {
        if (s[i] == '0') i--;
        else {
            while(i >= 0 && s[i] == '1') i--;
            ans+=2;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}