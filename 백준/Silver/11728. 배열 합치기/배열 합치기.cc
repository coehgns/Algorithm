#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> v;

  int input;
  for(int i = 0; i < n + m; i++) {
    cin >> input;
    v.push_back(input);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n + m; i++) {
    cout << v[i] << " ";
  }

  return 0;
}