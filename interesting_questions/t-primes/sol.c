#include<stdio.h>
#define N 100005

int s[N];
int f[N];
int cnt = 0;

void initSieve() {
    for (int i=0; i<N; i++) s[i] = 1;
    s[0] = s[1] = 0;
    for (long long int i=2; i < N; i++) {
        if (s[i]) {
            for (long long int j=i*i; j < N; j += i) {
                s[j] = 0;
            }
        }
    }
    for (int j=2; j < N; j++) {
        if (s[j]) f[cnt++] = j;
    }
}

signed main() {
    initSieve();
    int t; scanf("%d", &t);
    while(t--) {
        long long int n; scanf("%lld", &n);
        int i = 0, j = cnt - 1;
        int check = 0;
        while (i <= j && !check) {
            int mid = (i + j) / 2;
            if (f[mid] * f[mid] == n) check = 1;
            else if (f[mid] * f[mid] > n) j = mid - 1;
            else i = mid + 1;
        }
        if (check) printf("YES\n");
        else printf("NO\n");
    }
}
