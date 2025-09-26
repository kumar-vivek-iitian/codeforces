#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
        int num1 = -1, num2 = -1;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n && num1 == -1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] % arr[j] != 0) {
                    num1 = arr[i], num2 = arr[j];
                    break;
                }
            }
        }
        if (num1 == -1) {
            cout << -1;
        } else {
            vector<int> a, b;
            for (int i = 0; i < n; i++) {
                if (arr[i] % num2 == 0) a.push_back(arr[i]);
                else b.push_back(arr[i]);
            }
            cout << b.size() << " " << a.size() << "\n";
            for (int x : b) cout << x << " ";
            cout << "\n";
            for (int x : a) cout << x << " ";
        }
        cout << "\n";
    }
}
