#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<int>> vec(1001);
vector<int> visited1(1001);
vector<int> visited2(1001);
queue<int> q;

void dfs(int n) {
    visited1[n] = 1;
    cout << n << ' ';
    for (int i : vec[n])
        if (!visited1[i]) dfs(i);
}

void bfs(int n) {
    visited2[n] = 1;
    q.push(n);
    while (!q.empty()) {
        int now = q.front();
        cout << now << ' ';
        q.pop();
        for (int i : vec[now]) {
            if (!visited2[i]) {
                visited2[i] = 1;
                q.push(i);
            }
        }
    }
}

int main() {
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
        sort(vec[i].begin(), vec[i].end());

    dfs(v);
    cout << "\n";
    bfs(v);

    return 0;
}