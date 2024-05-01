#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  
  string str;
  cin >> str;
  sort(str.rbegin(), str.rend());
  cout << str;

  return 0;
}