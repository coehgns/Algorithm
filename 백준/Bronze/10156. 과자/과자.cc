#include <iostream>
using namespace std;

int main() {
    int k, n, m;
    cin >> k >> n >> m;
    if(k*n < m) cout << 0;
    else cout << k * n - m;

    return 0;
}