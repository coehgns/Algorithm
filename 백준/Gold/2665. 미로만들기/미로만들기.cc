#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int graph[51][51];
int dist[51][51];

deque<pair<int, int>> d;

void bfs(int startX, int startY, int n) {
    dist[0][0] = 0;
    d.push_front({ startX, startY });

    while(!d.empty()) {
        int x = d.front().first;
        int y = d.front().second;
        d.pop_front();

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            int newCost = dist[x][y];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if(graph[nx][ny] == 0) newCost++;
            if(newCost < dist[nx][ny]) {
                dist[nx][ny] = newCost;
                if (graph[nx][ny] == 1) {  // 흰방 - 추가비용 0
                    d.push_front({ nx, ny });
                }
                else {  // 검은방 - 추가비용 1
                    d.push_back({ nx, ny });
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            dist[i][j] = INT_MAX;
        }
    }

    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int j = 0; j < n; j++) {
            graph[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0, n);

    cout << dist[n-1][n-1];

    return 0;
}