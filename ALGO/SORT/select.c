#include <stdio.h>

int array[] = { 4, 1, 7, 9, 2 };

int main(void)
{
	int x, y;
	int temp;
	int index_of_min;

	for (x = 0; x < 5; x++) {
		index_of_min = x;

		for ( y = x; y < 5; y++) {
			if (array[index_of_min] > array[y]) {
			index_of_min = y;
//			printf("%d ", array[y]);
			}
		}

		temp = array[x];
		array[x] = array[index_of_min];
		array[index_of_min] = temp;
//		printf("%d\n", array[x]);
	}
	
	for ( x = 0; x < 5; x++) printf("%d\n", array[x]);

	return 0;
}
