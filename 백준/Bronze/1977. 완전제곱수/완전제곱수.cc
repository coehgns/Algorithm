#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> v;

    int sum = 0;
    for(int i = m; i <= n; i++) {
        for(int j = 1; j <= 100; j++) {
            if(i == pow(j, 2)) {
                v.push_back(i);
                sum += i;
            }
        }
    }

    sort(v.begin(), v.end());
    if(sum == 0) {
        cout << -1;
        return 0;
    }
    cout << sum;
    if(v.empty()) ;
    else cout << '\n' << v[0];

    return 0;
}