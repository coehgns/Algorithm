#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int a, b, cost;
};

vector<Edge> edges;
int parent[10001];

int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unionMethod(int i, int j) {
    int a = find(i);
    int b = find(j);
    if (a != b) parent[b] = a;
}

int main() {
    int v, e;
    cin >> v >> e;

    int a, b, c;
    for(int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }

    for(int i = 1; i <= v; i++) {
        parent[i] = i;
    }

    sort(edges.begin(), edges.end(), [](Edge x, Edge y) {
        return x.cost < y.cost;
    });

    int result = 0;

    for (auto e : edges) {
        if (find(e.a) != find(e.b)) {
            unionMethod(e.a, e.b);
            result += e.cost;
        }
    }

    cout << result;

    return 0;
}