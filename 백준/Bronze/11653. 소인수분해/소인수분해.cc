#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++) {

        if(n % i == 0) {
            cout << i << '\n';
            n /= i;
            i = 1;
        }
    }

    return 0;
}