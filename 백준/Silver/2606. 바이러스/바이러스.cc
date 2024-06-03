#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> v(n+1);

  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    v[a].push_back(b);
    v[b].push_back(a);
  }  

  queue<int> q;
  q.push(1);
 
  vector<int> visited(n+1);
  visited[1] = 1;

  int cnt = 0;
  while(!q.empty()) {
    int now = q.front();
    q.pop();

    for(int i : v[now]) {
      if(!visited[i]) {
        visited[i] = 1;
        cnt++;
        q.push(i);
      }
    }
  }

  cout << cnt;

  return 0;
}