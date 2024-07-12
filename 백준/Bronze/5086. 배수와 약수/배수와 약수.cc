#include <iostream>
using namespace std;

int main() {
    
    while(1) {
        int a, b;
        cin >> a >> b;

        if(a == 0 && b == 0) return 0;

        if(a > b) {
            if(a % b == 0) cout << "multiple" << "\n";
            else cout << "neither" << "\n";
        }
        else if(b > a) {
            if(b % a == 0) cout << "factor" << endl;
            else cout << "neither" << endl;
        }
        else cout << "neither" << "\n";
    }

    return 0;
}