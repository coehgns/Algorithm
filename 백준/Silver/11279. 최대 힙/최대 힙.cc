#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int> pq;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if(input == 0) {
            if(pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else pq.push(input);
    }

    return 0;
}