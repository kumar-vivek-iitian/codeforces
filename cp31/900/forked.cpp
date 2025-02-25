#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    int t; cin >> t;
    while(t--) {
        int a, b; scanf("%d %d", &a, &b);
        int xk, yk; scanf("%d %d", &xk, &yk);
        int xq, yq; scanf("%d %d", &xq, &yq);
        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};
        int ans = 0;
        set<pair<int, int>> S, T;
        for (int i=0; i<8; i++) {
            S.insert({xk + dx[i], yk + dy[i]});
            T.insert({xq + dx[i], yq + dy[i]});
        }
        for (auto i : S) {
            if (T.find(i) != T.end()) ans++;
        }
        cout << ans << "\n";
    }
}
