#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s, t; cin >> s;
    int zero = count(s.begin(), s.end(), '0');
    int one = count(s.begin(), s.end(), '1');
    for (char x : s) {
        if (x == '0') {
            if (one == 0) break;
            one--;
        } else {
            if (zero == 0) break;
            zero--;
        }
    }
    cout << s.size() - (s.size() - one - zero) << "\n";
}

int32_t main() {
    int t; cin >> t;
    while(t--) solve();
}
