#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;
int graph[501][501];
int visited[501][501];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0, };

int bfs(int ix, int jy, int n, int m) {
    q.push({ ix, jy });
    visited[ix][jy] = 1;

    int widthCnt = 1;
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(visited[nx][ny] == 0 && graph[nx][ny] == 1) {
                q.push({ nx, ny });
                visited[nx][ny] = 1;
                widthCnt++;
            }
        }
    }

    return widthCnt;
}

int main() {
    int n, m;
    cin >> n >> m;

    int a;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a;
            graph[i][j] = a;
        }
    }

    int cnt = 0;
    int widthCnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0 && graph[i][j] == 1) {
                widthCnt = max(widthCnt, bfs(i, j, n, m));
                cnt++;
            }
        }
    }

    cout << cnt << "\n" << widthCnt;
    
    return 0;
}