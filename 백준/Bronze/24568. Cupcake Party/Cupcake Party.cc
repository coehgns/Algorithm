#include <iostream>
using namespace std;

int main() {
    int big, small;
    cin >> big >> small;
    if((big * 8) + (small * 3) - 28 < 0) cout << 0;
    else cout << big * 8 + small * 3 - 28;
    return 0;
}