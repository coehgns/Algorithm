#include <stdio.h> 
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	int multi = 1;


	if (n == 0) {
		printf("1");
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		multi *= i;
	}
	printf("%d", multi);
	return 0;
}