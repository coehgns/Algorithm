#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    while(n--) {
        cin >> str;

        for(int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
        cout << str << "\n";
    }

    return 0;
}