#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
  return a > b;
}

int main() {
  int n, k, input;
  cin >> n >> k;
  vector<int> v = { 0, };

  for(int i = 0; i < n; i++) {
    cin >> input;
    v.push_back(input);
  }

  sort(v.begin(), v.end(), compare);

  int cnt = 0;

  for(int i = 0; i < n; i++) {
    if(k == 0) {
      break;
    }
    else if(v[i] <= k) {
      cnt += k/v[i];
      k %= v[i];
    }
    else {
      continue;
    }
  }

  cout << cnt;

  return 0;
}