#include<bits/stdc++.h>
using namespace std;

void solve() { 
    int n; cin >> n;
    vector<int> odd(n), even(n);
    int oddLen = 0, evenLen = 0;
    for(int i=0; i<n; i++) {
        int temp; cin >> temp;
        if (temp & 1) oddLen++;
        else evenLen++;
    }
    int ans;
    if (evenLen) ans = 1 + oddLen;
    else ans = oddLen - 1;
    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}

