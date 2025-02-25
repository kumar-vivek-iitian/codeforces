#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 5;

set<int> sq;
bitset<N> Sieve;

void initSieve() {
    Sieve.set();
    Sieve[0] = Sieve[1] = 0;
    for (int i=2; i<N; i++) {
        if (Sieve[i]) {
            for (int j = i * i; j < N; j += i) {
                Sieve[j] = 0;
            }
        }
    }
    for (int i=2; i<N; i++) {
        if (Sieve[i]) sq.insert(i*i);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    initSieve();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if (sq.count(n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
