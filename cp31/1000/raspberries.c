#include<stdio.h>

const int N = 2e5 + 5;
int arr[N];

int min(int a, int b) {
    return a > b ? b : a;
}

void solve() {
    int n, k; scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    int ans = 1e5;
    if (k == 4) {
        int even = 0, odd = 0;
        for (int i=0; i<n; i++) {
            if (arr[i] & 1) odd++;
            else even++;
            if (arr[i] % k == 0) {
                ans = 0;
                break;
            } else {
                ans = min(ans, k - (arr[i] % k));
            }
        }
        if (even >= 2) ans = min(ans, 0);
        if (odd >= 1 && even == 1) ans = min(ans, 1);
        if (odd >= 2) ans = min(ans, 2);
    }
    else {
        for (int i=0; i<n; i++) {
            if (arr[i] % k == 0) {
                ans = 0;
                break;
            } else {
                ans = min(ans, k - (arr[i] % k));
            }
        }
    }
    printf("%d\n", ans);
}

int main() {
    int t; scanf("%d", &t);
    while(t--) solve();
}