#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m;
    cin >> m;
    
    vector<int> v;

    while(m--) {
        int input;
        string str;

        cin >> str;
        
        if(str == "add") {
            cin >> input;
            if(find(v.begin(), v.end(), input) != v.end()) continue;  // 존재하는 경우
            else v.push_back(input);
        }
        if(str == "remove") {
            cin >> input;
            if(find(v.begin(), v.end(), input) == v.end()) continue;  // 존재하지 않는 경우
            else v.erase(remove(v.begin(), v.end(), input), v.end());
        }
        if(str == "check") {
            cin >> input;
            if(find(v.begin(), v.end(), input) != v.end()) cout << 1 << "\n";  // 존재하는 경우
            else cout << 0 << "\n";
        }
        if(str == "toggle") {
            cin >> input;
            if(find(v.begin(), v.end(), input) == v.end()) v.push_back(input);  // 존재하지 않는 경우
            else v.erase(remove(v.begin(), v.end(), input), v.end());
        }
        if(str == "all") {
            v.clear();
            for(int i = 0; i < 20; i++) {
                v.push_back(i + 1);
            }
        }
        if(str == "empty") v.clear();
    }

    return 0;
}