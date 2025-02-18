#include <bits/stdc++.h>
using namespace std;

int t, m, n, k;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int graph[51][51];
int visited[51][51];

queue<pair<int, int>> q;

void bfs(int y, int x) {
    q.push({y, x});
    visited[y][x] = 1;

    while(!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for(int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny >= 0 && nx >= 0 && nx < m && ny < n) {
                if(graph[ny][nx] == 1 && visited[ny][nx] == 0) {
                    visited[ny][nx] = 1;
                    q.push({ny, nx});
                }
            }
        }
    }
}

int main() {
    cin >> t;

    while(t--) {
        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));
        cin >> m >> n >> k;
        
        int result = 0;
        for(int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            graph[y][x] = 1;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(graph[i][j] == 1 && visited[i][j] == 0) {
                    bfs(i, j);
                    result++;
                }  
            }
        }
        cout << result << '\n';
    }

    return 0;
}