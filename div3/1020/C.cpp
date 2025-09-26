#include<bits/stdc++.h>
using namespace std;

bool isValid(const vector<int> &a, const vector<int> &b, int x, int k) {
    for (int i = 0; i < a.size(); ++i) {
        if (b[i] != -1) {
            if (a[i] + b[i] != x) return false;
        } else {
            int bi = x - a[i];
            if (bi < 0 || bi > k) return false;
        }
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int &ai : a) cin >> ai;
    for (int &bi : b) cin >> bi;

    int x = -1;
    bool conflict = false;

    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            int currentX = a[i] + b[i];
            if (x == -1) x = currentX;
            else if (x != currentX) {
                conflict = true;
                break;
            }
        }
    }

    if (conflict) {
        cout << "0\n";
        return;
    }

    if (x != -1) {
        cout << (isValid(a, b, x, k) ? 1 : 0) << "\n";
    } else {
        int minX = INT_MIN, maxX = INT_MAX;
        for (int i = 0; i < n; ++i) {
            minX = max(minX, a[i] + 0);
            maxX = min(maxX, a[i] + k);
        }
        int count = 0;
        int lo = minX, hi = maxX;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (isValid(a, b, mid, k)) {
                count = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << count - minX + 1 << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}
