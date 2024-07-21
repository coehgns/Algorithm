#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    while(n--) {
        int input;
        cin >> input;

        sum += input; 
    }

    cout << sum;

    return 0;
}