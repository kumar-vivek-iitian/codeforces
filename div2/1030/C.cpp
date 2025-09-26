#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; int k; cin >> n >> k;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    vector<int> extraPossible(63, 0);
    int ans = 0;
    for (int i=0; i<63; i++) {
        for (int x : arr) {
            if (x & (1LL << i)) ans++;
            else extraPossible[i]++;
        }
    }
    for (int i=0; i<63 && k; i++) {
        int opsneeded = (1LL << i); 
        int inc = min(k / opsneeded, extraPossible[i]);
        k -= opsneeded * inc;
        ans += inc;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}