#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>,greater<int>> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;
        if(x == 0) {
            if(q.empty()) cout << 0 << "\n";
            else {
                cout << q.top() << "\n";
                q.pop();
            }
        }
        else {
            q.push(x);
        }
    }

    return 0;
}