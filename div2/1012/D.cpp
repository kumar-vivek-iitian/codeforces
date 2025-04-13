#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> sieve(1e5 + 1, 1);
vector<int> primes;

void fillSieve() {
    sieve[1] = sieve[0] = 0;
    for (int i = 2; i <= 1e5; i++) {
        if (sieve[i]) {
            for (int k = i * i ; k <= 1e5; k += i) {
                sieve[k] = 0;
            }
        }
    }
    for (int i = 2; i <= 1e5; i++) {
        if (sieve[i]) primes.push_back(i);
    }
}

void solve() {
    int n; cin >> n;
    vector<int> C(n + 1);
    for (int i = 1 ; i <= n; i++) {
        C[i] = primes[i - 1];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += C[i];
        C[i] = sum / i ;
    }
    cout << 2 << " " << 1 << " "; 
    for (int i = 3; i <= n; i++) cout << C[i] << " ";
    cout << "\n";
}

int32_t main() {
    fillSieve();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
}