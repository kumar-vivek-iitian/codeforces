#include<stdio.h>

typedef struct pair {
    int l, r;
} pair;

int32_t main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
    }
    pair p[n];
    int mark = -1;
    for (int i=0; i<n; i++) {
        scanf("%d %d", p[i].l, p[i].r);
        if (p[i].l == p[i].r) mark = i;
    }

}
