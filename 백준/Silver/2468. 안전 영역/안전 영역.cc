#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;
int graph[101][101];
int visited[101][101];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0, };

void bfs(int ix, int jy, int n , int h) {
    q.push({ ix, jy });
    visited[ix][jy] = 1;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx > n || ny > n) continue;
            if(visited[nx][ny] == 0 && graph[nx][ny] > h) {
                q.push({ nx, ny });
                visited[nx][ny] = 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a;
            graph[i][j] = a;
        }
    }

    int answer = 1;
    for(int h = 1; h <= 100; h++) {
        memset(visited, 0, sizeof(visited));

        int cnt = 0;
        for(int i = 0 ; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(visited[i][j] == 0 && graph[i][j] > h) {
                    bfs(i, j, n, h);
                    cnt++;
                }
            }
        }
        answer = max(answer, cnt);
    }

    cout << answer;
    
    return 0;
}