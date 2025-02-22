#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
    set<int> A;
    set<int> B;
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        int t; cin >> t;
        A.insert(t);
    }

    for (int i=0; i<n; i++) {
        int t; cin >> t;
        B.insert(t);
    }

    if (A.size() + B.size() > 3) cout << "YES\n";
    else cout << "NO\n";
    }
}
