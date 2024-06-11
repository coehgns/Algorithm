#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {   
    vector<int> v;

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int input;
        cin >> input;
        v.push_back(input);
        sum += input;
    }

    cout << sum / 5 << "\n";

    sort(v.begin(), v.end());
    
    cout << v[2];

    return 0;
}