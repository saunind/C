#include <stdio.h>

#define N 4

int main(void)
{
	FILE *file;
	char arr[N];

	file = fopen("fscanf.txt", "r");

	while (fgets(arr, N, file) != NULL)
		printf("%s", arr);

	printf("\n");
	fclose(file);

	return 0;
}
