#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> map; 
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;
        map[str] = 0;  
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (map.find(str) != map.end()) {
            map[str]++; 
            sum++;      
        }
    }

    cout << sum;

    return 0;
}
