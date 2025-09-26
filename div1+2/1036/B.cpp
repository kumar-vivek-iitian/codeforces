#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    vector<int> check;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] % arr[i] != 0)
            check.push_back(arr[i] / __gcd(arr[i], arr[i + 1]));
    }

    if (check.empty()) {
        cout << 1 << "\n";
        return;
    }

    int result = check[0];
    for (int i = 1; i < check.size(); ++i) {
        result = lcm(result, check[i]);
    }

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
}
