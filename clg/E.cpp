#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> V(n);
    vector<int> ops;
    for (auto &x : V) {
        int t;
        cin >> t;
        V.push_back(t % n);
    }

    for (int i=n-1; i>=0; i--) {
        if (V[i] != i) {
            V[i] = V[i] + ;
        }
    }
}