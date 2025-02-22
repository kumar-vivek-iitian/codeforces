#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; ++i) cin >> v[i];
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            if(v[i] < 0) sum += abs(v[i]);
        }
        int ans = 0, p = 0;
        for(int i = 0; i < n; ++i)
        {
            ans = max(ans, p + sum);
            if(v[i] > 0) p += v[i];
            else sum -= abs(v[i]);
            
        }
        ans = max(ans, p+sum);
        cout << ans << '\n';
    }
}