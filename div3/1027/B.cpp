#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }
    int pairs = cnt0 / 2 + cnt1 / 2;
    if (pairs == k) {
        cout << "YES\n";
        return;
    } else if (pairs < k) {
        cout << "NO\n";
        return;
    } 
    if (cnt0 > cnt1) swap(cnt0, cnt1);
    int pairsfromexcess = (cnt1 - cnt0) / 2;
    pairsfromexcess = min(k, pairsfromexcess);
    cnt1 -= pairsfromexcess * 2;
    k -= pairsfromexcess;
    if (k % 2 == 0 && cnt0 == cnt1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}