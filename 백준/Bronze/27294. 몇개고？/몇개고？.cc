#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s;
    cin >> t >> s;

    if(t <= 11) {
        cout << 280;
    }
    else if(12 <= t && t <= 16) {
        if(s == 0) cout << 320;
        else cout << 280;
    }
    else {
        cout << 280;
    }

    return 0;
}