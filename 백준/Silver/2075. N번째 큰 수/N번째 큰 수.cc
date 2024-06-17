#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, input;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;

  for(int i = 0; i < n; i++) { 
    for(int j = 0; j < n; j++) {
      cin >> input;
      pq.push(input);
    }
    while(pq.size() != n) {
      pq.pop();
    }
  }
  
  cout << pq.top();

  return 0;
}