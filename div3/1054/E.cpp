#include <bits/stdc++.h>
#define int long long
using namespace std;

int countAtMostK(int n, int k, int l, int r, const vector<int>& arr) {
    if (k < 0) return 0;

    long long total_count = 0;
    map<int, int> freq;
    int i = 0; 

    for (int j = 0; j < n; ++j) {
        freq[arr[j]]++;
        while (freq.size() > k) {
            freq[arr[i]]--;
            if (freq[arr[i]] == 0) {
                freq.erase(arr[i]);
            }
            i++;
        }
        
        
        int left_bound = max(i, j - r + 1);
        int right_bound = j - l + 1;

        if (left_bound <= right_bound) {
            total_count += (right_bound - left_bound + 1);
        }
    }

    return total_count;
}

void solve() {
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    int count_for_at_most_k = countAtMostK(n, k, l, r, arr);
    int count_for_at_most_k_minus_1 = countAtMostK(n, k - 1, l, r, arr);

    cout << count_for_at_most_k - count_for_at_most_k_minus_1 << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
