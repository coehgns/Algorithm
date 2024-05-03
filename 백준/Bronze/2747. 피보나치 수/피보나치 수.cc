#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[100] = { 1, 1 };

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	printf("%d\n", arr[n - 1]);

	return 0;
}