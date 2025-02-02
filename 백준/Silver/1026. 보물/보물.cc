#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b;

    int n;
    cin >> n;

    int input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        a.push_back(input);
    }

    for(int i = 0; i < n; i++) {
        cin >> input;
        b.push_back(input);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    int result = 0;
    for(int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }
    
    cout << result;

    return 0;
}
