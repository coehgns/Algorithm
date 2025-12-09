#include <bits/stdc++.h>
using namespace std;

int n, m;
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0, };

queue<pair<int, int>> q;
int graph[1001][1001];
int visited[1001][1001];


void bfs(int ix, int jy) {
    q.push({ ix, jy });
    visited[ix][jy] = 1;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            // 음수 이동을 위한 식
            // (열 or 행 + 이동할 위치(dx) + 현재 위치(x)) % 열 or 행
            int nx = (x + dx[i] + n) % n;
            int ny = (y + dy[i] + m) % m;

            if(visited[nx][ny] == 0 && graph[nx][ny] == 0) {
                q.push({ nx, ny });
                visited[nx][ny] = 1;
            }
        }
    }

}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0 && graph[i][j] == 0) {
                bfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}