#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = n;

    int cnt = 0;
    do {
        n = ((n % 10) * 10) + ((n % 10) + (n / 10)) % 10;
        cnt++;
    } while(n != s);

    cout << cnt;

    return 0;
}

