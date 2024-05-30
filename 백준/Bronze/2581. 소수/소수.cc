#include <iostream>
#include <vector>
using namespace std;

int check(int n) {
	if (n == 1) {
		return 0;
	}
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
  int m, n;
  cin >> m >> n;
  vector<int> v;

  int sum = 0;
  for(int i = m; i <= n; i++) {
    if(check(i)) {
      sum += i;
      v.push_back(i);
    }
  }

  if(v.empty()) {
    cout << -1;
  }
  else cout << sum << "\n" << v[0];

  return 0;
}