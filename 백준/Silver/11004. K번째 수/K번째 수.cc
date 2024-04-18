#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n, k;
  cin >> n >> k;
  vector<int> arr;

  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    arr.push_back(input);
  }

  sort(arr.begin(), arr.end());

  cout << arr[k - 1];
  return 0;
}