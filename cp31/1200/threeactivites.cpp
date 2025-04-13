#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> threeMax(int n) {
    pair<int, int> first = {INT_MIN, -1}, second = {INT_MIN, -1}, third = {INT_MIN, -1};
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > first.first) {
            third = second;
            second = first;
            first = {x, i};
        } else if (x > second.first) {
            third = second;
            second = {x, i};
        } else if (x > third.first) {
            third = {x, i};
        }
    }
    vector<pair<int, int>> arr;
    arr.push_back(first);
    arr.push_back(second);
    arr.push_back(third);
    return arr;
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> A = threeMax(n), B = threeMax(n), C = threeMax(n);
    int ANS = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (A[i].second != B[j].second && B[j].second != C[k].second && C[k].second != A[i].second)
                ANS = max(ANS, A[i].first + B[j].first + C[k].first);
            }
        }
    }

    cout << ANS << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}