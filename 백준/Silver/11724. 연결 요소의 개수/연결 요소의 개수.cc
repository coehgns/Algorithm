#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<vector<int>> v(100001);
vector<int> visited(100001);

void bfs(int node) {
    q.push(node);
    visited[node] = 1;

    while(!q.empty()) {
        int nowNode = q.front();
        q.pop();

        for(int i : v[nowNode]) {
            if(visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int answer = 0;
    for(int i = 1; i <= n; i++) {
        if(visited[i] == 0) {
            bfs(i);
            answer++;
        }
    }

    cout << answer;
    
    return 0;
}