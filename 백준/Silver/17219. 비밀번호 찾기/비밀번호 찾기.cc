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

    map<string, string> m1;

    for(int i = 0; i < n; i++) {
        string str, pw;
        cin >> str >> pw;
        m1[str] = pw;
    }

    for(int i = 0; i < m; i++) {
        string str;
        cin >> str;
        cout << m1[str] << "\n";
    }

    return 0;
}