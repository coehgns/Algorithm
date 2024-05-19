#include <iostream>
using namespace std;

int dp[1001] = { 0, 1, 2, 4 };

int main() {
  int t, input;
  cin >> t;

  for(int i = 4; i < 11; i++) {
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
  }

  for(int i = 0; i < t; i++) {
    cin >> input;
    cout << dp[input] <<"\n";
  }

  return 0;
}