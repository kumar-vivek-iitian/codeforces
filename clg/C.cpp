#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> A(n), P(n), feasible;
    for (int &x : A) cin >> x;
    P[0] = (A[0] & 1) ? -1 : 1;
    for (int i=1; i<n; i++) {
        if (A[i] & 1) P[i] = -1 + P[i-1];
        else P[i] = P[i-1] + 1;
        if (P[i] == 0 && i < n -1) feasible.push_back(abs(A[i] - A[i+1]));
    }
    sort(feasible.begin(), feasible.end());
    int cnt = 0, y = 0;

    for (int &x : feasible) {
        y += x; 
        if (y > k) break;
        cnt++;
    }
    cout << cnt << "\n";
}