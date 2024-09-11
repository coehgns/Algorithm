#include <bits/stdc++.h>
using namespace std;

int main() {
    int car;
    cin >> car;

    int cnt = 0;
    for(int i = 0; i < 5; i++) {
        int input;
        cin >> input;
        if(input == car) cnt++;
    }

    cout << cnt;

    return 0;
}