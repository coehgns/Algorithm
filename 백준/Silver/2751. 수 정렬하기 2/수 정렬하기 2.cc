#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;    // 오름차순
}


int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	int nums;

	for (int i = 0; i < n; i++) {
		scanf("%d", &nums);
		arr[i] = nums;
	}
    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

    
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

	return 0;
}