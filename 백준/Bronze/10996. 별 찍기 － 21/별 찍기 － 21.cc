#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= n * 2 - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {
				if (j % 2 == 0) {
					printf(" ");
				}
				else {
					printf("*");
				}
			}
		}
		printf("\n");	
	}

	return 0;
}