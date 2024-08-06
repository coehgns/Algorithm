#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int wakeup;
    cin >> wakeup;
    if(20 <= n && n <= 23) {
        cout << wakeup + 24 - n;
    }   
    else {
        cout << wakeup - n;
    }

    return 0;
}