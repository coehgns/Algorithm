#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int n, m;
vector<pair<int,int>> adj[1001];
bool visited[1001];

int prim(int start) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    
    pq.push({0, start});
    int total = 0;

    while(!pq.empty()) {
        auto [cost, now] = pq.top();
        pq.pop();

        if(visited[now]) continue;
        visited[now] = true;

        total += cost;

        for(auto [nextCost, next] : adj[now]) {
            if(!visited[next]) {
                pq.push({nextCost, next});
            }
        }
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    int a, b, c;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;

        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }

    cout << prim(1) << '\n';

    return 0;
}