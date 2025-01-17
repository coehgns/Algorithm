#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;

    unordered_map<int, int> freq;
    int input;

    for (int i = 0; i < n; i++) {
        cin >> input;
        freq[input]++;
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> input;
        cout << freq[input] << ' ';
    }

    return 0;
}
