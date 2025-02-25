#include<stdio.h>
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n, k; scanf("%d %d", &n, &k);
        int a[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        if (k == 1) {
            int check = 0;
            for (int i=1; i<n; i++) {
                if (a[i-1] <= a[i]) continue;
                check = 1;
                break;
            }
            if (check) printf("NO\n");
            else printf("YES\n");
        }
        else printf("YES\n");
    }
}
