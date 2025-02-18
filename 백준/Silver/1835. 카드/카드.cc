#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> dq;

    for(int i = n; i >= 1; i--) {
        dq.push_front(i);
        for(int j = 0; j < i; j++) {
            dq.push_front(dq.back());
            dq.pop_back();
        }
    }

    while(!dq.empty()) {
        cout << dq.front() << ' ';
        dq.pop_front();
    }
    
    return 0;
}