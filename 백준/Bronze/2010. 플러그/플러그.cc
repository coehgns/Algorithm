#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int input;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> input;
        sum += input;
    }

    cout << sum - n + 1;

    return 0;
}