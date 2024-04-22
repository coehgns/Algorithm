#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, p;
  cin >> n;
  vector<int> v;

  int sum = 0;
  int result = 0;
  for(int i = 0; i < n; i++) {
    cin >> p;
    v.push_back(p);
  }

  sort(v.begin(), v.end());

  for(int i = 1; i <= n; i++) {
    sum = 0;
    for(int j = 0; j < i; j++) {
      sum += v[j];
    }
    result += sum;
  }

  cout << result;

  return 0;
}