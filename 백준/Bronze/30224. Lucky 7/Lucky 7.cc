#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    if(str.find("7") == string::npos) {
        int num = stoi(str);
        if(num % 7 == 0) cout << 1;
        else cout << 0;
    }
    else {
        int num = stoi(str);
        if(num % 7 == 0) cout << 3;
        else cout << 2;
    }

    return 0;
}