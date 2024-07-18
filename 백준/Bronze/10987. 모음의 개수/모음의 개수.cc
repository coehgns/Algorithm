#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'a') cnt++;
        if(str[i] == 'e') cnt++;
        if(str[i] == 'i') cnt++;
        if(str[i] == 'o') cnt++;
        if(str[i] == 'u') cnt++;
    }

    cout << cnt;

    return 0;
}