#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;

int graph[51][51];
int visited[51][51];
int dx[8] = { 0, 0, -1, 1, -1, 1, -1, 1 };
int dy[8] = { 1, -1, 0, 0, 1, 1, -1, -1};

void bfs(int ix, int jy, int w, int h) {
    q.push({ix, jy});
    visited[ix][jy] = 1;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
            if(visited[nx][ny] == 0 && graph[nx][ny] == 1) {
                q.push({nx, ny});
                visited[nx][ny] = 1;
            }
        }
    }
}

int main() {
    int w, h;
    while(1) {
        cin >> w >> h;
        if(w == 0 && h == 0) break;

        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));

        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                cin >> graph[i][j];
            }
        }

        int cnt = 0;
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                if(visited[i][j] == 0 && graph[i][j] == 1) {
                    bfs(i ,j, w, h);
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }    

    return 0;
}