#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    stack<char> s;

    string str;
    while(t--) {
        getline(cin, str);
        str += ' ';
        
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == ' ') {
                while(!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            else s.push(str[i]);
        }
        cout << '\n';
    }

    return 0;
}
