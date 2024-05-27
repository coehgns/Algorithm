#include <iostream>
#include <string>
using namespace std;

int main() {
  int t, n, m;
  cin >> t;

  int sum = 0;
  while(t--) {
    sum = 0;
    cin >> n >> m;
    
    for(int i = n; i <= m; i++) {
      string str = to_string(i);
      for(int j = 0; j < str.length(); j++) {
        if(str[j] == '0') sum++;
      }
    }
    cout << sum << "\n";
  }

  return 0;
}