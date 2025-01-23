#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,a,b,c; cin >> n >> a >> b >> c;
    int sum = a + b + c;
    vector<int> N = {a, b, c};
    int ans = 3 * (n / sum);
    int total = sum * (n / sum);
    int i = 0;
    while(total < n) {
        ans++;
        total += N[i%3];
        i++;
    }
    cout << ans << "\n";
} 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}
