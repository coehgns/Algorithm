#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	scanf("%s", str);

	int str_length = strlen(str);


	int check = 0;
	for (int i = 0; i < str_length / 2; i++) {
		if (str[i] != str[str_length - i - 1]) {
			check = 1;
			break;
		}

	}
	printf("%d", !check);

	return 0;
}