#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[101][101] = {0,};
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int input;
			cin >> input;
			a[i][j] += input;
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}