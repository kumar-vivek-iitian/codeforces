#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, a, b; cin >> t;
    while(t--) {
        cin >> n >> a >> b;
        if ((a - b) & 1) {
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << "\n";
    }
}
