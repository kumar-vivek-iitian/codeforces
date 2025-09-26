#include<bits/stdc++.h>
#define int long long
using namespace std;

bool isPrime(int x) {
	if (x == 1 || x == 0) return 0;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}

void solve() {
	string s; int k; 
	cin >> s >> k;
	string t;
	if (stoll(s) == 1) {
		for (int i=0; i<k; i++) {
			t += s;
		}
		s = t;
		int temp = stoll(s);
		if (isPrime(temp)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		return;
	}
	if (k > 1) {
		cout << "NO\n";
	} else {
		if (isPrime(stoll(s))) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
}
