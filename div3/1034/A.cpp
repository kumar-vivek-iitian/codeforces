#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 4 == 0) cnt_0++;
        else if (i % 4 == 1) cnt_1++;
        else if (i % 4 == 2) cnt_2++;
        else cnt_3++;
    }
    int pairs = min(cnt_0, cnt_3) + min(cnt_1, cnt_2);
    if (2 * pairs < n) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}