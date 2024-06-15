#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int input;
    vector<int> v(3, 0);
    
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    for(int i = 0 ; i < 3; i++) {
        cout << v[i] << " ";
    }

    return 0;
}