#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = n - i; j > 0; j--) {
			printf(" ");
		}
		for (int k = i * 2 - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}