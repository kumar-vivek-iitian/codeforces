#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int pairs = 0;
    vector<int> N(n);
    for (int i=0; i<n; i++) cin >> N[i];
    sort(N.begin(), N.end());
    int left = 0, right = N.size() - 1;
    while(left < right) {
        int sum = N[left] + N[right];
        if (sum == k) {
            pairs++;
            left++;
            right--;
        }
        else if (sum > k) right--;
        else left++;
    }
    cout << pairs << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
