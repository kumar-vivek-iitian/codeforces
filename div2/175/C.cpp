#include <bits/stdc++.h>
#define int long long
using namespace std;

bool canIPaint(vector<int> &P, string &s, int penalty, int k) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'R' || P[i] <= penalty) continue;
        // Greater than penalty and it's B
        k--;
        if (k < 0) return false;
        i += 1;
        while(i < s.size()) {
            if (s[i] == 'B' || P[i] <= penalty) i++;
            else {
                break;
            }
        }
    }
    return true;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> P(n); 
    string s; 
    cin >> s;
    for (int &x : P) cin >> x;
    int lo = 0;
    int hi = *max_element(P.begin(), P.end());
    int ans = 0;
    while(lo < hi) {
        int mid = (lo + hi) / 2;
        if (canIPaint(P, s, mid, k)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
