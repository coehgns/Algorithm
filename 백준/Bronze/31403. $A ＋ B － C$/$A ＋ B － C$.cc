#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) - c << "\n";
    string str = to_string(a) + to_string(b);

    int i = stoi(str);
    cout << i - c;

    return 0;
}