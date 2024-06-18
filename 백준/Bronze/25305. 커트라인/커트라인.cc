#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> v;

  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }

  sort(v.rbegin(), v.rend());

  cout << v[k - 1];

  return 0;
}