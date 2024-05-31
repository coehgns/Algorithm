#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  queue<int> q;
  vector<int> v;

  for(int i = 1; i <= n; i++) {
    q.push(i);
  }

  while(1) {
    if(q.size() == 1) {
      v.push_back(q.front());
      break;
    }
    v.push_back(q.front());
    q.pop();
    q.push(q.front());
    q.pop();
  }

  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  return 0;
}