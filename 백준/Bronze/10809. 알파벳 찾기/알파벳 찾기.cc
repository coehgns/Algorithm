#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  string alpha ="abcdefghijklmnopqrstuvwxyz";

  for(int i = 0; i < alpha.length(); i++) {
    cout << (int)s.find(alpha[i]) << " ";
  }

  return 0;
}