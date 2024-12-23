#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int alpha[26] = { 0, };

    vector<string> str(n);
    for(int i = 0; i < n; i++) {
        cin >> str[i];

        alpha[(str[i][0] - 97)]++;
    }

    int cnt = 0;
    for(int i = 0; i < 26; i++) {
        if(alpha[i] >= 5) {
            cout << (char)(i + 97);
            cnt++;
        }
    }

    if(cnt == 0) cout << "PREDAJA";

    return 0;
}