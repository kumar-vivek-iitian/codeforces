#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        int n; cin >> n;
        vector<int> cnt(n + 1);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cnt[x]++;
        }
        vector<int> diff(n + 2);
        for (int i = 0; i <= n; i++) {
            if (cnt[i] <= n - i) {
                diff[cnt[i]]++;
                diff[n - i + 1]--;
            }
            if (!cnt[i]) break;
        }
        for (int i = 0, sum = 0 ; i <= n; i++) {
            sum += diff[i];
            cout << sum << " \n"[i == n];
        }
    }
}