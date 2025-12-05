#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vec;
vector<int> visited(20001);
queue<int> q;
bool isBipartite;

// 빨간색 = 1
// 파란색 = -1
// 두 정점의 색이 다르면 두 정점을 더했을 때 0이 나와야 함.

// visited에는 방문 기록과 색을 이중적으로 표시함.

void bfs(int node, int color) {
    q.push(node);
    visited[node] = color;

    while(!q.empty()) {
        int nowNode = q.front();
        q.pop();
        for(int i : vec[nowNode]) {
            // 방문하지 않은 정점
            if(visited[i] == 0) {
                q.push(i);
                visited[i] = visited[nowNode] * (-1);
                isBipartite = true;
            }
            // 인접 노드의 색이 같은 경우
            else if(visited[nowNode] + visited[i] != 0) {
                isBipartite = false;
                return;
            }
        }
    }
}

int main() {
    int k;
    cin >> k;
    
    int v, e;
    while(k--) {
        cin >> v >> e;

        vec.assign(v + 1, vector<int>());
        visited.assign(v + 1, 0);
        q = queue<int>();
        isBipartite = true;

        for(int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }

        for(int i = 1; i <= v; i++) {
            if(visited[i] == 0) {
                bfs(i, 1);
            }
        }

        cout << (isBipartite ? "YES" : "NO") << "\n";

    }

    return 0;
}