#include <iostream>
using namespace std;

int main() {
  string str = { 0, };
  cin >> str;
  
  for(int i = 0; i < str.length(); i++) {
    if(i != 0 && i % 10 == 0) {
      cout << "\n" << str[i];
    }
    else {
      cout << str[i];
    }
  }

  return 0;
}