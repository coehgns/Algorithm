#include <iostream>
using namespace std;

int main() {
  int count;

  for(int i = 0; i < 3; i++) {
    __int128 sum = 0;
    cin >> count;
    for(int j = 0; j < count; j++) {
      long long int input;
      cin >> input;
      sum += input;
    }
    if(sum > 0) cout << "+" << '\n';
    else if (sum < 0) cout << "-" << '\n';
    else cout << "0" << '\n';
  }

  return 0;
}