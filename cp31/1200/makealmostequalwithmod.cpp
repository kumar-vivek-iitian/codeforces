#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int even = 0, odd = 0;
    for (int i = 1; i < 60; i++) {
        set<int> S;
        bool check = true;
        for (int j=0; j<n; j++) {
            S.insert(arr[j] % (1LL << i));
            if (S.size() > 2) {
                check = false;
                break;
            }
        }
        if (check && S.size() == 2) {
            cout << (1LL << i) << "\n";
            break;
        }
    }
}

int32_t main() {
    int t; cin >> t;
    while(t--) solve();
}
