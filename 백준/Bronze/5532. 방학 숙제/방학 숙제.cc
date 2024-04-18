#include <iostream>
using namespace std;

int main() {
  int L, a, b, c, d;
  int math = 0;
  int korean = 0;
  int day = 0;
  cin >> L >> a >> b >> c >> d;

  if(a % c == 0) {
    math = a/c;
  }
  else {
    math = a/c + 1;
  }
  if(b % d == 0) {
    korean = b/d;
  }
  else {
    korean = b/d + 1;
  }
  math > korean ? day = math : day = korean;
  cout << L - day;

  return 0;
}