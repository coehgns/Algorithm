#include <iostream>
#include <vector>
#include <set>
using namespace std;

int N, K;
vector<string> cards;
bool visited[10];
set<string> result;

void dfs(int depth, string current) {
    if (depth == K) {
        result.insert(current);
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(depth + 1, current + cards[i]);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N >> K;

    cards.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    dfs(0, "");

    cout << result.size() << endl;
}