#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++) {
        string str;
        getline(cin, str);

        cout << i << ". " << str << endl;
    }

    return 0;
}