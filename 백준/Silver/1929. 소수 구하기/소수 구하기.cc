#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
  int n, m;
  cin >> m >> n;

  for(int i = m; i <= n; i++) {
    if(isPrime(i)) {
      cout << i << "\n";
    }
  }

  return 0;
}