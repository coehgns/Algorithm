#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    char result[51] = { 0, };

    for(int i = 0; i < n; i++) {
        cin >> str;
        if(i == 0) {
            for(int j = 0; j < str.length(); j++) {
                result[j] = str[j];
            }
        }
        else {
            for(int j = 0; j < str.length(); j++) {
                if(result[j] != str[j]) {
                    result[j] = '?';
                }
            }
        }
    }

    cout << result;

    return 0;
}