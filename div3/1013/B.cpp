#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> arr(n); for (int &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    int ans = 0;
    int i = arr.size() - 1;
    while (i >= 0) {
        if (arr[i] >= x) {
            ans++;
            i--;
        } else {
            break;
        }
    }
    int team_size = 1;
    while (i >= 0) { 
        if (team_size * arr[i] >= x) {
            ans++;
            team_size = 1;
        } else {
            team_size++;
        }
        i--;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}