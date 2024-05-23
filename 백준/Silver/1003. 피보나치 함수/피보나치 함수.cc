#include <iostream>
using namespace std;

int main() {
  int t, input;
  cin >> t;

  int dp0[100] = { 1, 0 };
  int dp1[100] = { 0, 1 };
  
  for(int i = 0; i < t; i++) {
    cin >> input;
    for(int j = 2; j <= input; j++) {
      dp0[j] = dp0[j - 1] + dp0[j - 2];
      dp1[j] = dp1[j - 1] + dp1[j - 2];
    }
    cout << dp0[input] << " " << dp1[input] << "\n";
  }
  
  return 0;
}