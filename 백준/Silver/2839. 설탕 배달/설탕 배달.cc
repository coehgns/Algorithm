#include <iostream>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;

  while(n >= 0) {

    if(n % 5 == 0) {
      cout << cnt + n / 5;
      return 0;
    }
    n -= 3;
    cnt++;

  }

  cout << -1;

  return 0;
}