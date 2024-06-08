#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if(a > b) {
        long long tmp = a; 
        a = b;
        b = tmp;
    }

    if(a == b) cout << 0;
    else {
        cout << b - a - 1 << "\n";
        for(long long i = a + 1; i < b; i++) {
            cout << i << " ";
        }
    }

    return 0;
}