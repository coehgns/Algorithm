#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<vector<int>> v(105);
vector<int> visited(105);

int n, p1, p2, m;

int bfs(int node) {
    fill(visited.begin(), visited.end(), -1);

    q.push(node);
    visited[node] = 0;

    while(!q.empty()) {
        int nowNode = q.front();
        q.pop();

        for(int i : v[nowNode]) {
            if(visited[i] == -1) {
                q.push(i);
                visited[i] = visited[nowNode] + 1;
                if(i == p2) return visited[i];
            }
        }
    }

    return -1;
}

int main() {
    cin >> n >> p1 >> p2 >> m;

    int x, y;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    cout << bfs(p1);

    return 0;
}