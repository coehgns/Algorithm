#include <stdio.h> 

int check(int n) {
	if (n == 1) {
		return 0;
	}
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	int input;
	int count = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (check(input)) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}