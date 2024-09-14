#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    for(int i = 0; i < 8; i++) {
        cin >> input;
        if(!(input == 0 || input == 1)) {
            cout << 'F';
            return 0;
        }
        else continue;
    }

    cout << 'S';

    return 0;
}