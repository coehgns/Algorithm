#include <iostream>
using namespace std;

int main() {
  long long s;
  cin >> s;

  long long sum = 0, num = 0;
  int cnt = 0;

  for(long long i = 1; i <= s; i++) {
    sum += i;
    cnt++;
    if(sum > s) {
      cnt--;
      break;
    }
  }

  cout << cnt;

  return 0;
}