#include <iostream>
using namespace std;

int main() {
  int arr[10] = {0,};
  int a, b, c;
  cin >> a >> b >> c;
  int result = a * b * c;

  while(result > 0) {
    int remain = result % 10;
    arr[remain]++;
    result /= 10;  
  }

  for(int i = 0; i < 10; i++) {
    cout << arr[i] << "\n";
  }

  return 0;
}