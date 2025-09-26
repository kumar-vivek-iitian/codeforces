#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    int px, py, qx, qy; cin >> px >> py >> qx >> qy;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    int maxa = *max_element(arr.begin(), arr.end());
    int min_dist = max(0LL, 2 * maxa - sum);
    int dist = (px - qx) * (px - qx) + (py - qy) * (py - qy);
    if (dist >= min_dist * min_dist && dist <= sum * sum) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}