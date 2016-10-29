#include <stdio.h>

int main(void)
{
	int arr[] = { 4, 1, 7, 9, 2 };
	int i, temp, j;
	int min_index = 0;

	for (i = 0; i < 5; i++) {
		if (arr[min_index] > arr[i])
			min_index = i;
	}
	printf("%d\n", min_index);
	
	return 0;
}
