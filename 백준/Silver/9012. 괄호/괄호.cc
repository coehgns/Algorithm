#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int check = 0;
		int count = 0;
		char str[51];
		scanf("%s", str);
		int str_length = strlen(str);

		for (int j = 0; j < str_length; j++) {
			if (str[j] == '(') {
				count++;
			}
			else {
				if (count == 0) {
					check = 1;
					break;
				}
				count--;
			}
		}
		if (count == 0 && check == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}