#include <stdio.h>

int main() {
	int n;
    int arr[101] = { 0, };
	int input;
	int refuse = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &input);
		if (arr[input] == 1) {
			refuse++;
		}
        else {
            arr[input] = 1;
        }
	}
	printf("%d", refuse);


	return 0;
}