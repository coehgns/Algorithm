#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  while(n >= 0) {
    if(n % 5 == 0) {
      cout << cnt + n / 5;
      return 0;
    }
    n -= 2;
    cnt++;
  }
  cout << -1;

  return 0;
}