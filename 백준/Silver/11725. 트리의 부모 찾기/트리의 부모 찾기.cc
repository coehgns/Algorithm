#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<vector<int>> v(100001);
vector<int> visited(100001);
vector<int> result(100001);

void bfs(int node) {
    q.push(node);
    visited[node] = 1;

    while(!q.empty()) {
        int nowNode = q.front();
        q.pop();

        for(int i : v[nowNode]) {
            if(visited[i] == 0) {
                if(result[i] == 0) {
                    result[i] = nowNode;
                }
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a, b;

    for(int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs(1);

    for(int i = 2; i <= n; i++) {
        cout << result[i] << "\n";
    }
    
    return 0;
}