#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int V, E, K;
vector<pair<int, int>> graph[20001];
int dist[20001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int curDist = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        if (dist[curNode] < curDist) continue;

        for (auto next : graph[curNode]) {
            int nextNode = next.first;
            int cost = next.second;

            if (dist[nextNode] > curDist + cost) {
                dist[nextNode] = curDist + cost;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> V >> E;
    cin >> K;

    for (int i = 1; i <= V; i++) {
        dist[i] = INF;
    }

    int u, v, w;
    for (int i = 0; i < E; i++) {
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    dijkstra(K);

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << '\n';
    }

    return 0;
}