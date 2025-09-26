#include<bits/stdc++.h>
using namespace std;

const int64_t INF = 1e12;
// Max Possible Sum: 2 * 10^5 * 10^6 = 2 * 10^11. So 1e12 seems good choice.

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; int64_t k; cin >> n >> k;
        string s; cin >> s;
        vector<int64_t> arr(n);
        int idx = -1; // Hold the idx of last -INF.
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            if (s[i] == '0') arr[i] = -INF, idx = i;
        }
        // Max Subarray Sum
        int64_t mx = arr[0], curr = arr[0];
        for (int i=1; i<n; i++) {
            curr = max(curr + arr[i], arr[i]);
            mx = max(curr, mx);
        }
        // If subarray sum exceeds k or it is not k with no unknown points:
        if (mx > k || (mx != k && idx == -1)) {
            cout << "No\n";
            continue;
        }

        // Make the subarray sum exactly k.
        if (idx != -1) {
            int64_t lmax = 0, rmax = 0;
            mx = 0, curr = 0;
            for (int i=idx-1; i>=0; i--) {
                curr += arr[i];
                mx = max(mx, curr);
            }
            lmax = mx; 
            mx = 0, curr = 0;
            for (int i=idx+1; i<n; i++) {
                curr += arr[i];
                mx = max(mx, curr);
            }
            rmax = mx;
            arr[idx] = k - lmax - rmax;
        }

        cout << "Yes\n";
        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}