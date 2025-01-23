#include <bits/stdc++.h>
using namespace std;

vector<int> SUM(2e5+1);

void init() {
    for (int i=1; i<=2e5; i++) {
        int sum = 0;
        int j = i;
        while(j) {
            sum += j % 10;
            j /= 10;
        }
        SUM[i] = sum + SUM[i-1];
    }
}

void solve() {
    int n; cin >> n;
    cout << SUM[n] << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    init();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}