#include <bits/stdc++.h>
using namespace std;

int bu(int a, int b) {
    int sum = 0;
    if(a == 0) sum = b;
    else {
        for(int i = 1; i <= b; i++) {
            sum += bu(a - 1, i);
        }
    }

    return sum;
}

int main() {
    int n, a, b;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int result = 0;
        cin >> a >> b;
        result = bu(a, b);
        cout << result << '\n';
    }

    return 0;
}