#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int alpha[27] = { 0, };

    for(int i = 0; i < str.length(); i++) {
        alpha[str[i] - 97] += 1;
    }

    for(int i = 0; i < 26; i++) {
        cout << alpha[i] << " ";
    }

    return 0;
}