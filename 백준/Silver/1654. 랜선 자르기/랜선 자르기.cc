#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> v;
int n;

bool check(int x) {
    
    int cnt = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= x) {
            cnt += v[i] / x;
        }
    }

    if(cnt >= n) return true;
    else return false;
}

int main() {
    int k;
    cin >> k >> n;

    int big = 0;
    for(int i = 0; i < k; i++) {
        int input;
        cin >> input;
        v.push_back(input);
        if(input > big) big = input;
    }

    unsigned int start = 1;
    unsigned int end = big;

    unsigned int result = 0;
    while(start <= end) {

        int mid = (start + end) / 2;

        if(check(mid)) {
            result = mid;
            start = mid + 1;
        }
        else end = mid - 1;

    }

    cout << result;

    return 0;
}