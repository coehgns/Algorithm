#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;


int main() {
  int n, age;
  string names;
  vector<pair<int, int>> v;
  vector<string> name;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> age;
    v.push_back({age,i});
    cin >> names;
    name.push_back(names);
  }
  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    cout << v[i].first << " " << name[v[i].second] << "\n";
  }

  return 0;
}