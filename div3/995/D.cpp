#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    int ans = 0;
    int i = 0, j = n - 1;
    while(i < j) {
        int diff = sum - arr[i] - arr[j];
        if (diff < x) {
            j--;
        } else if (diff > y) {
            i++;
        } else {
            ans++;
            // for the particular i get all the j.
            {
                int a = i, b = j;
                b--;
                diff = sum - arr[a] - arr[b];
                while(a < b) {
                    diff = sum - arr[a] - arr[b];
                    if (diff >= x && diff <= y) {
                        ans++;
                    } else {
                        break;
                    }
                    b--;
                }
            }
            // for the particular j get all the i.
            {
                int a = i, b = j;
                a++;
                diff = sum - arr[a] - arr[b];
                while(a < b) {
                    diff = sum - arr[a] - arr[b];
                    if (diff >= x && diff <= y) {
                        ans++;
                    } else {
                        break;
                    }
                    a++;
                }
            }
            i++;
            j--;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    int t ; cin >> t;
    while(t--) solve();
}
