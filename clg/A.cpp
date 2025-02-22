#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    int n; cin >> n;
    vector<int> V(n);
    for (int &x : V) cin >> x;
    int mod = 10019;
    vector<int> O(n);
    for (int i=n-1, j=1; i >= 0; i--, j++) {
        if (V[i] % mod != mod - j) {
            int temp = ((mod - j) - (V[i] % mod) + mod) % mod;
            for (int k=0; k<=i; k++) {
                V[k] += temp;
            }
            O[j-1] = temp;
        }
    }

    int nops = 0;
    for (auto &x : O) {
        if (x != 0) nops++;
    }
    cout << nops + 1 << "\n";
    for (int i=0, j=n; i<n; i++, j--) {
        if (O[i] != 0)
            cout << 1 << " " << j << " " << O[i] << "\n";
    }
    cout << 2 << " " << n << " " << 10019 << "\n";
}