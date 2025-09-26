#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    set<int> s;
    int k_count = 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
        if (val == k) {
            k_count++;
        }
    }
    int missing_count = 0;
    for (int i = 0; i < k; i++) {
        if (s.find(i) == s.end()) {
            missing_count++;
        }
    }
    cout << max(missing_count, k_count) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
