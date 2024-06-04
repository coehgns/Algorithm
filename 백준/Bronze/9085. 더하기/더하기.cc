#include <iostream>
using namespace std;

int main() {
    int t, n, input;
    cin >> t;

    int sum = 0;
    while(t--) {
        cin >> n;
        sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> input;
            sum += input;
        }
        cout << sum << "\n";
    }

    return 0;
}