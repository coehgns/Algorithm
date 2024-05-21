#include <iostream>
using namespace std;

int main() {
  int n, input, sum = 0, max = -1001;
  cin >> n;

  while(n--) {
    cin >> input;
    sum += input;
    max = max < sum ? sum : max;
    sum = (sum > 0) * sum;
  }

  cout << max;
  
  return 0;
}