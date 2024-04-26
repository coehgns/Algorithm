#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;

    cin >> str;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
             cnt++;
         }   
    }
    cout << cnt;
    
    return 0;
}