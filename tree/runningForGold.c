#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        int arr[n][5];

        for (int i=0; i<n; i++) scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);

        int superior = 0;
        for (int i=1; i<n; i++) {
            int score = 0;
            for (int k=0; k<5; k++) if (arr[superior][k] < arr[i][k]) score++;
            if (score < 3) superior = i;
        }

        int broishim = 1;
        for (int i=0; i<n; i++) {
            if (i == superior) continue;
            int score = 0;  
            for (int k=0; k < 5; k++) {
                if (arr[superior][k] < arr[i][k]) score++;
            }
            if (score < 3) {
                broishim = 0;
                break;
            }
        }
        if (broishim) printf("%d\n", superior + 1);
        else printf("-1\n");
    }
}
