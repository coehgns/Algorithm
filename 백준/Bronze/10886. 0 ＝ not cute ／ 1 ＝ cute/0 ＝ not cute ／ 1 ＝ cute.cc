#include <iostream>
using namespace std;

int main() {
    int n, input;
    cin >> n;

    int zero = 0;
    int one = 0;
    while(n--) {
        cin >> input;
        if(input == 0) zero++;
        else one++;
    }

    zero > one ? cout << "Junhee is not cute!" : cout << "Junhee is cute!";
    
    return 0;
}