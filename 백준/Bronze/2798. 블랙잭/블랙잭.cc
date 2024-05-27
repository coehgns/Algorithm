#include <iostream>
using namespace std;

int main() {
  int arr[101]{0};
  int n, m, card;
  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> card;
    arr[i] = card;
  }
  
  int sum, max = 0;
  for(int i = 0; i < n; i++) {
    sum = 0;
    for(int j = 0; j < n; j++) {
      for(int k = j; k < n; k++) {
        if(i == j || j == k || k == i) continue;
        sum = arr[i] + arr[j] + arr[k];
        if(sum <= m && max < sum) max = sum;
      }
    }
  }

  cout << max;

  return 0;
}