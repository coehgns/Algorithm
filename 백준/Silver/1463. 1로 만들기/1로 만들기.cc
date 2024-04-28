#include <iostream>
using namespace std;
using std:: min;

int main() {
  int dp[1000001]{0};
  int x;
  cin >> x;

  for(int i = 2; i <= x; i++) {
    dp[i] = dp[i - 1] + 1;
    if(!(i % 3)) {
      dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    if(!(i % 2)) {
      dp[i] = min(dp[i], dp[i / 2] + 1);
    }
  }

  cout << dp[x];
  
  return 0;
}