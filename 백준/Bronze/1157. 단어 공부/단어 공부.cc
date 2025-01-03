#include <bits/stdc++.h>
using namespace std;
    
char s[1000001];
int alpha[26];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> s;

    int size = strlen(s);
    for (int i = 0; i < size; i++) {
        if('a' <= s[i]) alpha[s[i] - 'a']++;
        else alpha[s[i] - 'A']++;
    }

    int max = 0;
    char ans;
    for (int i = 0; i < 26; i++) {
        if(alpha[i] == max) ans = '?';

        else if(alpha[i] > max) {
            max = alpha[i];
            ans = 'A' + i;
        }
    }

    cout << ans;

    return 0;
}