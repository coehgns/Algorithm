#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f;
    cin >> n >> f;

    string s = to_string(n);
    string suffix;
    for(int i = 0; i < 100; i++) {
        if(i <= 9) {
            suffix = "0" + to_string(i);
            s.replace(s.size() - 2, 2, suffix);
        }
        else {
            s.replace(s.size() - 2, 2, to_string(i));
        }
        if(stoi(s) % f == 0) {
            cout << s[s.length() - 2] << s[s.length() -1];
            break;
        }
    }

    return 0;
}