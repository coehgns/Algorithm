#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 40) {
			sum += 40;
		}
		else {
			sum += arr[i];
		}
	}
	printf("%d", sum / 5);

	return 0;
}