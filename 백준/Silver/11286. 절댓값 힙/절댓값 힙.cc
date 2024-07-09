#include <iostream>
#include <queue>
using namespace std;

struct cmp {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) { 
			if (a > b) { 
				return a > b; 
			}
			else return b < a; 
		}
		return abs(a) > abs(b);
	}
};


priority_queue<int, vector<int>,cmp> q;

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