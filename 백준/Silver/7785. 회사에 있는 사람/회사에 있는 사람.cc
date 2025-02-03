#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<string> s;

    string name, io;
    for(int i = 0; i < n; i++) {
        cin >> name >> io;
        if(io == "enter") {
            s.insert(name);
        }
        else {
            s.erase(name);
        }
    }

    vector<string> names;
    for(auto element: s) {
        names.push_back(element);
    }

    sort(names.begin(), names.end(), greater());

    for(auto name: names) {
        cout << name << '\n';
    }

    return 0;
}
