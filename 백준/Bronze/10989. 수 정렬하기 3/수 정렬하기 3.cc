#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, input, arr[10001] = {0,};
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> input;
    arr[input] += 1;
  }

  for(int i = 1; i <= 10000; i++) {
    for(int j = 0; j < arr[i]; j++) {
      cout << i << "\n";
    }
  }

  return 0;
}