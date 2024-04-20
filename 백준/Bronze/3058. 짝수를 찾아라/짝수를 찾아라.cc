#include <iostream>
using namespace std;

int main() {
  int t, n, sum, min;
  cin >> t;

  for(int i = 0; i < t; i++) {
      sum = 0;
      min = 0;
    for(int j = 0; j < 7; j++) {
      cin >> n;
      if(n % 2 == 0) {
        sum += n;
        if(min == 0) {
            min = n;
        }
        if(min > n) {
          min = n;
        }
      }
    }
    cout << sum << " " << min << '\n';
  }

  return 0;
}