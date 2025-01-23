#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

void solve() {
    int n; cin >> n; 
    vi M(n), N(n);
    for(auto &x : M) cin >> x;
    for(auto &x : N) cin >> x;
    int needChanges = 0;
    int pos = -1;
    for(int i=0; i<n; i++) {
        if (M[i] < N[i]) {
            for(int j=i+1; j<n; j++) {
                if ((M[j] - N[j]) < (N[i] - M[i])) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
