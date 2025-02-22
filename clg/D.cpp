#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> E, O;
    int n; cin >> n;
    int t;
    for (int i=0; i<n; i++) {
        cin >> t;
        if (t&1) O.push_back(t);
        else E.push_back(t);
    }
    sort(E.begin(), E.end());
    sort(O.begin(), O.end());
    int ans = 0;
    if (E.size() > O.size()) {
        int t = E.size() - O.size() - 1;
        for (int i=0; i<t; i++) ans+=E[i];
    } else {
        int t = O.size() - E.size() - 1;
        for (int i=0; i<t; i++) ans+=O[i];
    }
    cout << ans << "\n";
}