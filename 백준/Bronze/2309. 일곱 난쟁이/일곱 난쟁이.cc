#include <stdio.h> 
#include <stdlib.h>

int main() {
	int arr[9];
	int sum = 0;
	int injun = 101;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 9; i++) {
		sum += arr[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i] != arr[j] && (sum - arr[i] - arr[j] == 100)) {
				arr[i] += injun;
				arr[j] += injun;
				injun = 0;
			}
		}
	}
	int temp = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < 7; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}