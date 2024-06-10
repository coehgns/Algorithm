#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> v1(n, 0);

    for(int i = 0; i < n; i++) 
        cin >> v1[i];

    sort(v1.begin(), v1.end());

    cin >> m;
    for(int i = 0; i < m; i ++) {
        int target;
        cin >> target;

        int start = 0;
        int end = n - 1;

        int check = 0;
        while(start <= end) {
            int mid = (start + end) / 2;
            if(v1[mid] == target) {
                check = 1;
                break;
            }
            else if(v1[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        cout << check << " ";
    }

    return 0;
}