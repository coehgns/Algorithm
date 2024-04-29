#include <iostream>
using namespace std;

int main() {
  int n, A, B, X;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> A >> B >> X;
    cout << A * (X - 1) + B << "\n";
  }

  return 0;
}