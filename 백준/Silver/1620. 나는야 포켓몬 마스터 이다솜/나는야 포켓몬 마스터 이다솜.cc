#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    map<string, int> m1;
    map<int, string> m2;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        m1[str] = i;
        m2[i] = str;
    }

    while(m--) {
        string str;
        cin >> str;

        if(atoi(str.c_str()) != 0) {
            cout << m2[stoi(str) - 1] << "\n";
        }
        else cout << m1[str] + 1 << "\n";
    }

    return 0;
}