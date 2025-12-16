#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> q;
vector<int> visited(100001);

int dx[2] = { -1, 1 };
int n, k;

void bfs(int node) {
    q.push({node, 0});
    visited[node] = 1;

    while(!q.empty()) {
        int x = q.front().first;
        int cnt = q.front().second; 
        q.pop();

        if(x == k) {
            cout << cnt;
            break;
        }

        // 3가지 방법 각 방법 동안 cnt는 1씩 증가

        // 2 * x 만큼 순간이동
        if(x * 2 <= 100000 && visited[x * 2] == 0) {
            q.push({x * 2, cnt});
            visited[x * 2] = 1;
        }

        // 왼쪽, 오른쪽으로 1만큼 이동
        for(int i = 0; i < 2; i++) {
            int nx = x + dx[i];
            
            if(0 <= nx && nx <= 100000 && visited[nx] == 0) {
                q.push({nx, cnt + 1});
                visited[nx] = 1;
            }
        }
    }
}

int main() {
    cin >> n >> k;

    bfs(n);

    return 0;
}