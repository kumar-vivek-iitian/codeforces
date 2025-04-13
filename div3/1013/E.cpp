#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> sieve(1e7 + 1, 1);
vector<int> primes;

void initSieve() {
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= 1e7 ; i++) {
        for (int j = i * i; j <= 1e7; j+=i) sieve[j] = 0;
    }
    for (int i = 2; i <= 1e7; i++) {
        if (sieve[i]) primes.push_back(i);
    }
}

void solve() {

    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < primes.size(); j++) {
            if (i * primes[j] <= n) {
                ans++;
            } else {
                break;
            }
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    initSieve();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}