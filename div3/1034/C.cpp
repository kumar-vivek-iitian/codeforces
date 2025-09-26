#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    vector<int> minPrefix(n, INT_MAX);
    vector<int> maxSuffix(n, INT_MIN);
    minPrefix.front() = arr.front();
    maxSuffix.back() = arr.back();
    for (int i = 1; i < n; i++) {
        minPrefix[i] = min(minPrefix[i - 1], arr[i]);
    }
    for (int i = n - 2; i >=0 ; i--) {
        maxSuffix[i] = max(arr[i], maxSuffix[i + 1]);
    }
    string s;
    s.push_back('1');
    for (int i = 1; i < n - 1; i++) {
        int min_element_before_i = minPrefix[i - 1];
        int max_element_after_i = maxSuffix[i + 1];
        if (min_element_before_i >= arr[i] && max_element_after_i <= arr[i]) {
            s.push_back('1');
            continue;
        } else if (min_element_before_i <= arr[i] && max_element_after_i <= arr[i]) {
            s.push_back('1');
            continue;
        } else if (min_element_before_i >= arr[i] && max_element_after_i >= arr[i]) {
            s.push_back('1');
            continue;
        } else {
            s.push_back('0');
        }
    }
    s.push_back('1');
    cout << s << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}