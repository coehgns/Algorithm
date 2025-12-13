#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;
char graph[51][51];
int visited[51][51];
int predecessor[51][51];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int h, w;

int bfs(int i, int j) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            visited[i][j] = -1;
        }
    }    

    int cnt = 0;
    q.push({i, j});
    visited[i][j] = 0;


    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        cnt = max(cnt, visited[x][y]);

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
            if(visited[nx][ny] == -1 && graph[nx][ny] == 'L') {
                q.push({nx, ny});
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }

    return cnt;
}

int main() {
    cin >> h >> w;

    string s;
    for(int i = 0; i < h; i++) {
        cin >> s;
        for(int j = 0; j < w; j++) {
            graph[i][j] = s[j];
        }
    }

    int maxD = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(graph[i][j] == 'L') {
                maxD = max(maxD, bfs(i, j));
            }
        }
    }

    cout << maxD;

    return 0;
}