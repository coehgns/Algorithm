#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, a, b, input;
  cin >> n;
  vector<int> v(n, 0);

  int sum = 0;
  for(int i = 1; i <= n; i++) {
    cin >> input;
    sum += input;
    v[i] = sum;
  }

  cin >> m;
  while(m--) {
    cin >> a >> b;
    cout << v[b] - v[a - 1] << "\n";
  }

  return 0;
}