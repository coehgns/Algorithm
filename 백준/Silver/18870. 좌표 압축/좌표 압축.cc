#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[1000000];
    vector<int> v;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < n; i++) {
        int idx = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
        cout << idx << " ";
    }

    return 0;
}