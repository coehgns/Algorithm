#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  int n, start, end, cnt = 0;
  cin >> n;
  vector<pair<int, int>> v;

  for(int i = 0; i  < n; i++) {
    cin >> start >> end;
    v.push_back({end, start});
  }

  sort(v.begin(), v.end());

  int end_n = 0;
  for(int i = 0; i < n; i++) {
    if(v[i].second >= end_n) {
      cnt++;
      end_n = v[i].first;
    }
  }

  cout << cnt;

  return 0;
}