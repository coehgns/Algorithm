#include <iostream>
using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  int arr[100001]{0};  
  cin >> n >> m;

  for(int i = 1; i <= n; i++) {
    int input;
    cin >> input;
    arr[i] = input + arr[i - 1];
  }

  while(m--) {
    int index_s, index_e;
    cin >> index_s >> index_e;
    cout << arr[index_e] - arr[index_s - 1] << "\n";
  }

  
  return 0;
}