#include <bits/stdc++.h>
using namespace std;

int m, n;
int result = 0;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int graph[1001][1001];

queue<pair<int, int>> q;

void bfs() {
    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny >= 0 && nx >= 0 && nx < m && ny < n) {
                if(!graph[ny][nx]) {
                    graph[ny][nx] = graph[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }
    }
}

int main() {
    cin >> m >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> graph[i][j];
            if(graph[i][j] == 1) {
                q.push({i, j});
            }
        }   
    }

    bfs();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(graph[i][j] == 0) {
                cout << -1;
                return 0;
            }
            if(result < graph[i][j]) {
                result = graph[i][j];
            }
        }
    }

    cout << result - 1;

    return 0;
}