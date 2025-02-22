#include<stdio.h>

void merge(int *arr, int l, int m, int r) {
    int a = m - l + 1;
    int b = r - m;
    int *A = (int*)malloc(sizeof(int)*a);
    int *B = (int*)malloc(sizeof(int)*b);
    for (int i=0; i<a; i++) A[i] = arr[l + i];
    for (int j=0; j<b; j++) B[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while(i < a && j < b) {
        if (A[i] < B[j]) arr[k] = A[i++];
        else arr[k] = B[j++];
        k++;
    }
    while(i < a) arr[k++] = A[i++];
    while(j < b) arr[k++] = B[j++];
}

void mergesort(int *arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n, x, y; scanf("%d %d %d", &n, &x, &y);
        int arr[n];
        for (int i=0; i<n; i++) scanf("%d", &arr[i]);
        mergesort(arr, 0, n);
        for (int i=n-1; i>-1; i--) {
            int j=0;

        }
    }
}
