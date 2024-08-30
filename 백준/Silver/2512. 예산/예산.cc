#include <bits/stdc++.h>
using namespace std;

int m;
vector<int> v;

bool check(int allBudget) {

    unsigned int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= allBudget) {
            sum += allBudget;
        }
        else sum += v[i];
    }

    if(sum <= m) return true;
    else return false;

}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    cin >> m;

    int start = 1;
    int end = v[n - 1];

    while(start <= end) {

        int mid = (start + end) / 2;

        if(check(mid)) {
            start = mid + 1;
        }
        else end = mid - 1;

    }

    cout << end;

    return 0;
}