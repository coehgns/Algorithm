#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int x;

    int result = 0;
    while(cin >> s >> x) {
        if(s == "Es") result += 21 * x;
        else result += 17 * x;
    }

    cout << result;

    return 0;
}