#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b;
    if(sum == c) cout << "correct!";
    else cout << "wrong!";
    return 0;
}