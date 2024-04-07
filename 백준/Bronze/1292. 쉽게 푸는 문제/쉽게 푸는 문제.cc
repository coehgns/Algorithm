#include <stdio.h>

int main() {
	int a, b;
	int sum = 0;
	scanf("%d %d", &a, &b);

	int count = 0;
	for (int i = 0; i <= b; i++) {
		for (int j = 0; j < i; j++) {
			count++;
			if (a <= count && count <= b) {
				sum += i;
			}
		}
	}

	printf("%d", sum);

	return 0;
}