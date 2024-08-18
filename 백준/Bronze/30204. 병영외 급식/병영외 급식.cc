#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        cnt += input;
    }

    if(cnt % x == 0) cout << 1;
    else cout << 0;

    return 0;
}