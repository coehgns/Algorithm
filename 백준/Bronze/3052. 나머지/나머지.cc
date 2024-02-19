#include <stdio.h>

int main() {
	int n;
	int cnt = 0;
	int array[10];

	for(int i = 0; i < 10; i++) {
		scanf("%d", &n);
		array[i] = (n % 42);
	}

	for(int i = 0; i < 10; i++) {
		int count = 0;
		for(int j = i + 1; j < 10; j++) {
			if (array[i] == array[j]) count++;
		}
		if (count == 0) cnt++;
	}
	printf("%d", cnt);
}