#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    vector<int> sol;
    map<int,int> S;
    for (int i=0; i<n; i++) cin >> V[i];
    for (auto &i : V) {
        S[i]++;
        if (S[i] == 2) {
            sol.push_back(i);
            sol.push_back(i);
            S.erase(i);
            if (sol.size() == 4) {
                break;
            }
        }
    }

    if (sol.size() == 4) {
        for (auto &x : sol) cout << x << " ";
        cout << "\n";
        return;
    } 

    if (sol.size() == 0) {
        cout << "-1" << "\n";
        return;
    }

    int b = sol[0];
    
    vector<int> setA(S.size());
    int i = 0;
    for (auto [x, y] : S) setA[i++] = x;
    sol.push_back(setA[0]);
    sol.push_back(setA[1]);
    for (int i=1; i<setA.size() - 1; i++) {
        if ((setA[i+1] - setA[i]) < sol[3] - sol[2]) {
            sol[3] = setA[i+1];
            sol[2] = setA[i];
        }
    }
    if (sol[3] - sol[2] < sol[0] + sol[1]) {
        cout << sol[0] << " " << sol[1] << " " << sol[2] << " " << sol[3] << "\n";
    } else {
        cout << "-1\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}

