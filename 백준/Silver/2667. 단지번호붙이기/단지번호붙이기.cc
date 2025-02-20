#include <bits/stdc++.h>
using namespace std;

int n;
int result;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int graph[26][26];
int visited[26][26];


int bfs(int y, int x) {
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = 1;

    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny >= 0 && nx >= 0 && nx < n && ny < n) {
                if(graph[ny][nx] == 1 && !visited[ny][nx]) {
                    visited[ny][nx] = 1;
                    q.push({ny, nx});
                    result++;
                }
            }
        }
    }

    return result;
}

int main() {
    cin >> n;

    string str;
    for(int i = 0; i < n; i++) {
        cin >> str;
        for(int j = 0; j < n; j++) {
            graph[i][j] = str[j] - '0';
        }   
    }

    vector<int> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(graph[i][j] == 1 && !visited[i][j]) {
                result = 1;
                bfs(i, j);
                if(result != 0) v.push_back(result);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }

    return 0;
}