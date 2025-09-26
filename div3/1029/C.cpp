#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    vector<int> cnt(n + 1);
    for (int &x : arr) {
        cin >> x;
        cnt[x]++;
    }
    set<int> oldSet, newSet;
    int ans = 1;
    int i = 1;
    oldSet.insert(arr[0]);
    while (i < n && cnt[arr[i]] > 0) {
        while (i < n && !oldSet.empty() && cnt[arr[i]] > 0) {
            newSet.insert(arr[i]);
            oldSet.erase(arr[i]);
            i++;
        }
        if (oldSet.empty()) ans++;
        oldSet = newSet;
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}