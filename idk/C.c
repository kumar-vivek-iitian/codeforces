#include <stdio.h>
#include <stdint.h>
#define N 200005
#define int long long

const int M = 998244353;
int a[N];
int dp[N];

int power(int a, int b)
{
    if (a < 2)
        return a;
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % M;
        b >>= 1;
        a = (a * a) % M;
    }
    return ans;
}

int32_t main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        dp[0] = (a[0] == 2);

        for (int i = 1; i < n; i++)
            dp[i] = dp[i - 1] + (a[i] == 2);

        int ans = 0;

        int sum = 0;
        int cnt = 0;
        for (int i=0; i<n; i++) {
            if (a[i] == 3) {
                cnt++;
                sum = (sum + power(2, dp[i])) % M;
            }
        }

        for (int i=0; i<n; i++) {
            if (a[i] == 1) {
                ans = (ans + sum*power(power(2, dp[i]), M-2) % M - cnt + M) % M;
            }
            if (a[i] == 3) {
                cnt--;
                sum = (sum - power(2, dp[i]) + M) % M;
            }
        }

        printf("%d\n", ans);
    }
}
