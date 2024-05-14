#include <queue>
#include <vector>
#include <iostream>
using namespace std;

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

int graph[101][101];
int visited[101][101];

int main() {
  int n,m; 
  cin >> n >> m;

  for(int i=0;i<n;i++) {
    string a; 
    cin >> a;
    for(int j=0;j<m;j++) {
      graph[i][j] = a[j] - '0';
    }
  }

  queue<pair<int,int>> Q;
  Q.push({0,0});
  visited[0][0] = 1;

  while(!Q.empty()) {
    int x = Q.front().first;
    int y = Q.front().second;
    Q.pop();

    for(int dir=0;dir<4;dir++) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      if(nx < 0 || ny < 0 || nx > n || ny > m) continue;
      if(graph[nx][ny] == 1 && !visited[nx][ny]) {
        visited[nx][ny] = visited[x][y] + 1;
        Q.push({nx,ny});
      }
    }
  }

  cout << visited[n -1][m - 1];

}