#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, f, s, p, c;

    for(int i = 0; i < 2; i++) {
        cin >> t >> f >> s >> p >> c;
        cout << (t * 6) + (f * 3) + (s * 2) + (p * 1) + (c * 2) << " ";
    }

    return 0;
}