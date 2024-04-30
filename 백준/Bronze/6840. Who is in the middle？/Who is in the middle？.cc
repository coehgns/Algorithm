#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int input;
  vector<int> v;
  for(int i = 0; i < 3; i++) {
    cin >> input;
    v.push_back(input);
  }
  sort(v.begin(), v.end());

  cout << v[1];

  return 0;
}