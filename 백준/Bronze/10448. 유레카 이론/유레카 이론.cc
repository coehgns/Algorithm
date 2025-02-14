#include <bits/stdc++.h>
using namespace std;

int tri[45];

int triNum(int n) {
    for(int i = 1; i < 45; i++) {
        for(int j = 1; j < 45; j++) {
            for(int k = 1; k < 45; k++) {
                if(tri[i] + tri[j] + tri[k] == n) {
                    return 1;
               }
            }
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;

    for(int i = 1; i < 45; i++) {
        tri[i] = i * (i + 1) / 2;
    }

    int n;
    while(t--) {
        cin >> n;
        cout << triNum(n) << '\n';
    }

    return 0;
}