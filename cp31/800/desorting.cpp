#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n); for (int i=0; i<n; i++) cin >> a[i];
        bool sorted = true;
        for (int i=1; i<n && sorted; i++) {
            if (a[i-1] > a[i]) sorted = false;
        }
        if (!sorted) {
            cout << 0 << "\n";
            continue;
        }
        int r = 1;
        int mini = a[1] - a[0];
        for (int i=1; i<n && mini != 0; i++) {
            if ((a[i] - a[i-1]) < mini) {
                mini = a[i] - a[i-1];
                r = i;
            }
        }
        cout << (a[r] - a[r-1]) / 2 + 1 << "\n";
    }
}
