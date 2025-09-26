#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
        int ans = INT_MIN;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i+=2) {
            ans = max(ans, abs(arr[i] - arr[i + 1]));
        }
        cout << ans << endl;
    }
}
