#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int t;
        for (int i=0; i<n; i++) cin >> t;
        if (n&1) printf("4\n1 %d\n1 %d\n%d %d\n%d %d\n", n, n-1, n - 1, n, n - 1, n);
        else printf("2\n1 %d\n1 %d\n", n, n);
    }
}
