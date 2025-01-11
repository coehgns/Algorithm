#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;

    int a[100][100];
    int b[100][100];

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cin >> m >> k;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }

    int result = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            result = 0;
            for(int k = 0; k < m; k++) {
                result += a[i][k] * b[k][j];
            }
            cout << result << ' ';
        }
        cout << '\n';
    }

    return 0;
}