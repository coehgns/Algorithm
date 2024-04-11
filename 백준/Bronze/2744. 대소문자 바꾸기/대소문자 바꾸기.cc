#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	scanf("%s", str);
    int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
		else {
			str[i] = str[i] - 32;
		}
	}
    printf("%s", str);

	return 0;
}