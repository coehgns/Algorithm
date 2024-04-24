#include <iostream>
#include <istream>
#include <string>
using namespace std;

int main() {
  string str;

  int cnt = 0;
  for(int i = 0; 1; i++) {
    cnt = 0;
    getline(cin, str);

    if(str[0] == '#') {
      break;
    }

    for(int j = 0; j < str.length(); j++) {
      if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') {
          cnt++;
      }
      if(str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U') {
          cnt++;
      }
    }
    cout << cnt << "\n";  
  }

  return 0;
}