#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, arr_n;
  cin >> n >> m;
  int arr[300][300] = { 0, };

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr_n;
      arr[i][j] = arr_n;
    }
  }

  int k, I, J, x, y;
  cin >> k;
  int sum = 0;
  for (int i = 0; i < k; i++) {
    sum = 0;
    cin >> I >> J >> x >> y;
	  for (int i = I - 1; i < x; i++) {
		  for (int j = J - 1; j < y; j++) {
			  sum += arr[i][j];
		  }
	  }
    cout << sum << "\n";
  }

  return 0;
}