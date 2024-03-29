#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	int arr[10];
	for (int i = 0; i < t; i++) {
		for (int i = 0; i < 10; i++) {
			scanf("%d", &arr[i]);
		}
		int arr_size = sizeof(arr) / sizeof(int);
		qsort(arr, arr_size, sizeof(int), compare);
		printf("%d\n", arr[7]);
	}

	return 0;
}