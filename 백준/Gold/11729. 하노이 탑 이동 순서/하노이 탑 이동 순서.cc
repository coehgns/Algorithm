#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int a, int b, int c) {
    if(n == 1) cout << a << " " << c << "\n";
    else {
        hanoi(n - 1, a, c, b);
        cout << a << " " << c << "\n";
        hanoi(n - 1, b, a, c);
    }
}

int main() {
    int n, cnt = 1;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cnt *= 2;
    }
    cout << cnt - 1 << "\n";
    hanoi(n, 1, 2, 3);

    return 0;
}