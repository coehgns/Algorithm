#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0, };

queue<pair<int, int>> q;
vector<int> width(0);

int graph[101][101];
int visited[101][101];

void bfs(int ix, int jy) {
    int widthCnt = 1;
    q.push({ ix, jy });
    visited[ix][jy] = 1;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
            if(visited[nx][ny] == 0 && graph[nx][ny] == 0) {
                q.push({ nx, ny });
                visited[nx][ny] = 1;
                widthCnt++;
            }
        }
    }

    width.push_back(widthCnt);
}

int main() {
    cin >> m >> n >> k;

    int lx, ly, rx, ry;
    for(int i = 0; i < k; i++) {
        cin >> lx >> ly >> rx >> ry;

        for(int i = ly; i < ry; i++) {
            for(int j = lx; j < rx; j++) {
                graph[i][j] = 1;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(visited[i][j] == 0 && graph[i][j] == 0) {
                bfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << "\n";

    sort(width.begin(), width.end());
    
    for(auto i : width) {
        cout << i << " ";
    }

    return 0;
}