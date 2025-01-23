#include <bits/stdc++.h>
#define int long long
using namespace std;

int rowSum(vector<vector<int>> &arr, int row, int col) {
    int sum = 0;
    for (int j=0; j<col; j++) {
        sum += arr[row][j];
    }
    return sum;
}

int colSum(vector<vector<int>> &arr, int row, int col) {
    int sum = 0;
    for (int i=0; i<row; i++) {
        sum += arr[i][col];
    }
    return sum;
}

void solve() {

    int n, m; cin >> n >> m; string s; cin >> s;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cin >> matrix[i][j];
    }
    
    int i = 0, j = 0;
    for (auto it = s.begin(); it != s.end(); it++) {
        if (*it == 'D') {
            matrix[i][j] = -rowSum(matrix, i, m);
            i++;
        } else {
            matrix[i][j] = -colSum(matrix, n, j);
            j++;
        }
    }

    if (s[s.size()-1] == 'D') {
        matrix[i][j] = -rowSum(matrix, i, m);
        i++;
    } else {
        matrix[i][j] = -colSum(matrix, n, j);
        j++;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}