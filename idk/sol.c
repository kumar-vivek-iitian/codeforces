#include<stdio.h>
#include<string.h>

int isValid(int i, int j, int n, int m) {
    if (i >= 0 && i < n && j >=0 && j < m) return 1;
    return 0;
}

int main() {
    int t; 
    scanf("%d", &t);
    while(t--) {
        int n, m; scanf("%d %d", &n, &m);
        int a[n][m];
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) scanf("%d", &a[i][j]);
        }
        int an[n*m+1];
        memset(an, 0, sizeof(an));
        int dx[] = {1, 0, 0, -1};
        int dy[] = {0, -1, 1, 0};
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                for (int k=0; k<4; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (isValid(x, y, n, m) && (a[i][j] == a[x][y])) an[a[i][j]] = 2;
                    if (isValid(x, y, n, m) && !an[a[i][j]] && (a[i][j] != a[x][y])) an[a[i][j]] = 1;
                }
            }
        }
        int ans = 0;
        int max = -1;
        for (int i=1; i<= n*m; i++) {
            ans += an[i];
            max = max > an[i] ? max : an[i];
        }
        printf("%d\n", ans-max);
    }
}
