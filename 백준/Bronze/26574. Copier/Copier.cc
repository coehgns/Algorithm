#include <iostream>
using namespace std;

int main() {
    int n, nums;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> nums;
        cout << nums << " " << nums << "\n";
    }
    
    return 0;
}