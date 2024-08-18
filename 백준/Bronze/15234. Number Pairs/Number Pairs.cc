#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i] + v[j] == k) cnt++;
        }
    }

    cout << cnt/2;

    return 0;
}