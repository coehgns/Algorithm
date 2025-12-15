#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<vector<int>> v(101);
vector<int> visited(101);

int cnt;
int n, m;

int bfs(int node) {
    cnt = 0;

    q.push(node);
    visited[node] = 0;

    while(!q.empty()) {
        int nowNode = q.front();
        q.pop();

        for(int i : v[nowNode]) {
            if(visited[i] == -1) {
                q.push(i);
                visited[i] = visited[nowNode] + 1;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        if (visited[i] != -1) {
            cnt += visited[i];
        }
    }

    return cnt;
}

int main() {
    cin >> n >> m;

    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int minNumber = INT_MAX;
    int answer = 0;
    for(int i = 1; i <= n; i++) {
        fill(visited.begin(), visited.end(), -1);

        int bfsResult = bfs(i);

        if(bfsResult < minNumber) {
            minNumber = min(minNumber, bfsResult);
            answer = i;
        }
    }

    cout << answer;

    return 0;
}