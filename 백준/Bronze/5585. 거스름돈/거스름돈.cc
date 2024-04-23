#include <iostream>
using namespace std;
#include <vector>

int main() {
  int n;
  cin >> n;
  int arr[6] = {500, 100, 50, 10, 5 , 1 };

  int money = 1000 - n;
  int cnt = 0;
  
  for(int i = 0; i < 6; i++) {
    if(money >= arr[i]) {
      cnt += money / arr[i];
      money %= arr[i];
    }
  }

  cout << cnt;

  return 0;
}