#include <iostream>
using namespace std;


int main() {
  int n;
  cin >> n;

  int fibo[1000] = { 1, 1 };
  for(int i = 2; i <= n; i++) {
    fibo[i] = (fibo[i - 1] + fibo[i - 2])%10007;
  }

  cout << fibo[n];

  return 0;
}