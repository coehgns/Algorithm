#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<int> v;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    cout << v[i] << "\n";
  }

  return 0;
}