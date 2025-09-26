#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s;
        cin >> s;
        int cost = 0;
        int first_b = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') {
                first_b = i;
                break;
            }
        }
        if (first_b == -1) {
            cout << 0 << "\n";
            continue;
        }
        int second_b = -1;
        for (int i = n - 1; i > first_b; i--) {
            if (s[i] == 'b') {
                second_b = i;
                break;
            }
        }
        if (second_b == -1) {
            cout << 0 << "\n";
            continue;
        }
        int total_b = count(s.begin(), s.end(), 'b');
        int c_factor = 0;
        int cost_this_way = 0;
        for (int i = first_b; i < second_b; i++) {
            c_factor += (s[i] == 'b');
            if (s[i] == 'a') cost_this_way += min(c_factor, total_b - c_factor);
        }
        int total_a = count(s.begin(), s.end(), 'a');
        int first_a = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                first_a = i;
                break;
            }
        }
        if (first_a == -1) {
            cout << 0 << "\n";
            continue;
        }
        int second_a = -1;
        for (int i = n - 1; i > first_a; i--) {
            if (s[i] == 'a') {
                second_a = i;
                break;
            }
        }
        if (second_a == -1) {
            cout << 0 << "\n";
            continue;
        }
        int cc_factor = 0;
        int cost_another_way = 0;
        for (int i = first_a; i < second_a; i++) {
            cc_factor += (s[i] == 'a');
            if (s[i] == 'b')
                cost_another_way += min(cc_factor, total_a - cc_factor);
        }
        cout << min(cost_another_way, cost_this_way) << "\n";
    }
}
