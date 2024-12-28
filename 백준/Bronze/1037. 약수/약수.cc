#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    while(n--) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cout << v[0] * v[v.size() - 1];

    return 0;
}