#include <iostream>
using namespace std;

int main() {
    int input;

    int sum1 = 0;
    for(int i = 0; i < 4; i++) {
        cin >> input;
        sum1 += input;
    }

    int sum2 = 0;
    for(int i =0; i < 4; i++) {
        cin >> input;
        sum2 += input;
    }

    sum1 > sum2 ? cout << sum1 : cout << sum2;

    return 0;
}