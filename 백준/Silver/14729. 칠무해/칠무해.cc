#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<double> v;

    double input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < 7; i++) {
        cout << fixed;
        cout.precision(3);
        cout << v[i] << '\n';
    }
    return 0;
}