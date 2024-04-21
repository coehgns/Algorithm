#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  vector<pair<int, int>> arr;
  int input;

  for(int i = 0; i < 8; i++) {
    cin >> input;
    arr.push_back({ input, i});
    arr[i].first = input;
    arr[i].second = i;
  }

  sort(arr.begin(), arr.end(), greater<pair<int, int>> ());

  int sum = 0;
  int index[5];
  for(int i = 0; i < 5; i++) {
    sum += arr[i].first;
    index[i] = arr[i].second;
  }
  sort(index, index + 5);
  cout << sum << '\n';
  for(int i = 0; i < 5; i++) {
    cout << index[i] + 1 << " ";
  }

  return 0;
}