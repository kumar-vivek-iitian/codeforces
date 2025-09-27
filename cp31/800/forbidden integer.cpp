#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k, x;
        scanf("%d%d%d", &n, &k, &x);
        if (x == 1) {
            if (k == 1) {
                printf("NO\n");
            } else if (k == 2) {
                if (n % 2 == 0) {
                    printf("YES\n");
                    printf("%d\n", n / 2);
                    for (int i = 0; i < n / 2; i++) {
                        printf("2 ");
                    }
                    printf("\n");
                } else {
                    printf("NO\n");
                }
            } else {
                if (n % 2 == 0) {
                    printf("YES\n");
                    printf("%d\n", n / 2);
                    for (int i = 0; i < n / 2; i++) {
                        printf("2 ");
                    }
                    printf("\n");
                    continue;
                }
                n -= 3;
                printf("YES\n");
                printf("%d\n", 1 + n / 2);
                printf("3 ");
                for (int i = 0; i < n / 2; i++) {
                    printf("2 ");
                }
                printf("\n");
            }
        } else {
            printf("YES\n");
            printf("%d\n", n);
            for (int i = 0; i < n; i++) printf("1 ");
            printf("\n");
        }
    }
}
