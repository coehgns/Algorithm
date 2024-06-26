#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        sum += input;
    }

    if(sum > 0) cout << "Right";
    else if(sum < 0) cout << "Left";
    else cout << "Stay";
    
    return 0;
}