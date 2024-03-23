#include <stdio.h> 
#include <string.h>

int main() {
	int n; 
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		int sum = 0;
		char str[15];
		sprintf(str, "%d", i);

		int str_length = strlen(str);

		for (int j = 0; j < str_length; j++) {
			sum += str[j] - '0';
		}
		if (sum + i == n) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}