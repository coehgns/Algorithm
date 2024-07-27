#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> v;
    while(1) {
        if(n == 0) break;
        else if(n >= 5) {
            n -= 5;
            v.push_back('V');
        }
        else {
            n--;
            v.push_back('I');
        }
    }
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}