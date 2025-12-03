#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a; 
}

int main() {
    int n;
    cin >> n;

    vector<string> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    if(v[0] == "0") {
        cout << 0;
        return 0;
    }

    string result = "";
    for (string &s : v) {
        result += s;
    }

    cout << result;

    return 0;
}