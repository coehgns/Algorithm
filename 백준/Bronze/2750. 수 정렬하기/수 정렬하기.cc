#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, input;
  vector<int> v;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> input;
    v.push_back(input);
  }
  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    cout << v[i] << "\n";
  }

  return 0;
}