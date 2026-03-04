#include <bits/stdc++.h>
using namespace std;

int n, m, cnt;

int visited[10001];
vector<vector<int>> v;
vector<int> result;

void dfs(int s) {
    visited[s] = 1;
    cnt++;

    for(int next : v[s]) {
        if(!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    cin >> n >> m;
    v.resize(n + 1);
    result.resize(n + 1);

    // 역방향 그래프이므로 반대로 저장
    // a, b이면 b -> a를 신뢰
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        v[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        memset(visited, 0, sizeof(visited));
        cnt = 0;
        dfs(i);
        result[i] = cnt;
    }

    int max = *std::max_element(result.begin(), result.end());

    for(int i = 1; i<= n; i++) {
        if(max == result[i]) {
            cout << i << ' ';
        }
    }

    return 0;
}