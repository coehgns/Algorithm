#include <iostream>
#include <string>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    cout << (h - 9) * 60 + m;

    return 0;
}