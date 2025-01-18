#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    queue<int> q;
    vector<int> result;

    for(int i = 1; i <= n; i++) q.push(i);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k - 1; j++) {
            q.push(q.front());
            q.pop();
        }
        result.push_back(q.front());
        q.pop();
    }

    cout << '<';
    for(int i = 0; i < n; i++) {
        (i == n - 1) ? cout << result[i] << '>' : cout << result[i] << ", ";
    }

    return 0;
}