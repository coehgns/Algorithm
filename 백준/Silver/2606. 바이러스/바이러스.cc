#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v(101);
vector<int> visited(101);

int cnt = 0;
void dfs(int n) {
  if(visited[n]) return;
  visited[n] = 1;
  cnt++;
  for(int i : v[n]) dfs(i);
}

int main() {
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    v[a].push_back(b);
    v[b].push_back(a);
  }

  dfs(1);

  cout << cnt - 1;

  return 0;
}