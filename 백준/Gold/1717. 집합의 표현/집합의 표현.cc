#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int x) {
    if(parent[x] < 0) return x;
    return parent[x] = find(parent[x]);
}

void unionMethod(int a, int b) {
    a = find(a);
    b = find(b);

    if(a == b) return;
    if(parent[a] > parent[b]) swap(a, b);

    parent[a] += parent[b];
    parent[b] = a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    parent.resize(n+1, -1);

    while(m--) {
        int x, a, b;
        cin >> x >> a >> b;

        if(x == 0) unionMethod(a, b);
        else {
            if(find(a) == find(b)) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
}