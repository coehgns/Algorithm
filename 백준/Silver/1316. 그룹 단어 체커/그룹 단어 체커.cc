#include <bits/stdc++.h>
#include <string>
using namespace std;
    
int main() {
    int n;
    cin >> n;

    int result = n;

    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;

        for(int j = 0; j < s.length(); j++) {
            int next = s.find_first_not_of(s[j], j);
            int check = s.find(s[j], next);

            if(s[j] == s[check]) {
                result--;
                break;
            }
        }
    }

    cout << result;

    return 0;
}