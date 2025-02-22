#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int idx = s.rfind('0');
    int ans = 0; 
    while(idx > -1) {
        if (s[idx] == '1') {
            ans+=2;
            while(idx > - 1 && s[idx] != '0') idx--;
        }
        idx--;
    }
    cout << (s.back() == '1' ? ans + 1 : ans) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}