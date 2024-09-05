#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    vector<int> checkV;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
        checkV.push_back(input);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(checkV[i] == v[j]) {
                cout << j << " ";
                v[j] = j + 1001;
                break;
            }
        }
    }

    return 0;
}