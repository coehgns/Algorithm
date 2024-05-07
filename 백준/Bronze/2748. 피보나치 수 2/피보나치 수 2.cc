#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  long arr[100] = { 0, 1 };

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

  cout << arr[n];

  return 0;
}