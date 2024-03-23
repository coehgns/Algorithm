#include <stdio.h> 
#include <string.h>

int main() {

	while (1) {
		char str[5];
		scanf("%s", str);

		int str_length = strlen(str);

		if (str[0] == '0') {
			return 0;
		}

		int check = 0;
		for (int i = 0; i < str_length / 2 + (str_length % 2); i++) {
			if (str[i] != str[str_length - i - 1]) {
				check = 1;
				break;
			}
			
		}
		if (check) {
			printf("no\n");
		}
		else {
			printf("yes\n");
		}
	}

	return 0;
}