#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
        int cnt_zero = count(arr.begin(), arr.end(), 0);
        int cnt_negatives = 0;
        for (int x : arr) cnt_negatives += (x < 0);
        int ans = 0;
        if (cnt_negatives % 2 == 0) {
            ans = cnt_zero;
        } else {
            int mini = INT_MAX;
            for (int x : arr) {
                if (x < 0)
                mini = min(x * -1, mini);
            }
            ans = cnt_zero + mini + 1;
        }
        cout << ans << endl;
    }
}
