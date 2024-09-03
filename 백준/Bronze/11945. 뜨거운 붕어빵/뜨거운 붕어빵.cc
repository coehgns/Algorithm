#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        reverse(str.begin(), str.end());
        cout << str << '\n';
    }

    return 0;
}