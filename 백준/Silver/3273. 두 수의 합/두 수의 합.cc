#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, target, cnt = 0; 
    cin >> n;
	
	for (int i = 0; i < n; i++) cin >> arr[i];

	cin >> target;
	
	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (i < j && arr[i] + arr[j] == target) {
				cnt++;
			}
			else if (arr[i] + arr[j] > target) {
				break;
			}
		}
	}

	cout << cnt;
}