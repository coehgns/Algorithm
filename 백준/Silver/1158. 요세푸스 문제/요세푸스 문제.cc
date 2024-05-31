#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  queue<int> q;
  int arr[n]{0};

  for(int i = 1; i <= n; i++) q.push(i);

  for(int i = 0; i < n; i++) {
    for(int j = 1; j < k; j++) {
      q.push(q.front());
      q.pop();
    }
    arr[i] = (q.front());
    q.pop();
  }

  cout << "<";
  for(int i = 0; i < n; i++) {
    if(i == n - 1) cout << arr[n-1];
    else cout << arr[i] << ", ";
  }
  cout << ">";
  

  return 0;
}