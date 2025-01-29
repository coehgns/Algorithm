#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    deque<int> dq;
    int cnt = 0;

    for(int i = 1; i <= n; i++) dq.push_back(i);

    int input;
    while(m--) {
        cin >> input;
        int idx = 0;
        for(int i = 0; i < dq.size(); i++) {
            if(dq[i] == input) {
                idx = i;
                break;
            }
        }
        if(idx < dq.size() / 2 + 1) {
            for(int i = 0; i < dq.size(); i++) {
                if (dq.front() == input) {
				    dq.pop_front();
				    break;
			    }
                dq.push_back(dq.front());
			    dq.pop_front();
			    cnt++;
            }
        }
        else {
            for (int i = 0; i < dq.size(); i++) {
				if (dq.front() == input) {
					dq.pop_front();
					break;
				}
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
        }
    }

    cout << cnt;

    return 0;
}
