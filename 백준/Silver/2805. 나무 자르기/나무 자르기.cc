#include <bits/stdc++.h>
using namespace std;

int m;
vector<int> v;

bool check(int treeHeight) {

    long sum = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= treeHeight) {
            sum += v[i] - treeHeight;
        }
    }

    if(sum >= m) return true;
    else return false;
}

int main() {
    int n;
    cin >> n >> m;

    int max = 0;
    for(int i = 0; i < n ; i++) {
        int input;
        cin >> input;
        v.push_back(input);
        if(v[i] > max) max = v[i];
    }

    int start = 0;
    int end = max;

    while(start + 1 < end) {
        int mid = (start + end) / 2;

        if(check(mid)) start = mid;
        else end = mid;
    }

    cout << start;

    return 0;
}