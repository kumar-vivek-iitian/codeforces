#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {

    int n, l, r; cin >> n >> l >> r;
    vector<int> V(n + 1);
    for(int i=1 ; i <= n; i++) cin >> V[i];
    sort(V.begin()+1, V.begin()+l);
    sort(V.begin()+l, V.begin()+r+1, greater<int>());
    sort(V.begin()+r+1, V.end());

    vector<int> copy = V;

    int initialSum = 0;
    for(int i=l; i<=r; i++) initialSum += V[i];

    // left part
    for (int i=1, j=l; i<l && j <= n ;i++) {
        if (V[j] > V[i])
            swap(V[j++], V[i]); 
        else 
            break;
    }
    

    int sum = 0;
    for (int i=l; i<=r; i++) sum += V[i];

    // right part
    for (int i=r+1, j=l; i<=n; i++) {
        if (copy[j] > copy[i]) 
            swap(copy[j++], copy[i]); 
        else 
            break;
    }

    int sum_2 = 0;
    for (int i=l; i<=r;i++) sum_2 += copy[i];

    sum = min(sum, sum_2);
    sum = min(initialSum, sum);
    cout << sum << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
