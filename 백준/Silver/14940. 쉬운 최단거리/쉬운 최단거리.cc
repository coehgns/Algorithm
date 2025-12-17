#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;
int graph[1001][1001];
int visited[1001][1001];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int n, m;
void bfs(int i, int j) {
    q.push({i, j});
    visited[i][j] = 1;
    graph[i][j] = 0;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(visited[nx][ny] == 0) {
                q.push({nx, ny});
                visited[nx][ny] = 1;
                graph[nx][ny] = graph[x][y] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    int arriveI = 0, arriveJ = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> graph[i][j];

            if(graph[i][j] == 2) {
                arriveI = i;
                arriveJ = j;
            }
            else if(graph[i][j] == 0) {
                visited[i][j] = 1;
            }
        }
    }

    bfs(arriveI, arriveJ);

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0) {
                cout << "-1 "; 
            }
            else {
                cout << graph[i][j] << " ";
            }
        }
        cout << "\n";
    }


    return 0;
}